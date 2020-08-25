#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

#define MAX_LINE 80

char operation[10][MAX_LINE];
int index = 0;

void setup(char inputBuffer[], char **args, int *background);
void History(int signal);

// 主函数
int main(int argc, char **argv)
{
  char inputBuffer[MAX_LINE];   // 存放命令
  int background = 0;           // 1代表后台运行
  char *args[MAX_LINE / 2 + 1]; // 最多40个参数
  signal(SIGINT, History);

  while (1)
  {
    background = 0;
    printf("COMMAND->");
    fflush(stdout); // 需要刷新，不然无法显示
    setup(inputBuffer, args, &background);

    pid_t pid;
    if ((pid = fork()) == (pid_t)-1) // 创建失败
    {
      fprintf(stderr, "\n创建线程失败，线程id为%d\n", pid);
      fflush(stderr);
      exit(-1);
    }
    if (pid == 0) // 判断是子进程
    {
      execvp(args[0], args);
      exit(0);
    }
    else if (background == 0)
      wait(0);
    else if (background == 1)
      continue;
  }
}

void setup(char inputBuffer[], char *args[], int *background)
{
  int length = read(STDIN_FILENO, inputBuffer, MAX_LINE); // 命令的字符数目
  int start = -1;                                         // 命令的第一个字符位置
  int ct = 0;                                             // 下一个参数存入 args[] 的位置

  if (length == 0)
    exit(0);
  if (length < 0) // 读取错误
  {
    perror("命令错误");
    exit(-1);
  }

  for (int i = 0; i < length; i++) // 遍历缓冲区
  {
    operation[index][i] = inputBuffer[i];
    switch (inputBuffer[i])
    {
    // 字符为分割参数的空格或制表符(tab)'\t'
    case ' ':
    case '\t':
    {
      if (start != -1)
      {
        args[ct] = &inputBuffer[start];
        ct++;
      }
      inputBuffer[i] = '\0'; // 终止符
      start = -1;
      break;
    }
    case '\n': // 命令行结束
    {
      if (start != -1)
      {
        args[ct] = &inputBuffer[start];
        ct++;
      }

      inputBuffer[i] = '\0';
      break;
    }
    default: // 其他字符
    {
      if (start == -1)
        start = i;
      if (inputBuffer[i] == '&')
      {
        *background = 1;
        inputBuffer[i] = '\0';
      }
    }
    }
  }
  args[ct] = NULL;

  operation[index][length] = '\0';
  if (inputBuffer[0] != '\0' && inputBuffer[0] != '\n' && inputBuffer[0] != ' ' && inputBuffer[0] != SIGINT)
    index = (index + 1) % 10;
}

void History(int signal)
{
  printf("\n");
  fflush(stdout);
  int num = 0;
  for (int i = 0; i < 10; i++)
  {
    if (operation[(i + index) % 10][0] != '\0' && operation[(i + index) % 10][0] != '\n' && operation[(i + index) % 10][0] != ' ' && operation[(i + index) % 10][0] != SIGINT)
    {
      printf("%d: %s", (num++) + 1, operation[(i + index) % 10]);
      fflush(stdout);
      num %= 10;
    }
  }
  // printf("\ntest\n");
  // fflush(stdout);
}
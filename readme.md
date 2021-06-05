# 我的博客

## 技术相关的坑

1. [用-乌龟git-更加简单地clone代码仓库](./001(forlab01.md))
2. [使用vbox新建winXP来打开-辣个CPU模拟界面](./002(forlab07.md))
3. [硬核安装 Python 以及 numpy 和 sympy 中的常用函数](./003(forlab10.md))
4. [没那么硬核的 Ubuntu 18.04 虚拟机安装指引](004(forlab15.md))
5. [信息安全第七次作业相关摸索](work/信息安全/007/guide.md)
6. [WSL1 升级 WSL2 记录](./005/005.md)
7. [Windows 完全激活指南](https://kufr6z0d17.feishu.cn/docs/doccnp7QM95RIWFVkVrpP1S9h0b)
8. [在树莓派4上尝试部署獭獭的记录](https://kufr6z0d17.feishu.cn/docs/doccnjbYKuKrWofcEPU2OMcxTUh)
9. [一次电脑修复记录](https://kufr6z0d17.feishu.cn/docs/doccn7fDPzptGyBa7qadLfj76Cb)
10. [常用 bt 资源](https://kufr6z0d17.feishu.cn/docs/doccn8lZfqSUCDwJGYyUWWhLmEg)

## 小玩意儿

1. [av 号与 BV 互转](./AvToBv/atb.html)
2. [Google File System 论文阅读笔记](./work/云计算概论/001/18342075_米家龙_作业1.md)

## Matrix 新人任务

[Matrix 线上分享：Web入门基础](work/matrix/share_online/web入门基础)

1. Web入门：`2020-3-3`
   - [X] [第一个网页](./work/matrix/step1/001/tmnt.html)
2. 学习HTML：`2020-3-5`
   - [X] [标记信件](./work/matrix/step1/002/001/letter.html)
   - [X] [构建出有内容的网页](./work/matrix/step1/002/002/index.html)
   - [X] [Mozilla 醒目页面](./work/matrix/step1/002/003/index.html)
   - [X] [构建行星数据](./work/matrix/step1/002/004/blank-template.html)
   - [X] [仿制中山大学 APP / 中山大学微信企业号提供的学生健康申报表单中“个人基本信息”部分的 HTML 结构](./work/matrix/step1/002/005/index.html)
     1. 不使用外部 CSS 库和 UI 库；可按需引入 JavaScript 库。
     2. 不要求仿制界面样式，自己看着办~
     3. 原表单中固定的表单项（如姓名、学院等）改为适合的可输入组件。
     4. 表单项“填报人联系方式”、“紧急联系人手机号”加入适当的验证（按中国内地手机号码匹配）。
     5. 表单项“培养层次”改为使用下拉框，或者在原基础上加入自动建议功能。参考值为本科生、研究生和博士生。
     6. 表单项“籍贯”仅实现单选框部分，不需要实现省市区选择。
     7. 加入表单项“曾到访省份”，使用复选框实现，可选值包括 广东省、湖北省、浙江省、河南省 这四个。
     8. 每个表单项均设置合理的 name 和 value。
3. 学习CSS：`2020-3-7`
   - [X] [CSS first steps: Using your new knowledge](./work/matrix/step1/003/001/index.html)
   - [X] [CSS building blocks: CSS 基本了解](./work/matrix/step1/003/002/index.html)
   - [X] [CSS building blocks: 设计漂亮的信头信笺](./work/matrix/step1/003/003/index.html)
   - [X] [CSS building blocks: 一个炫酷的盒子](./work/matrix/step1/003/004/index.html)
   - [X] [排版社区大学首页](./work/matrix/step1/002/005/index.html)
   - [X] [Fundamental layout comprehension](./work/matrix/step1/003/006/index.html)
4. 学习JS：`2020-3-9`
   - [X] [傻瓜故事产生器](./work/matrix/step1/004/001/index.html)
   - [X] [图库](./work/matrix/step1/004/002/index.html)
   - [X] [为弹跳球展示新增功能](./work/matrix/step1/004/003/index.html)
   - [X] [使用星球大战 API（https://swapi.co/）制作一个搜索 Widget](./work/matrix/step1/004/004/index.html)
     1. 页面上需要有一个文本框 / 搜索框
     2. CSS 库可按需引入，不可引入 JS 库
     3. 当用户在文本框中键入时，读取文本框中用户输入的内容，向 `https://swapi.co/api/people/?search=xxxx` 发送请求，其中 xxxx 需要替换为文本框内容
     4. 使用 Promise / async await 来处理发送请求与读取响应内容的逻辑
     5. 服务器将返回一个 json，具体格式见 `https://swapi.co/api/people`
     6. 在收到服务器响应后，根据响应内容，在文本框下方展示一个自动完成列表（使用 name 来填充）
     7. 为了避免向服务器过度请求，你需要 debounce（防抖）500ms ——也就是在用户键入之后的 500ms 内，如果用户没有再次键入，才发送请求

## 笔记相关

[课程笔记](./note.md)
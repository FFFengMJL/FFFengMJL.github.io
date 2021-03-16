const loopTime = 100;
const dotNumList = [5, 10, 20, 30, 40, 50, 60, 70, 80, 100, 200];

/**
 * 随机获取一个点，计算期望积分
 * @param {Function} func 需要计算定积分的函数
 * @returns {Number} 返回积分
 */
function getOneDot(func) {
  let x = Math.random() * 2 + 2; // x ~ [-1, 1]
  let y = Math.random() * 2 - 1; // x ~ [2, 4]
  let z = func(x, y) * 2 * 2;

  return z;
}

/**
 * 根据点的数量计算积分
 * @param {Number} dotNum
 * @param {Function} func
 * @returns {Number} 返回蒙特卡洛方法采样得到的积分的近似值
 */
function getAMap(dotNum, func) {
  let res = 0;
  let tmp = [];
  for (let i = 0; i < dotNum; i++) {
    let t = getOneDot(func);
    res += t;
    tmp.push(t);
  }
  return res / dotNum;
}

/**
 * 需要计算的定积分函数
 * @param {Number} x 横坐标
 * @param {Number} y 纵坐标
 * @returns {Number} 结果
 */
function originFunction(x, y) {
  return (
    (Math.pow(y, 2) * Math.pow(Math.E, -Math.pow(y, 2)) +
      Math.pow(x, 4) * Math.pow(Math.E, -Math.pow(x, 2))) /
    (x * Math.pow(Math.E, -Math.pow(x, 2)))
  );
}

function main() {
  let resList = [];
  for (let num of dotNumList) {
    resList.push([]);
    let mean = 0; // 均值
    let variance = 0; // 方差

    for (let i = 0; i < loopTime; i++) {
      let intergration = getAMap(num, originFunction); // 当前结果
      resList[resList.length - 1].push(intergration);
      mean += intergration;
    }
    mean /= loopTime; // 计算均值

    // 计算方差
    for (let res of resList[resList.length - 1]) {
      variance += Math.pow(mean - res, 2);
    }
    variance /= loopTime;

    console.log(
      `点数：${num} \t 均值：${mean.toFixed(4)} \t 方差：${variance.toFixed(8)}`
    );
    // console.log(`|${num}|${mean.toFixed(4)}|${variance.toFixed(8)}|`);
  }
}

main();

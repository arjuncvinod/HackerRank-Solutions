function findMedian(arr) {
  let len = arr.length;
  arr.sort();
  let med = Math.floor(len / 2);
  return arr[med];
}

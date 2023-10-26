function divisibleSumPairs(n, k, ar) {
  let count = 0;
  for (let i = 0; i < n; i++) {
    for (let j = 0; j < n; j++) {
      if (i < j && (ar[i] + ar[j]) % k === 0) {
        count++;
      }
    }
  }
  return count;
}

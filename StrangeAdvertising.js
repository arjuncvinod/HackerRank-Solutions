function viralAdvertising(n) {
  let rec = 5,
    like = 0;
  for (let i = 0; i < n; i++) {
    like += Math.floor(rec / 2);
    rec = Math.floor(rec / 2) * 3;
  }
  return like;
}

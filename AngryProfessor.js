function angryProfessor(k, a) {
  let at = 0;
  for (let i = 0; i < a.length; i++) {
    if (a[i] <= 0) at++;
  }
  if (at >= k) {
    return "NO";
  } else {
    return "YES";
  }
}

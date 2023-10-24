// Given an array of integers and a positive integer k, 
// determine the number of (i,j) pairs where i<j and ar[i] + ar[j]  is divisible by k.

// Function Description

// Complete the divisibleSumPairs function in the editor below.

// divisibleSumPairs has the following parameter(s):

// int n: the length of array 
// int ar[n]: an array of integers
// int k: the integer divisor
// Returns
// - int: the number of pairs
// Link to the Problem:https://www.hackerrank.com/challenges/divisible-sum-pairs/problem
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

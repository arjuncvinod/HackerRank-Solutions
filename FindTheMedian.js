// The median of a list of numbers is essentially its middle element after sorting.
// The same number of elements occur after it as before. Given a list of numbers with an odd number of elements, find the median?
// Function Description

// Complete the findMedian function in the editor below.

// findMedian has the following parameter(s):

// int arr[n]: an unsorted array of integers
// Returns

// int: the median of the array
// Link to the Problem:https://www.hackerrank.com/challenges/find-the-median/problem

function findMedian(arr) {
  let len = arr.length;
  arr.sort();
  let med = Math.floor(len / 2);
  return arr[med];
}

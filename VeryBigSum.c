// Function Description

// Complete the aVeryBigSum function in the editor below. It must return the sum of all array elements.

// aVeryBigSum has the following parameter(s):

// int ar[n]: an array of integers .
// Return

// long: the sum of all array elements

// link : https://www.hackerrank.com/challenges/a-very-big-sum/problem

long aVeryBigSum(int ar_count, long* ar) {
 long int sum=0;
 
 for(int i=0;i<ar_count;i++){
     sum+=ar[i];
 }
 return sum;
}
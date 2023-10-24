// Given a square matrix, calculate the absolute difference between the sums of its diagonals.

// Function description

// diagonalDifference takes the following parameter:

// int arr[n][m]: an array of integers
// Return

// int: the absolute diagonal difference

 // link to the problem:https://www.hackerrank.com/challenges/diagonal-difference/problem

int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
 int pdsum=0,sdsum=0,diff=0;
 for(int i=0;i<arr_columns;i++){
     sdsum+=arr[i][arr_columns-i-1];
 }
 for(int i=0;i<arr_columns;i++){
     pdsum+=arr[i][i];
 }
 diff=abs(pdsum-sdsum);
 return diff;
}
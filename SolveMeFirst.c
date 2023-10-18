// Function Description

// Complete the solveMeFirst function in the editor below.

// solveMeFirst has the following parameters:

// int a: the first value
// int b: the second value
// Returns
// - int: the sum of a and b


// link to the problem : https://www.hackerrank.com/challenges/solve-me-first/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int solveMeFirst(int a, int b) {
 return a+b;
}

int main() {
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int sum; 
    sum = solveMeFirst(num1,num2);
    printf("%d",sum);
    return 0;
}

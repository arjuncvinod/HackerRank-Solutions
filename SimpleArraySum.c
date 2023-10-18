// Function Description

// Complete the simpleArraySum function in the editor below. It must return the sum of the array elements as an integer.

// simpleArraySum has the following parameter(s):

// ar: an array of integers

// link to the problem : https://www.hackerrank.com/challenges/simple-array-sum/problem



int simpleArraySum(int ar_count, int* ar) {
    int sum=0,i;
    for(i=0;i<ar_count;i++){
        sum+=ar[i];
    }
    return sum;

}
// Alice and Bob each created one problem for HackerRank. A reviewer rates the two challenges, awarding points on a scale from 1 to 100 for three categories: problem clarity, originality, and difficulty.

// The rating for Alice's challenge is the triplet a = (a[0], a[1], a[2]), and the rating for Bob's challenge is the triplet b = (b[0], b[1], b[2]).

// The task is to find their comparison points by comparing a[0] with b[0], a[1] with b[1], and a[2] with b[2].

// If a[i] > b[i], then Alice is awarded 1 point.
// If a[i] < b[i], then Bob is awarded 1 point.
// If a[i] = b[i], then neither person receives a point.
// Comparison points is the total points a person earned.

// Given a and b, determine their respective comparison points.

// Function Description

// Complete the function compareTriplets in the editor below.

// compareTriplets has the following parameter(s):

// int a[3]: Alice's challenge rating
// int b[3]: Bob's challenge rating

// Return
// int[2]: Alice's score is in the first position, and Bob's score is in the second.

// link to the problem: https://www.hackerrank.com/challenges/compare-the-triplets/problem


int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count) {
    int alice=0,bob=0;

for(int i=0;i<a_count;i++){
if(a[i]>b[i])
alice+=1;
else if(b[i]>a[i])
bob+=1;
else{
    
}
}
*result_count=2;
static int c[2];
c[0]=alice;
c[1]=bob;
return c;
}
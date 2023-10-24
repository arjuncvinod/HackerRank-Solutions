// Two friends Anna and Brian, are deciding how to split the bill at a dinner. 
// Each will only pay for the items they consume. Brian gets the check and calculates Anna's portion. 
// You must determine if his calculation is correct.

// Function Description
//  It should print Bon Appetit if the bill is fairly split. Otherwise, it should print the integer amount of money that Brian owes Anna.

// bonAppetit has the following parameter(s):

// bill: an array of integers representing the cost of each item ordered
// k: an integer representing the zero-based index of the item Anna doesn't eat
// b: the amount of money that Anna contributed to the bill
// link to the Problem: https://www.hackerrank.com/challenges/bon-appetit/problem

void bonAppetit(int bill_count, int* bill, int k, int b) {
    int s=0;
 for(int i=0;i<bill_count;i++){
     if(i==k)
     continue;
     s+=bill[i];
 }
 if(s/2==b)
 printf("Bon Appetit");
 else {
 printf("%d",b-(s/2));
 }
}

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

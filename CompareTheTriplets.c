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
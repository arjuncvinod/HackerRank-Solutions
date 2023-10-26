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
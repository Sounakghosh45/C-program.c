#include <stdio.h>

int main(){ 
int rows=0;
int column=0;
printf("Enter the value of rows:\n");
scanf("%d",&rows);
printf("Enter the value of column:\n");
scanf("%d",&column);
int arr[rows][column];
for(int i=0;i<rows;i++){
   for(int j=0;j<column;j++){
   printf("Enter the element of index-%d,%d :\n",i,j );
   scanf("%d",&arr[i][j]);
   }
}
int p;
int q;
printf("Enter the rows of your array to search:\n");
scanf("%d",&p);

printf("Enter the column of your array to search:\n");
scanf("%d",&q);
if(arr[p][q]){
    printf("%d ",arr[p][q]);
}
else{
    printf("invalid input!");
    
}
}
    

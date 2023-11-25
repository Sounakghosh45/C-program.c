#include <stdio.h>

int main() {
int rows=0;
int column=0;
printf("Enter the value of rows:\n");
scanf("%d",&rows);
printf("Enter the value of column:\n");
scanf("%d",&column);
int arr1[rows][column];
for(int i=0;i<rows;i++){
   for(int j=0;j<column;j++){
   printf("Enter the element of 1st array -%d,%d :\n",i,j );
   scanf("%d",&arr1[i][j]);
   }
}
   printf("-----------------------------\n");
int arr2[rows][column];
for(int i=0;i<rows;i++){
   for(int j=0;j<column;j++){
   printf("Enter the element of 2nd array-%d,%d :\n",i,j );
   scanf("%d",&arr2[i][j]);
   }
}
   
   int sum[rows][column];
   for(int i=0;i<rows;i++){
   for(int j=0;j<column;j++){
  sum[i][j]=arr1[i][j]+arr2[i][j];
       printf("%d ",sum[i][j]);
   }
   printf("\n");
   }
   }

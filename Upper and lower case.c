#include<stdio.h> 
 int main(){ 
     char ch; 
     printf("enter the chracter :\n"); 
     scanf("%c",&ch); 
     if (ch >='A' && ch<= 'Z'){ 
         printf("UC"); 
     }else{ 
         printf("LC"); 
     } 
 }

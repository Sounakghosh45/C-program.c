#include<stdio.h> 
 int main(){ 
     char ch; 
     printf("Enter the chracter:"); 
     scanf("%c",&ch); 
     if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || 
      ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') 
      { 
          printf("%c is a vowel :\n",ch); 
  
      } 
       else{ 
          printf("%c is not a vowel:\n",ch); 
      } 
 }

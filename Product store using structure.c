#include <stdio.h>
#include<string.h>

int main() {
struct product_details{
    char name[30];
    int price;
     int id;
};
int n;
printf("Enter the product Number:");
scanf("%d",&n);
struct product_details pd[n];

for(int i=0;i<n;i++){
printf("Enter The Product Name %d:\n",i+1);
scanf("%s",pd[i].name);
printf("Enter The Product ID:");
scanf("%d",&pd[i].id);
printf("Enter The Product Price:");
scanf("%d",&pd[i].price);
printf("_________________________\n");

}

char searchname[30];
int searchid;
int searchprice;
printf("Enter the Product name to search:");
scanf("%s",searchname);
for(int i=0;i<n;i++){
    if(strcmp(pd[i].name,searchname)==0){
        printf("Product Name:%s\n Product ID:%d\n Product Price:%d\n",pd[i].name,pd[i].id,pd[i].price);
        return 0;
    }
    
    } 
   

    printf("Enter the product ID to search:");
scanf("%d",&searchid);
for(int i=0;i<n;i++){
    if(pd[i].id==searchid){
      printf("Product Name:%s\n Product ID:%d\n Product Price:%d\n",pd[i].name,pd[i].id,pd[i].price);
      return 0;
}

}
printf("Enter the product price to search:");
scanf("%d",&searchprice);
for(int i=0;i<n;i++){
    if(pd[i].price==searchprice){
      printf("Product Name:%s\n Product ID:%d\n Product Price:%d\n",pd[i].name,pd[i].id,pd[i].price);
      return 0;
}
}
}

#include <stdio.h>

int main() {
 float KB;
 printf("Enter the value of storage:\n");
 scanf("%f",&KB);
 printf("Storage value in MB:%f\n",KB*0.001);
printf("Storage value in GB:%f\n",KB*0.001*0.001);
printf("Storage value in TB:%f\n",KB*0.001*0.001*0.001);

}

#include<stdio.h>
int main()
{
 int no1, no2, no3, min, max;

 printf("Enter three numbers ");
 scanf("%d %d %d",&no1, &no2, &no3);

 if (no1>no2>no3){
 printf("Largest Number is %d\n",no1);
 }else if(no2>no3){
 printf("Largest Number is %d\n",no2);
 }else {
 printf("Largest Number is %d\n",no3);
 }

 if (no1<no2<no3){
 printf("Smallest Number is %d\n",no1);
 }else if(no2<no3){
 printf("Smallest Number is %d\n",no2);
 }else {
 printf("Smallest Number is %d\n",no3);
 }
}

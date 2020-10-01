#include<stdio.h>
int main(){

int a  =10,b=20;
printf("a= %d, b= %d",a,b);
int temp;
temp=a;
a=b;
b=temp;

printf("a= %d, b= %d",a,b);
}

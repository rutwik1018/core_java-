#include<stdio.h>
int main(){
 int marks;
 printf("\n enter a your marks = ");
scanf("%d",&marks);

if(marks==100)
printf("\n congrats u got out of .......!");
else if(marks>75)
printf("\n you pass with dictinction first class..!");
else if(marks>60)
printf("\n you pass with first class.......!");
else if(marks>50)
printf("\n you pass with second class.......!");
else if(marks>40)
printf("\n you pass with third class ....!");
else
 printf("\n you are fail.....!");
 

    return 0;
}
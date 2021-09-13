#include<stdio.h>
int main(){
int num;
printf("\n enter a number 1 to 4  : ");
scanf("%d",&num);
switch(num){
    case 1:
    printf("\n you entered a number 1");
    break;
      case 2:
    printf("\n you entered a number 2");
    break;
     case 3:
    printf("\n you entered a number 3");
    break;
     case 4:
    printf("\n you entered a number 4");
    break;
}


return 0;
}
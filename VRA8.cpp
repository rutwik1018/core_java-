#include<stdio.h>
#include<string.h>
struct students{
    int rno;
    char name[33];
    int marks;
};
 int main(){
students s[10];
int i,n;
printf("enter a total number of students:");
scanf("%d",&n);




for(int i = 0 ; i < n  ;  i++) {
printf("\n enter a rol number ,name, marks of students  1 ");
scanf("%d %s %d", &s[i].rno,&s[i].name,&s[i].marks);
}


 printf("\n sturdents informtion: ");
for (int  i = 0; i < n ; i++)
{
   printf(" \n %d \t %s \t %d ", s[i].rno,s[i].name,s[i].marks);
}



     return 0;
 }
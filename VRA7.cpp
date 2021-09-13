#include <stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];
    int len1,len2;
    printf("\n enter a string str 1 :");
    gets(str1);
    printf("\n entered a string str 2 : ");
    scanf("%s", &str2);

    /// cout lenght of string
    len1  =  strlen(str1);
    len2  =  strlen(str2);
    printf("\n the lenght of str1=%d , \n lenght of str2 = %d ",len1,len2);
    // copy string in another
    strcpy(str1,str2);  //str2 copy in str1
    printf(" \n copied string in anothrer = %s ",str1);

    strcat(str1,str2);  // str2 connected to str1
    printf("\n connected string is = %s ", str1);
// revered string
strrev(str1);
printf("\n revered string is = %s",str1);



    return 0;
}
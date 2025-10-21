#include<stdio.h>
#include"mylib.h"
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("isArmstrong(%d)=%s\n",num,isArmstrong(num)?"Yes":"No");
    printf("isAdams(%d)=%s\n",num,isAdams(num)?"Yes":"No");
    printf("isPrimePalindrome(%d)=%s\n",num,isPrimePalindrome(num)?"Yes":"No");
    return 0;
}
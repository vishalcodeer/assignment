#include<math.h>
#include"mylib.h"
int reverseDigits(int num)
{
    int rev=0;
    rev=rev*10+num%10;
    return rev;
}
int isArmstrong(int num)
{
    int temp=num,digits=0,sum=0;
    double b;
    while (temp!=0)
    {
        digits++;
        temp/=10;
    }
    temp=num;
    while (temp!=0)
    {
        int a=temp%10;
        b=pow(a,digits);
        sum+=b;
        temp/=10;
    }
    if (sum==num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isAdams(int num)
{
    int originalSquare=num*num;
    int reversedNum=reverseDigits(num);
    int reversedSquare=reversedNum*reversedNum;
    int reversedSquareReversed=reverseDigits(reversedSquare);
    if (originalSquare==reversedSquareReversed)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int Prime(int num)
{
    int temp=num,flag=0;
    if (temp<=1)
    {
        return 0;
    }
    for (int i=2;i*i<=temp;i++)
    {
        if (temp%i==0)
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int Palindrome(int num)
{
    int rev=0,temp=num;
    if (reverseDigits(temp))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isPrimePalindrome(int num)
{
    if (Prime(num) && Palindrome(num))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
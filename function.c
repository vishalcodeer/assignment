#include<stdio.h>
#include<math.h>
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
int reverseDigits(int num)
{
    int rev=0,temp=num;
    while (temp!=0)
    {
        rev=rev*10+temp%10;
        temp/=10;
    }
    return rev;
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
int main()
{
    int choice,num;
    do
    {
        printf("|============= MENU =============|\n");
        printf("|    1. Check Armstrong Number   |\n");
        printf("|      2. Check Adams Number     |\n");
        printf("|3. Check Prime Palindrome Number|\n");
        printf("|            4. Exit             |\n");
        printf("|================================|\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        if (choice==4)
        {
            printf("Exiting Program. GoodBye!!\n");
            break;
        }
        printf("Enter a number: ");
        scanf("%d",&num);
        switch (choice)
        {
            case 1:
                if (isArmstrong(num))
                {
                    printf("%d is an armstrong number\n",num);
                }
                else
                {
                    printf("%d is not an armstrong number\n",num);
                }
                break;
            case 2:
                if (isAdams(num))
                {
                    printf("%d is an adams number\n",num);
                }
                else
                {
                    printf("%d is not an adams number\n",num);
                }
                break;
            case 3:
                if (isPrimePalindrome(num))
                {
                    printf("%d is a Prime Palindrome Number\n",num);
                }
                else
                {
                    printf("%d is not a Prime Palindrome Number\n",num);
                }
                break;
            default:
                printf("Invalid Choice! Please select between 1-4.\n");
        }
    }
    while (choice!=4);
    return 0;
}
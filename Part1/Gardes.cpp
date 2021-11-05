#include<stdio.h>

int main()
{
    int grade;
    printf("Enter your marks ");
    scanf("%d",&grade);
    
    if(grade<60)
    {
        printf("Grade E");
    }
    else if(grade>=60 && grade<70)
    {
        printf("Grade D");
    }
    else if(grade>=70 && grade<80)
    {
        printf("Grade C");
    }
    else if(grade>=80 && grade<90)
    {
        printf("Grade B");
    }
    else if(grade>=90 && grade<100)
    {
        printf("Grade A");
    }
}


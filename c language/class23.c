#include<stdio.h>

int main()
{
    
    int marks[10],sum=0;
    printf("enter the marks of 10 students\n");
    for (int i = 0; i < 10; i++)
    {
        printf("marks of student no %d is:",i);
        scanf("%d", &marks[i]);
        sum+=marks[i];
    }
    
}
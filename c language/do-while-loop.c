#include<stdio.h>
int main(){
    int num, i=0;
    printf("enter a number\n",num);
    scanf("%d", &num);
    do
    {
        printf("%d\n", i);
        i=i+1;
    } while (i<num);
    return 0;
}
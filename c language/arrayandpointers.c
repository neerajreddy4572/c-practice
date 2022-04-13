#include <stdio.h>
int main()
{
   //char a= '3';
   //char*ptra = &a;
   //printf("%d\n", ptra-2);
   //ptra++;
   //printf("%d\n", ptra);
   //printf("%d\n", ptra-2);
   int arr[] = {1,2,3,4,5,6,67};
    printf("the address of first element of array is %d\n", &arr);
    printf("the address of first function is %d\n", &arr[0]);
    printf("the address of first function is %d\n",arr);

    printf("the address of second function is %d\n", &arr[1]);
    printf("the address of second function is %d\n", arr+1);
    
    printf("the address of third function is %d\n", &arr[2]);
    printf("the address of third function is %d\n", arr+2);

    printf("the value of first function is %d\n",*(arr));
    printf("the value of first function is %d\n",*(&arr[0]));
    printf("the value of first function is %d\n",arr[0]);
    printf("the value of second functionis %d\n",arr[1]);
    printf("the value of second functionis %d\n",*(arr+1));
    printf("the value of second functionis %d\n",*(&arr[1]));
    return 0;
}
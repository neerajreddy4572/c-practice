#include <stdio.h>
#include<string.h>
int main()
{
    char s1[] = "harry";
    char s2[] = "ravi";
    strcat(s1,s2);
    printf("%s is friend of %s", s1 ,s2);
    return 0;
    }
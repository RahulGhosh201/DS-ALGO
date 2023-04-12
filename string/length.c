#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000];
    printf("Enter the string: ");
    scanf("%s",str);
    // int i=0;
    // for(i=0;str[i]!='\0';++i);
    // printf("Length of the string: %d",i);
    printf("Length: %ld",strlen(str));
    return 0;
}
#include <stdio.h>
#include <string.h>
int main()
{
    int i,j;
    char userStr1[100],userStr2[100];
    printf("Enter the First String: ");
    gets(userStr1);
    printf("Enter the Second String: ");
    gets(userStr2);
    printf("\n\nThe Common Elements of the Strings: ");
    for(i=0;userStr1[i]!='\0';i++)
    {
        for(j=0;userStr2[j]!='\0';j++)
        {
            if(userStr1[i]==userStr2[j])
            {
                printf("%c",userStr1[i]);
                break;
            }
        }
    }
    printf("\n\n");
    return 0;
}

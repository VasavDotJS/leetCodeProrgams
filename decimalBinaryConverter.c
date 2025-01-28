#include <stdio.h>
void binaryConvert(int num)
{
    int binaryEqu[200],temp=num,i=0,j;
    if(num==1)
        printf("The Binary Equivalent is 1\n");
    else if(num==0)
        printf("The Binary Equivalent is 0\n");
    else{
        while(temp>0)
        {
           binaryEqu[i++]=temp%2;
           temp=temp/2;
        }
    printf("The Binary Equivalent of %d is: ",num);
    for(j=i-1;j>=0;j--)
    {
        printf("%d",binaryEqu[j]);
    } 
    printf("\n");
    }
}
int main()
{
    int userInp;
    printf("Enter the Number You Want to Convert to Binary: ");
    scanf("%d",&userInp);
    binaryConvert(userInp);
    printf("\n\n");
    return 0;
}

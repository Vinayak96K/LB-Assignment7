#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    int iValue=0;
    BOOL bRet=TRUE;

    printf("Enter a number:");
    scanf("%d",&iValue);

    bRet=CheckArmStrong(iValue);

    if(bRet==TRUE)
    {
        printf("%d is an armstrong number.\n",iValue);
    }
    else if (bRet==FALSE)
    {
        printf("%d is not an armstrong number.\n",iValue);
    }
    else
    {
        printf("ERROR: Incorrect input!\n");
    }


    return 0;
}

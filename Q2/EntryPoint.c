#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    int iValue=0;
    BOOL bRet=TRUE;

    printf("Enter a number:");
    scanf("%d",&iValue);

    bRet=CheckStrong(iValue);

    if(bRet)
    {
        printf("%d is a strong number.\n",iValue);
    }
    else
    {
        printf("%d is not a strong number.\n",iValue);
    }


    return 0;
}

#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    int iValue,iRet=0;

    printf("Enter a number:");
    scanf("%d",&iValue);

    iRet=GenericRoot(iValue);

    printf("Generic root of %d : %d\n",iValue,iRet);

    return 0;
}

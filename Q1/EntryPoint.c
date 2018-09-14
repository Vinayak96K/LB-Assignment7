#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    
    int iValue1,iValue2;
    LONG lRet=0;
    printf("Enter a number:");
    scanf("%d",&iValue1);
    printf("Enter power:");
    scanf("%d",&iValue2);

    lRet=Power(iValue1,iValue2);

    printf("Answer:%ld\n",lRet);


    return 0;
}

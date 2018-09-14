#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    int iValue1,iValue2;
    printf("Enter start:");
    scanf("%d",&iValue1);
    printf("Enter end:");
    scanf("%d",&iValue2);

    PrimeRange(iValue1,iValue2);
    
    return 0;
}

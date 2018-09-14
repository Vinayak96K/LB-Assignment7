#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    int iPrinciple;
    int iTime_Months;
    float fRate_of_interest;
    double dRet;

    printf("Enter the principle amount:");
    scanf("%d",&iPrinciple);
    printf("Enter the duration in months:");
    scanf("%d",&iTime_Months);
    printf("Enter the rate of interest:");
    scanf("%f",&fRate_of_interest);

    dRet=dSimpleInterest(iPrinciple,iTime_Months,fRate_of_interest);

    if(dRet!=0.0)
    {
        printf("Simple Interest:%f\n",dRet);
    }
    else
    {
        printf("ERROR: Incorrect input values.\n");
    }

    return 0;
}

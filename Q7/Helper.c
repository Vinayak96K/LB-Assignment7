#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////
//  Function Name: Pattern
//  Description: Accepts one number and prints its desired pattern.
//  Input: int[IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt1=0;
    int iCnt2=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt1=iNo;iCnt1>0;iCnt1--)
    {
        printf("%d\t",iCnt1);

        for(iCnt2=1;iCnt2<=iCnt1;iCnt2++)
        {
            printf("#\t");
        }
    }    
    printf("\n");


}
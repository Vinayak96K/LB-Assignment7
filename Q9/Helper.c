#include"MyHeader.h"

////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: PrimeRange
//  Description: Accepts two number as start and end and displays all prime number in that range.
//  Input: int[IN,IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////

void PrimeRange(int iStart, int iEnd)
{
    //printf("Entered Funtion");
    int iCnt=0;
    int iCnt1=0;
    int flag=1;

    if(iStart<0)
    {
        iStart=-iStart;
    }

    if(iStart>=iEnd)
    {
        printf("Incorrect input!\n");
        return;
    }

    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        flag=1;
        for(iCnt1=iCnt/2;iCnt1>=2;iCnt1--)
        {
            if(iCnt%iCnt1==0)
            {
                flag=0;
               
            }
        }
        if(flag!=0)
        {
            printf("%d\t",iCnt);
        }
        flag=1;
    }
    printf("\n");

}
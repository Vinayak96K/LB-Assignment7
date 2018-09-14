#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////
//  Function Name: SumRange
//  Description: Accepts two numbers and returns the sum between the range.
//  Input: int[IN]
//  Output: int[OUT]
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////

int SumRange(int iStart, int iEnd)
{
    int iAns=0;
    int iCnt=0;

    if(iStart>=iEnd)
    {
        return ERR;
    }

    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        iAns=iAns+iCnt;
    }
    return iAns;

}
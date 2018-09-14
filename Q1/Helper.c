#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////
//  Function Name: Power
//  Description: Accepts two numbers as number and its power and returns the answer.
//  Input: int[IN,IN]
//  Output: LONG[OUT]
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////

LONG Power(int iNo1,int iNo2)
{
    LONG lAns=1;
    int iCnt=0;
    if(iNo2<0)
    {
        iNo2=-iNo2;
    }
    for(iCnt=1;iCnt<=iNo2;iCnt++)
    {
        lAns=lAns*iNo1;
    }
    return lAns;

}
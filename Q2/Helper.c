#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: CheckStrong
//  Description: Accepts one number and returns true if i=the number is a strong number otherwise returns false.
//  Input: int[IN]
//  Output: BOOL[OUT]
//  Author: Vinayak Mahendra Patil
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL CheckStrong(int iNo)
{
    int iDno=iNo;
    int iCnt1=0;
    int iAns=1;
    int iSum=0;
    int iDigit=0;
    while(iNo!=0)
    {
        iDigit=iNo%10;

        if(iDigit==1)
        {
            iSum=iSum+1;
        }
        else if(iDigit==0)
        {
            iSum=iSum+0;
        }
        else
        {
        for(iCnt1=1;iCnt1<=iDigit;iCnt1++)
        {
            iAns=iAns*iCnt1;
        }
        //printf("%d\n",iAns);
        iSum=iSum+iAns;
        iAns=1;
        }
        iNo=iNo/10;
    }
    if(iDno==iSum)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
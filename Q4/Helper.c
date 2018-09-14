#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: CheckStrong
//  Description: Accepts one number and returns true if if the number is an armstrong number otherwise returns false.
//  Input: int[IN]
//  Output: BOOL[OUT]
//  Author: Vinayak Mahendra Patil
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL CheckArmStrong(int iNo)
{
        int iDigit, iCnt=0,icnt1=0;
    int iAns=1,iDno,iSum=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    iDno=iNo;
    
    if(iNo!=0)
    {
    while(iDno!=0)
    {
        iDno=iDno/10;
        iCnt++;
    }
    
    iDno=iNo;
    
    while(iDno!=0)
    {
        iDigit=iDno%10;
        if(iDigit==0)
        {
            iSum=iSum+0;
        }
        else if(iDigit==1)
        {
            iSum=iSum+1;
        }
        else
        {
            for(icnt1=1;icnt1<=iCnt;icnt1++)
            {
                iAns=iAns*iDigit;
            }
            iSum=iSum+iAns;
            iAns=1;
        }
        iDno=iDno/10;
    }

    //printf("%d\n",iSum);
    
    if(iNo==iSum)
    {
        return TRUE;
    }
    else
    {
      return FALSE;
    }
    }
    else
    {
        return ERR;
    }
}

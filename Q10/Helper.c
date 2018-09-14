#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////
//  Function Name: GenericRoot
//  Description: Accepts one number and returns the generic root.
//  Input: int[IN]
//  Output: int[OUT]
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////

int GenericRoot(int iNo)
{
    int iAns=0;
    int iSum=0;
    int iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        iSum=iSum+iDigit;
        iNo=iNo/10;
    }
    iAns=iSum;
    iSum=0;

    while(iAns>9)
    {
        while(iAns!=0)
        {
            iDigit=iAns%10;
            iSum=iSum+iDigit;
            iAns=iAns/10;
        }
        iAns=iSum;
    }
    
    return iAns;

}
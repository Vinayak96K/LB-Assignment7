#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: Frequency
//  Description: Accepts one number and returns the frequency of each digit occur into the number.
//  Input: int[IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////////////////

void Frequency(int iNo)
{
    int iArr[10]={0,0,0,0,0,0,0,0,0,0};
    int iDigit=0,iCnt=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo!=0)
    {
        iDigit=iNo%10;

        switch(iDigit)
        {
            case 0:
                iArr[iDigit]++;
                break;
            case 1:
                iArr[iDigit]++;
                break;
            case 2:
                iArr[iDigit]++;
                break;
            case 3:
                iArr[iDigit]++;
                break;
            case 4:
                iArr[iDigit]++;
                break;
            case 5:
                iArr[iDigit]++;
                break;
            case 6:
                iArr[iDigit]++;
                break;
            case 7:
                iArr[iDigit]++;
                break;
            case 8:
                iArr[iDigit]++;
                break;
            case 9:
                iArr[iDigit]++;
                break;
        }

        iNo=iNo/10;
    }

    for(iCnt=0;iCnt<10;iCnt++)
    {
        if(iArr[iCnt]!=0)
        {
            printf("%d -> %d\n",iCnt,iArr[iCnt]);
        }
    }

}
#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////
//  Function Name: fSimpleInterest
//  Description: Returs the simple interest.
//  Input: int[IN,IN] float[IN] 
//  Output: double[OUT]
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////

double dSimpleInterest(int iPri,int iTime,float fRate)
{
    double dAns;
    if(iPri>0 && iTime>0 && fRate>0.0)
    {
        dAns=(float)(iPri*iTime*fRate)/100;
        return dAns;
    }
    else
    {
        return 0.0;
    }
}
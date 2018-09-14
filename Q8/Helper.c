#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////
//  Function Name: Display
//  Description: Accepts one character and displays the type of character.
//  Input: int[IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{

    if(ch>='A' && ch<='Z')
    {
        printf("Capital Character.\n");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("Small Character.\n");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("It is a digit.\n");
    }
    else
    {
        printf("Special Symbol.\n");
    }

}
// Input : 18
// Output : 1   3   5   7   9   11  13

#include<stdio.h>
////////////////////////////////////////////////////////////////////
//
//   Function Name  :   OddDisplay
//   Input          :   integer 
//   output         :   integer
//   Description    :   Display ODD Numbers
//   Date           :   30/10/2026
//   Author         :   Nikita Balasaheb Mohite
//
////////////////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{

    if(iNo % 2 != 0)
    {
        printf("Number is Odd");
    }
    else
    {
        printf("Number is Even");
    }

}

int main()
{
    int iValue = 0;
     
    printf("Enter Number\n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}
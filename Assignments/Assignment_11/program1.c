/*
 Input : 24  35
 Output : 23    24  25  26  27  28  29  30  31  32  33  34  35



*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//   Function Name  :   RangeDisplay
//   Input          :   Integer 
//   output         :   Integer
//   Description    :   Display Range Between TWO Number 
//   Date           :   31/10/2026
//   Author         :   Nikita Balasaheb Mohite
//
////////////////////////////////////////////////////////////////////

void RangeDisplay(int iStart, int iEnd)
{
    int icnt = 0;
    for(icnt = iStart; icnt <= iEnd; icnt ++)
    {
        printf("%d\t",icnt);
    }

    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting point\n");
    scanf("%d",&iValue1);

    printf("Enter ending point\n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return 0;
}
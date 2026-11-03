/*
    Input: 23 30
    output: 24 26  28  30  32  34

    Input: 10 18
    Output: 10 12  14  16  18
    

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//   Function Name  :   RangeDisplayEven
//   Input          :   Integer 
//   output         :   Integer
//   Description    :   Display Even Range Between TWO Number 
//   Date           :   3/11/2026
//   Author         :   Nikita Balasaheb Mohite
//
////////////////////////////////////////////////////////////////////


void RangeDisplayEven(int iStart, int iEnd)
{
    int icnt =0;
    for(icnt = iStart; icnt <= iEnd; icnt++)
    {
        if(icnt % 2 == 0)
        {
            printf("%d\t",icnt);
        }
    }
    printf("\n");
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting point\n");
    scanf("%d",&iValue1);

    printf("Enetr Ending point\n");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return 0;
}
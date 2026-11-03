/*

Input : 23  30
output: 212

Input: 10  18
Output: 126

Input: -10  2
Ouput: Invalid range

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//   Function Name  :   RangeSum
//   Input          :   Integer 
//   output         :   Integer
//   Description    :   Display sum of that range TWO Number 
//   Date           :   3/11/2026
//   Author         :   Nikita Balasaheb Mohite
//
////////////////////////////////////////////////////////////////////

int RangeSum(int iStart, int iEnd)
{
    int icnt =0;
    int isum = 0;

    if(iStart > iEnd || (iStart < 0 && iEnd < 0))
    {
        printf("Invalid range\n");
        return 0;
    }

    for(icnt = iStart; icnt <= iEnd; icnt++)
    {
        isum = isum + icnt;
    }

    return isum;
        
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter Starting point\n");
    scanf("%d",&iValue1);

    printf("Enetr Ending point\n");
    scanf("%d",&iValue2);

   iRet = RangeSum(iValue1,iValue2);

    if(iValue1 >= 0 || iValue2 >= 0)
    {
        if(iValue1 <= iValue2)
        {
            printf("Sum is: %d\n",iRet);
        }
    }

    return 0;
}
// Input : 2
//Output : 20   18  16  14  12  10  8   6   4   2

//Input : 5
//Output: 50    45  40  35  30  25  20  15  10  5

//Input : -5
//Output: 50    45  40  35  30  25  20  15  10  5


#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//   Function Name  :   TableRev
//   Input          :   integer 
//   output         :   integer
//   Description    :   Display Table of Number in Reverse 
//   Date           :   30/10/2026
//   Author         :   Nikita Balasaheb Mohite
//
////////////////////////////////////////////////////////////////////

void TableRev(int iNo)
{

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int icnt = 0;
    for(icnt = 10; icnt >= 1; icnt--)
    {
        printf("%d\t",icnt*iNo);
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter Number\n");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}
// Input : 2
// Output: 2    4   6   8   10  12  14  16  18  20

//Input: 5
//Output: 5  10  15  20  25  30  35  40  45  50

//Input: -5
//Output: 5  10  15  20  25  30  35  40  45  50

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//   Function Name  :   Table
//   Input          :   integer 
//   output         :   integer
//   Description    :   Display Table of Number
//   Date           :   30/10/2026
//   Author         :   Nikita Balasaheb Mohite
//
///////////////////////////////////////////////////////////////////

void Table(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int icnt = 0;
    for(icnt = 1; icnt <= 10; icnt ++)
    {
        printf("%d\t",icnt*iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;

}
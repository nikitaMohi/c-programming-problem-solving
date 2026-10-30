// INput : 4
// Output : 4   8   12  16  20

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//   Function Name  :   MultipleDisplay
//   Input          :   integer 
//   output         :   integer
//   Description    :   Display first 5 Multiplies of Number
//   Date           :   30/10/2026
//   Author         :   Nikita Balasaheb Mohite
//
////////////////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int icnt = 0;
    for(icnt = 1; icnt <= 5; icnt ++)
    {
        printf( "%d\t",iNo*icnt);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}
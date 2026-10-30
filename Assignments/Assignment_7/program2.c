// Input : 8
// Output : 1   2   3   4   5   6   7   8

#include<stdio.h>

////////////////////////////////////////////////////
//
//   Function Name  :   Display
//   Input          :   integer 
//   output         :   integer
//   Description    :   Display NO.of Inputs 
//   Date           :   30/10/2026
//   Author         :   Nikita Balasaheb Mohite
//
///////////////////////////////////////////////////
void Display(int iNo)
{
    int icnt = 0;
    for(icnt = 1; icnt <=iNo; icnt ++)
    {
        printf("%d\t",icnt);
    }
}
int main()
{
    int iValue = 0;
    
    printf("Enetr Number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
//Input : 5
//Output: *  *   *   *   *  #   #   #   #   #

//Input : 6
//Output: *  *  *   *   *   *   #   #   #   #   #   #

//Input: -5
//Output: *  *   *   *   *  #   #   #   #   #

//Input : 2
//Output: *  *  #   #
 
#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//   Function Name  :   Display
//   Input          :   integer 
//   output         :   integer
//   Description    :   Display Pattern
//   Date           :   30/10/2026
//   Author         :   Nikita Balasaheb Mohite
//
////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int icnt = 0;
    for(icnt = 1; icnt <= iNo*2; icnt++)
    {
        
        if(icnt <= iNo)
        {
            printf("*\t");
        }
        else
        {
            printf("#\t");
        }
        
        
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
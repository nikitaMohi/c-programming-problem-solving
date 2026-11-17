/*
Input : 5

Output: 5   #   4   #   3   #   2   #   1   #                                                                  
         
        
        
*/


#include<stdio.h>

///////////////////////////////////////////////////////////////////////////
//
//   Function Name  :   Pattern
//   Input          :   Integer 
//   output         :   Integer
//   Description    :   display Number of Rows and Columbs
//   Date           :   16/11/2026
//   Author         :   Nikita Balasaheb Mohite
//
///////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int i;
    
    for(i = iNo; i >= 1; i--)
    {
        printf("%d\t", i);
        printf("#\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Nuber of rows and Colunns\n");
    scanf("%d%d",&iValue);

    Pattern(iValue);

    return 0;

}


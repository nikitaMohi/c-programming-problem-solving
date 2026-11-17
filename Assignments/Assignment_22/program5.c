/*
Input : 8

Output:  2  4   6   8   10  12  14  16                                                                    
         
        
        
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
    
    for(i = 1; i <= iNo; i++)
    {
        
        printf("%d\t", i*2);
        
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


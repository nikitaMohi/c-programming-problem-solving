/*
Input : iRow = 4     iCol = 4

Output: 1   2   3   4   5
        1   2           5
        1       3       5
        1           4   5
        1   2   3   4   5                                                                                 
         
        
        
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

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    

    for(i = 1; i<=iRow; i++)
    {
        for(j = 1; j<=iCol; j++)
        { 
            if(i == 1 || i == 5 || j == 1 || j == 5 || i == j)
            {
                printf("%d\t", j);
            }
            else
            {
                printf("\t");
            }
        }
            

        }
        printf("\n");
    }



int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Nuber of rows and Colunns\n");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

}


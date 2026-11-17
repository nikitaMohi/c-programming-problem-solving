/*
Input : iRow = 3     iCol = 4

Output: 1   1   1   1
        2   2   2   2
        3   3   3   3
        4   4   4   4                                                                           
                                                                                           
         
        
        
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
        for(j = 1; j <= iCol; j++)
        { 
           printf("%d\t", i);


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


/*
    Input : 12
    Output : 6  4   3   2   1

    Input : 13
    Output : 1
            
    Input : 10
    Output :5   2   1   
    
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////
//
//   Function Name  :   FactRev
//   Input          :   Integer 
//   output         :   Integer
//   Description    :   Display Reverse Factor
//   Date           :   3/11/2026
//   Author         :   Nikita Balasaheb Mohite
//
///////////////////////////////////////////////////////////////////////////


void FactRev(int iNo)
{
    int icnt = 0;
    
    for(icnt = iNo/2; icnt >= 1; icnt--)
    {
        printf("%d\t",icnt);
        
    }

    printf("\n");

}

int main()
{
    int iValue = 0;
    

    printf("Enter Number\n");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}

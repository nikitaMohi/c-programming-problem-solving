/*
    Input : 12
    Output : 50

    Input : 13
    Output :77
            
    Input : 10
    Output :37 
    
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////
//
//   Function Name  :   SumNonFact
//   Input          :   Integer 
//   output         :   Integer
//   Description    :   Display all Non  Factor Summation
//   Date           :   4/11/2026
//   Author         :   Nikita Balasaheb Mohite
//
///////////////////////////////////////////////////////////////////////////


void SumNonFact(int iNo)
{
    int icnt = 0;
    int isum = 0;
    
    for(icnt = 1; icnt <= iNo; icnt++)
    {
         if(iNo % icnt != 0)
         {
            isum = isum + icnt;
             
         }
        
    }

    printf("%d\t",isum);

}

int main()
{
    int iValue = 0;
    

    printf("Enter Number\n");
    scanf("%d",&iValue);

    SumNonFact(iValue);

    return 0;
}

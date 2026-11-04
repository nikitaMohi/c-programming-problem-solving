/*
    Input : 12
    Output : -22     (16-50)      

    Input : 13
    Output :-63
            
    Input : 10
    Output :-19
    
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////
//
//   Function Name  :   FactDiff
//   Input          :   Integer 
//   output         :   Integer
//   Description    :   Display NonFactor and Factro diffrence
//   Date           :   4/11/2026
//   Author         :   Nikita Balasaheb Mohite
//
///////////////////////////////////////////////////////////////////////////


int FactDiff(int iNo)
{
    int icnt = 0;
    int iFactor = 0;
    int iNonFactor = 0;

    
    for(icnt = 1; icnt <= iNo; icnt++)
    {
         if(iNo % icnt == 0)
         {
            iFactor = iFactor + icnt;
             
         }
         else
         {
            iNonFactor = iNonFactor + icnt;
         }
        
    }

    return iFactor - iNonFactor;

}

int main()
{
    int iValue = 0;
    int iRet = 0;
    

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("diffreanec : %d\n",iRet);

    return 0;
}

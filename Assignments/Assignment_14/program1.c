/*
    Input : 12
    Output : 144   (1*2*3*4*6)

    Input : 13
    Output : 1     (1)
            
    Input : 10
    Output :10    (1*2*3)   
    
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////
//
//   Function Name  :   MultiFact
//   Input          :   Integer 
//   output         :   Integer
//   Description    :   Multiplication of Factors
//   Date           :   3/11/2026
//   Author         :   Nikita Balasaheb Mohite
//
///////////////////////////////////////////////////////////////////////////


int MultiFact(int iNo)
{
    int icnt = 0;
    int iMult = 1;

    for(icnt = 1; icnt <= iNo; icnt++)
    {
        if(iNo % icnt == 0)
        {
            iMult = iMult * icnt;
        }
    }

    return iMult;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

   iRet = MultiFact(iValue);

   printf("%d\n",iRet);

    return 0;
}

//Input : 5
//Output: 8       (4*2)

//Input : -5
//Output: 8       (4*2)

//Input: 10
//Output: 3840   (10*8*6*4*2)

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//   Function Name  :   EvenFcatorial
//   Input          :   integer 
//   output         :   integer
//   Description    :   Display EvenFcatorial Number
//   Date           :   31/10/2026
//   Author         :   Nikita Balasaheb Mohite
//
////////////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;

    }

    int icnt = 0;
    int iFact = 1;

    for(icnt = 1; icnt <= iNo; icnt++)
    {
        if(icnt % 2 == 0)
        {
            iFact = iFact * icnt;
            
        }
    }
    return iFact;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial is: %d",iRet);

    return 0;
}
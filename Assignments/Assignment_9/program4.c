//Input : 5
//Output: 15      (5*3*1)

//Input : -5
//Output: 15      (5*3*1)

//Input : 10
//Output: 945     (9*7*5*3*1)

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//   Function Name  :   OddFactorial
//   Input          :   integer 
//   output         :   integer
//   Description    :   Display Odd Factorial Number
//   Date           :   31/10/2026
//   Author         :   Nikita Balasaheb Mohite
//
////////////////////////////////////////////////////////////////////

int OddFactorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int icnt = 0;
    int iFact = 1;

    for(icnt = 1; icnt <= iNo; icnt++)
    {
        if(icnt % 2 != 0)
        {
            iFact = iFact*icnt;
        }
    }
    return iFact;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial is: %d",iRet);

    return 0;
}
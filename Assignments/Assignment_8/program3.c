// Input : 5
// Output : 120     (5*4*3*2*1)

// Input : -5       
// Output : 120    (5*4*3*2*1)

// Input : 4
// Output : 24     (4*3*2*1)  

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//   Function Name  :   Factorial
//   Input          :   integer 
//   output         :   integer
//   Description    :   Display factorial of Given Number
//   Date           :   30/10/2026
//   Author         :   Nikita Balasaheb Mohite
//
////////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;

    }

    int Fact = 1;
    int icnt = 0;

    for (icnt = 1; icnt <= iNo; icnt ++)
    {
        Fact = Fact  * icnt;
   
    }
    return Fact;
    
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of Number i s: %d",iRet);

    return 0;
}
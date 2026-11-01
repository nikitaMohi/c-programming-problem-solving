// Input : 10
//Output : 700

//Input : 3
//Output : 270

//Input : 1200
//Output : 84000

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//   Function Name  :   DollarToINR
//   Input          :   integer 
//   output         :   integer
//   Description    :   US Dollar Into Indian Courrency
//   Date           :   31/10/2026
//   Author         :   Nikita Balasaheb Mohite
//
///////////////////////////////////////////////////////////////////

int DollarToINR(int iNo)
{
    int iRupess = 0;
    iRupess = iNo * 70;
    return iRupess;

}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number of USD\n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;

}
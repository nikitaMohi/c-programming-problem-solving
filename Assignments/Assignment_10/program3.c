/*
    Input : 5
    Output : 5000

    Input : 12
    Output : 12000
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//   Function Name  :   KMtoMeter
//   Input          :   Integer 
//   output         :   Integer
//   Description    :   calculate 1 KM = 1000 Meter 
//   Date           :   31/10/2026
//   Author         :   Nikita Balasaheb Mohite
//
////////////////////////////////////////////////////////////////////

int KMtoMeter(int iNo)
{
    int Kilometer = 0;

    int Meter = 1000;

    Kilometer = Meter * iNo;

    return Kilometer;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance\n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Meter is : %d",iRet);

    return 0;

}
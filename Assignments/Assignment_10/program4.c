/*
    Input : 12
    Output : -11.1111  (12 -32)*(5/9)

    Input : 34
    Output: 1.11111 (34-35)*(5/9)
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//   Function Name  :   FhtoCs
//   Input          :   Integer 
//   output         :   Double
//   Description    :   convert Temperature into Celsius
//   Date           :   31/10/2026
//   Author         :   Nikita Balasaheb Mohite
//
////////////////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    
    double Celsius = 0.0;

    Celsius = (fTemp - 32) * (5.0 / 9.0);

    return Celsius;
}
      
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit\n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Celsius is : %lf",dRet);

    return 0;


}
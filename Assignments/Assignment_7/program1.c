//Input : 5
//Output : $    *   $   *   $   *   &   *   &   *

//Input : 3
//Output : $    *   $   *   $   *

#include<stdio.h>


//////////////////////////////////////////////////
//
//   Function Name  :   Pattern
//   Input          :   integer 
//   output         :   integer
//   Description    :   Display NO.of Inputs Pattern
//   Date           :   30/10/2026
//   Author         :   Nikita Balasaheb Mohite
//
//////////////////////////////////////////////////
void Pattern(int iNo)
{
    int icnt = 0;
    for(icnt = 1; icnt <= iNo; icnt++)
    {
        printf("$\t*\t");
    }

}

int main()
{
    int iValue = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
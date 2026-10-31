// Input : 75
// Output : medium

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//   Function Name  :   Number
//   Input          :   integer 
//   output         :   integer
//   Description    :   Display large,small,medium Number
//   Date           :   30/10/2026
//   Author         :   Nikita Balasaheb Mohite
//
////////////////////////////////////////////////////////////////////
void Number(int iNo)
{
    if(iNo >100 )
    {
        printf("Large");
    }
    else if((iNo < 100) && (iNo > 50))
    {
        printf("Medium");
    }
    else
    {
        printf("Small");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}
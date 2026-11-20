/*
Input : "Marvellous Multi OS"

Output: marvellous multi os                                                                    
         
        
        
*/


#include<stdio.h>

///////////////////////////////////////////////////////////////////////////
//
//   Function Name  :   strlwrx
//   Input          :   string 
//   output         :   string
//   Description    :   display the string
//   Date           :   16/11/2026
//   Author         :   Nikita Balasaheb Mohite
//
///////////////////////////////////////////////////////////////////////////

void strlwrx(char *str)
{
   
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }

        str++;
    }
}

int main()
{
   char arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);

    return 0;

}


/*
    Input : Nikita Balasaheb Mohite
    Output : Nikita Balasaheb Mohite
    
*/

#include<stdio.h>

int main()
{
    char Name[30];

    printf("Plaese enter your Name\n");
    fgets(Name, sizeof(Name), stdin);


    printf("Your NAME is : %s",Name);
    return 0;
}

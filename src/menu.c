#include<stdio.h>
#include<conio.h>

char display_menu()
{
    char ch;

    printf("Choose your calculation:\n\
            1- Finance Dept for Investment\n\
            2- Exit\n");

    while ((ch = getch()) != '1' && ch != '2' )
        ;   //null statement


    printf("ch: %c\n", ch);
    return ch;
}

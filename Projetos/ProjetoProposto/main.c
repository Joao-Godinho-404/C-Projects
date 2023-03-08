#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 50;                 //Declares a Variable, its a Integer variable, his value is 50
    char y;                     //I have declared another one, but now its a char type.
    printf("%d \n",x);          //Here i used "%d" to read int numbers
    printf("Hello world!\n");   //This was my first code line XD
    scanf("%s", &y);            /*Here on Function Scan Formatted i used "%s" to read string type
                                And &y because its the only way i know to "appoint" to my variable*/
    printf("%s", &y);           //Here the same, but with print function
    return 0;
}

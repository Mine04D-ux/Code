#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[30];
    float saldo_cp, tanb, saldo_est;
    printf("Insira o nome da sua conta poupança: ");
    gets(name);     //Function to read string from user.
    printf("Insira o saldo da sua conta poupança: ");
    scanf("%f", saldo_cp);
    printf("Insira o tanb da sua conta poupança: ");
    scanf("%f", tnb);
    saldo_est = saldo_cp + (saldo_cp * tanb);
    printf("A sua conta %s tera o saldo no final do ano de %f", name, saldo_est);
    return 0;
}

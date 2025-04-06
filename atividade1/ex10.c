#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função para validar CPF
int validarCPF(const char *cpf) {
    int i, j, digito1 = 0, digito2 = 0;
    int numeros[11];
    
    // Verifica se o CPF possui 11 caracteres numéricos
    if (strlen(cpf) != 11) return 0;
    for (i = 0; i < 11; i++) {
        if (!isdigit(cpf[i])) return 0; /* (!isdigit) serve para que o usuario nao digite letras nem simbolos, somente numeros*/ 
        numeros[i] = cpf[i] - '0'; /* essa variavel serve para que converta a string cpf em int. o (- '0') serve para fazer essa transformação ele pega um letra de cada vez e transforma*/
    }
    
    // Verifica se todos os dígitos são iguais, o que torna o CPF inválido
    int iguais = 1;
    for (i = 1; i < 11; i++) {
        if (numeros[i] != numeros[0]) { /* numeros [0] vai pegar o primeiro numero digitado no cpf, com isso vai fazer a vericação para ver se todos numros são iguais*/ 
            iguais = 0; /*se tiver pelo menos um numero diferente ele entra na condição e sai para proxima etapa de verificação*/
            break;
        }
    }
    if (iguais) return 0; /* se iguais continuar 1 é pq todos os numeros são iguais com isso o codigo ja para 
    aqui falando que o cpf é invalido, agr se iguais = 0 passa para proxima etapa de verificação*/
    
    // Cálculo do primeiro dígito verificador
    for (i = 0, j = 10; i < 9; i++, j--) {
        digito1 += numeros[i] * j;   /*"digito1" pega a variavel "numeros"(onde esta depositado o seu cpf) e pega somente os 9 primeiros numeros e faz *10 decrementando e soma tudo*/
                                     /*exemplo cpf = 12345678978 (1*10, 2*9, 3*8, 4*7, 5*6, 6*5, 7*4, 8,*3, 9*2, e depois ele soma tudo e armazena na variavel digito1)  */ 
    }
    digito1 = (digito1 * 10) % 11;   
    if (digito1 == 10) digito1 = 0;
    if (digito1 != numeros[9]) return 0;
    
    // Cálculo do segundo dígito verificador
    for (i = 0, j = 11; i < 10; i++, j--) {
        digito2 += numeros[i] * j;
    }
    digito2 = (digito2 * 10) % 11;
    if (digito2 == 10) digito2 = 0;
    if (digito2 != numeros[10]) return 0;
    
    return 1; // CPF válido
}

int main() {
    char cpf[12];
    printf("Digite o CPF (apenas numeros): ");
    scanf("%11s", cpf);
    
    if (validarCPF(cpf)) {
        printf("CPF válido!\n");
    } else {
        printf("CPF inválido!\n");
    }
    
    return 0;
}
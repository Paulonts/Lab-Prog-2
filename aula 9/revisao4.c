#include <stdio.h>

struct Livro {
    char titulo[100];
    char autor[100];
    int paginas;
};

int main() {
    struct Livro livro;

    printf("Digite o título do livro: ");
    fgets(livro.titulo, sizeof(livro.titulo), stdin);

    printf("Digite o autor do livro: ");
    fgets(livro.autor, sizeof(livro.autor), stdin);

    printf("Digite o número de páginas: ");
    scanf("%d", &livro.paginas);

    printf("\nInformações do Livro:\n");
    printf("Título: %s", livro.titulo);
    printf("Autor: %s", livro.autor);
    printf("Páginas: %d\n", livro.paginas);

    return 0;
}


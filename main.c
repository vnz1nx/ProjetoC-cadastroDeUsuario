#include <stdio.h>

//Declarando uma constante
#define MAX_CADASTRO 30

//Objeto que guarda o nome e a idade dos alunos.
struct Aluno {
    char nome[50];
    int idade;
};
//Declaração de array com numero constante de alunos que podem ser cadastrados.
struct Aluno alunos[MAX_CADASTRO];
int totalAlunos = 0;

//Função que cadastra os alunos no array,pedindo nome e idade.
void cadastro() {
    printf("Digite o nome desse aluno: ");
    scanf("%s", &alunos[totalAlunos].nome);
    printf("Digite a idade desse aluno: ");
    scanf("%d", &alunos[totalAlunos].idade);

    totalAlunos++;
}

//Função que faz a listagem de alunos.
void listAlunos() {
    for(int i = 0;i < totalAlunos;i++){
        printf("\n");
        printf(" Usuario: %d\n nome: %s\n idade:%d\n", i, alunos[i].nome, alunos[i].idade);
    }
}

int main() {
    int escolha;
    //Loop que após realizar algumas das funções ,pede ao usuario pra escolhar uma oopção novamente,até ele adicionar 4.
    do {
        printf("--------------------------------------------------------\n");
        printf(" 1 - para cadastrar um novo aluno\n");
        printf(" 2 - para ver a lista dos alunos cadastrados\n");
        printf(" 3 - para pesquisar um aluno pelo nome\n");
        printf(" 4 - para finalizar a operacao\n");
        printf("--------------------------------------------------------\n\n");

        printf("Digite o numero referente a sua escolha: ");
        scanf("%d", &escolha);
        printf("\n");

        while(escolha < 1 || escolha > 4){
        printf("Numero invalido\n");
        printf("Digite um numero valido: ");
        scanf("%d", &escolha);
        printf("\n");
    }

        switch (escolha) {
            case 1:
                cadastro();
                break;
            case 2:
                listAlunos();
                break;
            case 3:
                break;
            case 4:
                printf("Operação finalizada!");
                printf("\n")
                break;
            default:
                break;
        }
    }while (escolha != 4);

    return 0;
}

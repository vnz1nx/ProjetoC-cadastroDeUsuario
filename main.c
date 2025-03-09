#include <stdio.h>
#include <string.h>

//Declarando uma constante
#define MAX_CADASTRO 30

//Objeto que guarda o nome e a idade dos alunos.
struct Aluno {
    char nome[50];
    int idade;
};
//Declara��o de array com numero constante de alunos que podem ser cadastrados.
struct Aluno alunos[MAX_CADASTRO];
int totalAlunos = 0;

//Fun��o que cadastra os alunos no array,pedindo nome e idade.
void cadastro() {
    printf("Digite o nome desse aluno: ");
    scanf("%s", &alunos[totalAlunos].nome);
    printf("Digite a idade desse aluno: ");
    scanf("%d", &alunos[totalAlunos].idade);

    totalAlunos++;
}

//Fun��o que faz a listagem de alunos.
void listAlunos() {
    for(int i = 0;i < totalAlunos;i++){
        printf("\n");
        printf(" Usuario: %d\n nome: %s\n idade:%d\n", i, alunos[i].nome, alunos[i].idade);
    }
}

void buscaNome(){
    int encontrado = 0;
    char nomeProcurado[50];
    printf("Digite o nome do aluno para busca: ");
    scanf("%s", &nomeProcurado);

    for(int i = 0; i < totalAlunos; i++){
        if(strcmp(alunos[i].nome,nomeProcurado)== 0){
            printf("\nAluno encontrado!\n");
            printf("Nome: %s\nIdade: %d\n", alunos[i].nome, alunos[i].idade);
            encontrado = 1;
        }
    }

    if(!encontrado){
            printf("\nAluno n�o encontrado!\n");
    }
}

int main() {
    int escolha;
    //Loop que ap�s realizar algumas das fun��es ,pede ao usuario pra escolhar uma oop��o novamente,at� ele adicionar 4.
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
                buscaNome();
                break;
            case 4:
                printf("Opera��o finalizada!");
                printf("\n");
                break;
            default:
                break;
        }
    }while (escolha != 4);

    return 0;
}

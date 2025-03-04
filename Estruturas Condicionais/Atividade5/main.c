#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    //Ex 5: Crie um sistema de login simples, onde o usuário deve inserir um nome e senha previamente cadastrados.
    setlocale(LC_ALL, "Portuguese");

    int opc, cadastro_realizado = 0;
    char user[10], pass[10];
    char cad_user[10] = "", cad_pass[10] = "";

    while (1) {
        printf("\n-------------------------------------------\n");
        printf("-         Sistema de Login Simples        -\n");
        printf("-                                         -\n");
        printf("-          1 - Login                      -\n");
        printf("-          2 - Cadastro                   -\n");
        printf("-          0 - Sair                       -\n");
        printf("-------------------------------------------\n");

        printf("Insira a opcao desejada: ");
        scanf("%d", &opc);

        switch (opc) {
            case 1:
                if (!cadastro_realizado) {
                    printf("\nErro: Nenhum usuário cadastrado! Cadastre-se primeiro.\n");
                    break;
                }

                printf("\n-------------------------------------------\n");
                printf("-                   Login                   -\n");
                printf("-                                           -\n");
                printf("  Usuario: ");
                scanf("%9s", user);
                printf("  Senha: ");
                scanf("%9s", pass);
                printf("---------------------------------------------\n");

                if (strcmp(user, cad_user) == 0 && strcmp(pass, cad_pass) == 0) {
                    printf("\n Login bem-sucedido! Bem-vindo, %s!\n", user);
                } else {
                    printf("\n Erro: Usuário ou senha incorretos!\n");
                }
                break;

            case 2:
                printf("\n------------------------------------------\n");
                printf("-               Cadastro                   -\n");
                printf("-                                          -\n");
                printf("  Insira o nome de usuário: ");
                scanf("%9s", cad_user);
                printf("  Insira sua senha: ");
                scanf("%9s", cad_pass);
                printf("--------------------------------------------\n");

                cadastro_realizado = 1;
                printf("\n Cadastro realizado com sucesso!\n");
                break;

            case 0:
                printf("\nSaindo do sistema...\n");
                return 0;

            default:
                printf("\n Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}

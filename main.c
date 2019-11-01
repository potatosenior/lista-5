#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int exercicio = 1;

    while(exercicio != 0)
    {
        printf("\n\n-----------------------------\nDigite o exercicio desejado: ");
        scanf("%i", &exercicio);

        switch (exercicio)
        {
            case 1:
            {
                char string[50];

                printf("\nDigite uma string:");
                getchar();
                fgets(string, 50, stdin);
                printf("\nA string digitada foi: %s", string);

                break;
            }

            case 2:
            {
                char string[50];
                int tamanho = 0;

                printf("\nDigite uma string:");
                getchar();
                fgets(string, 50, stdin);

                for (int i = 0; string[i] != '\n'; ++i) {
                    printf("%c ", string[i]);
                    tamanho++;
                }
                printf("\nTamanho da string: %d", tamanho);

                break;
            }

            case 3:
            {
                char string[50];

                printf("\nDigite um nome:");
                getchar();
                fgets(string, 50, stdin);

                if (string[0] == 'a' || string[0] == 'A')
                {
                    printf("\n%s", string);
                }else
                    printf("\nO nome nao comeca com a letra A!");

                break;
            }

            case 4:
            {
                char string[50];

                printf("\nDigite um nome:");
                getchar();
                fgets(string, 50, stdin);

                printf("1a letra : %c\n2a letra : %c\n3a letra : %c\n4a letra : %c\n", string[0], string[1], string[2], string[3]);

                break;
            }

            case 5:
            {
                char nome[50];
                int qntd_letras;

                printf("Digite um nome: ");
                getchar();
                fgets(nome, 50, stdin);
                qntd_letras = strlen(nome) - 1;     // -1 pois o o strlen conta o '\n'
                printf("\nO nome digitado tem %d letras!", qntd_letras);

                break;
            }

            case 6:
            {
                char nome[50], sexo[2];
                int idade;

                printf("\nDigite o nome: ");
                getchar();
                fgets(nome, 50, stdin);
                printf("Digite o sexo('m' ou 'f'): ");
                fgets(sexo, 2, stdin);
                printf("Digite a idade: ");
                scanf("%d", &idade);

                if(idade < 25)
                {
                    if(sexo[0] == 'f' || sexo[0] == 'F')
                        printf("\n%s ACEITA!", nome);
                }else
                    printf("\n%s NAO ACEITA!", nome);

                break;
            }

            case 7:
            {
                char string_a[50], string_b[50];
                int contador_a = 0, contador_b = 0, letras_iguais = 0;

                getchar();
                printf("\nDigite uma frase: ");
                fgets(string_a, 50, stdin);
                printf("\nDigite outra frase: ");
                fgets(string_b, 50, stdin);

                if (strlen(string_a) == strlen(string_b))
                {
                    for (size_t i = 0; i < strlen(string_a); ++i) {
                        if (string_a[i] == string_b[i])
                            letras_iguais++;
                    }
                }else
                    printf("\nAs frases sao diferentes!");
                if (letras_iguais == strlen(string_a) && letras_iguais == strlen(string_b))
                    printf("\nAs frases sao iguais!");

                break;
            }

            case 8:
            {
                char string[50];
                int contador = 0;

                printf("\nDigite uma string para contar quantos 1's tem: ");
                getchar();
                fgets(string, 50, stdin);

                for (int i = 0; i < strlen(string); ++i) {
                    if (string[i] == '1')
                        contador++;
                }

                printf("A string tem | %d | 1's!", contador);

                break;
            }

            case 9:
            {
                char string[50];
                int contador = 0;

                printf("\nDigite uma string para substituir os 0's por 1's: ");
                getchar();
                fgets(string, 50, stdin);

                for (size_t i = 0; i < strlen(string); ++i) {
                    if (string[i] == '0')
                        string[i] = '1';
                }

                printf("A string : %s", string);

                break;
            }

            case 10:
            {
                char palavra[20];

                printf("\nDigite uma palavra: ");
                getchar();
                fgets(palavra, 20, stdin);

                for (int i = strlen(palavra) - 1; i >= 0 ; i--) {
                    printf("%c", palavra[i]);
                }
                break;
            }

            case 11:
            {
                char string[50];
                char vogais[10] = { 'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
                int pertence;

                printf("\nDigite uma frase: ");
                getchar();
                fgets(string, 50, stdin);
                printf("\nA frase sem vogais: \n");

                for (size_t i = 0; i < strlen(string); ++i) {
                    pertence = 0;
                    for (int j = 0; j < 10; ++j) {
                        if (string[i] == vogais[j])
                            pertence = 1;
                    }
                    if (pertence != 1)
                        printf("%c", string[i]);
                }
                break;
            }

            case 12:
            {
                char string[50], carac[1];
                char vogais[10] = { 'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
                int pertence, qntd_vogais = 0;

                printf("\nDigite uma frase: ");
                getchar();
                fgets(string, 50, stdin);
                printf("Digite uma letra para substituir para substituir todas vogais pelo mesmo: ");
                carac[0] = getchar();

                for (size_t i = 0; i < strlen(string); ++i) {
                    pertence = 0;
                    for (int j = 0; j < 10; ++j) {
                        if (string[i] == vogais[j]) {
                            pertence = 1;
                            qntd_vogais++;
                        }
                    }
                    if (pertence == 1)
                        string[i] = carac[0];
                }
                printf("\nA frase tem %d vogais!", qntd_vogais);
                printf("\nA frase com as vogais substituidas por '%c' fica:\n%s", carac[0], string);

                break;
            }

            case 13:
            {
                char string[50];
                int qntd_espacos = 0;

                printf("\nDigite uma frase: ");
                getchar();
                fgets(string, 50, stdin);

                for (size_t i = 0; i < strlen(string); ++i) {
                    if ( string[i] == ' ')
                        qntd_espacos++;
                }
                printf("\nA frase tem %d espacos!", qntd_espacos);

                break;
            }

            case 14:
            {
                char palavra[50];

                printf("\nDigite uma palavra: ");
                getchar();
                fgets(palavra, 50, stdin);

                for (size_t i = 0; i < strlen(palavra) - 1; ++i) {
                    palavra[i] += 1;
                }
                printf("A palavra com +1 na tabela ASCII fica: %s", palavra);

                break;
            }

            case 15:
            {
                char cadeia[50];

                printf("\nDigite uma cadeia de caracteres maiusculos: ");
                getchar();
                fgets(cadeia, 50, stdin);

                for (size_t i = 0; i < strlen(cadeia) - 1; ++i) {
                    if (cadeia[i] >= 65 && cadeia[i] <= 90)
                        cadeia[i] += 32;
                }
                printf("A cadeia com as letras maiusculas transformadas em minusculas: %s", cadeia);

                break;
            }

            case 16:
            {
                char cadeia[50];

                printf("\nDigite uma cadeia de caracteres minusculos: ");
                getchar();
                fgets(cadeia, 50, stdin);

                for (size_t i = 0; i < strlen(cadeia) - 1; ++i) {
                    if (cadeia[i] >= 97 && cadeia[i] <= 122)
                        cadeia[i] -= 32;
                }
                printf("A cadeia com as letras minusculas transformadas em maiusculas: %s", cadeia);

                break;
            }

            case 17:
            {
                char frase[50];

                printf("\nDigite uma frase: ");
                getchar();
                fgets(frase, 50, stdin);

                for (size_t i = 0; i < strlen(frase) - 1; ++i) {
                    if (frase[i] == ' ')
                    {
                        for (size_t j = i; j < strlen(frase) - 1; ++j) {
                            frase[j] = frase[j+1];
                        }
                    }
                }
                printf("\nVetor da frase sem espacos: %s", frase);

                break;
            }

            case 18:
            {
                char string[50], l1[1], l2[1];

                printf("\nDigite uma frase: ");
                getchar();
                fgets(string, 50, stdin);
                printf("\nDigite uma letra para ser substituida: ");
                l1[0] = getchar();
                getchar();
                printf("\nDigite a letra que vai substituir: ");
                l2[0] = getchar();

                for (size_t i = 0; i < strlen(string) - 1; ++i) {
                    if (string[i] == l1[0])
                        string[i] = l2[0];
                }

                printf("\nFrase modificada: %s", string);

                break;
            }

            case 19:
            {
                struct pessoa
                {
                    char nome[50];
                    int idade;
                    int ordenado;
                };

                struct pessoa pessoas[10], ordenados[10];
                int menor, contador_pessoas = 0, aux;

                for (int i = 0; i < 10; ++i) {
                    pessoas[i].ordenado = -1;
                }

                getchar();

                for (int i = 0; i < 10; ++i) {
                    printf("Digite o nome da %d pessoa: ", i + 1);
                    fgets( pessoas[i].nome, 10, stdin);
                    printf("Digite a idade: ");
                    scanf("%i", &pessoas[i].idade);
                    getchar();

                    if (pessoas[i].idade < 0) {
                        pessoas[i].ordenado = -1;
                        break;
                    }
                    else
                        pessoas[i].ordenado = 0;

                    contador_pessoas++;
                }
                for (int i = 0; i < contador_pessoas; ++i) {
                    for (int j = 0; j < contador_pessoas; ++j) {
                        if (pessoas[j].ordenado == 0)
                            menor = pessoas[j].idade;
                    }

                    for (int j = 0; j < 10; ++j) {
                        if (pessoas[j].idade <= menor && pessoas[j].ordenado == 0)
                        {
                            aux = j;
                            menor = pessoas[j].idade;
                        }
                    }

                    ordenados[i].idade = pessoas[aux].idade;
                    strcpy(ordenados[i].nome, pessoas[aux].nome);
                    pessoas[aux].ordenado = 1;
                }

                printf("\nPessoas mais jovens: \n");
                for (int i = 0; i < contador_pessoas/2; ++i)
                {
                        printf("Nome: %sIdade: %d\n\n", ordenados[i].nome, ordenados[i].idade);
                }
                printf("\nPessoas mais velhas: \n");
                for (int i = contador_pessoas/2; i < contador_pessoas; ++i) {
                    printf("Nome: %sIdade: %d\n\n", ordenados[i].nome, ordenados[i].idade);
                }
                break;
            }

            case 20:
            {
                char carros[5][20];
                int consumo[5], mais_economico, mais_economico_marca;

                getchar();
                for (int i = 0; i < 5; ++i) {
                    printf("Digite o modelo do %d carro: ", i + 1);
                    fgets(carros[i], 20, stdin);
                    printf("Digite quantos km por litro o carro faz: ");
                    scanf("%d", &consumo[i]);
                    getchar();



                    if (i == 0)
                        mais_economico = consumo[i];
                    else
                        if (consumo[i] > mais_economico)
                        {
                            mais_economico = consumo[i];
                            mais_economico_marca = i;
                        }
                }
                printf("\nO carro mais economico foi o modelo %s com %d km por litro!\n", carros[mais_economico_marca], mais_economico);
                for (int i = 0; i < 5; ++i) {
                    printf("Modelo: %s, consumo por 1000km: %.2f litros!\n", carros[i], 1000 / (float)consumo[i]);
                }
                break;
            }

            case 21:
            {
                char frase_1[50], frase_2[50];

                getchar();
                printf("Digite a primeira frase: ");
                fgets(frase_1, 50, stdin);
                printf("Digite a segunda frase: ");
                fgets(frase_2, 50, stdin);

                for (int i = 0; i < 50; ++i) {
                    if(frase_1[i] == 'a')
                        frase_1[i] = '*';
                    if(frase_2[i] == 'a')
                        frase_2[i] = '*';
                }

                printf("Primeira frase modificada: ");
                for (int i = strlen(frase_1) - 1; i >= 0; --i) {
                    printf("%c", frase_1[i]);
                }
                printf("\nSegunda frase modificada: ");
                for (int i = strlen(frase_2) - 1; i >= 0; --i) {
                    printf("%c", frase_2[i]);
                }
                break;
            }

            case 22:
            {
                char nome[50];
                float preco;

                printf("Digite o nome da mercadoria: ");
                getchar();
                fgets(nome, 50, stdin);
                printf("Digite o preco da mercadoria: ");
                scanf("%f", &preco);

                printf("\nMercadoria: %s\nValor total: %.2f\nValor do desconto: %.2f\nValor a ser pago a vista: %.2f", nome, preco, preco * (1.0/10), preco - (preco * ( 1.0/10)) );
                break;
            }

            case 23:
            {
                char string[50];
                int i, j;

                printf("Digite uma frase: ");
                getchar();
                fgets(string, 50, stdin);
                do{
                    printf("Digite um numero inteiro positivo: ");
                    scanf("%i", &i);
                }while(i < 0);
                do{
                    printf("Digite um numero inteiro positivo e maior que o anterior: ");
                    scanf("%i", &j);
                }while(j < i);

                printf("\nSegmento frase[i...j]: \n");
                for (i; i < j ; ++i)
                {
                    printf("%c", string[i]);
                }
                break;
            }

            case 24:
            {
                char string[50], caractere;
                int posicao, indice;
                int encontrou;

                printf("Digite uma frase: ");
                getchar();
                fgets(string, 50, stdin);
                printf("Digite uma posicao: ");
                scanf("%i", &posicao);
                getchar();
                printf("Digite um caractere para ser procurado: ");
                caractere = getchar();

                encontrou = 0;
                for (int i = posicao; i < strlen(string) - 1; ++i)
                {
                    if(string[i] == caractere)
                    {
                        indice = i;
                        encontrou = 1;
                    }
                }

                if (encontrou == 1)
                {
                    printf("\nO caracetere '%c' foi encontrado no indice %d!", caractere, indice);
                }else
                    printf("\nO caractere '%c' nao foi encontrado na frase!", caractere);
                break;
            }

            case 25:
            {
                char palavra_1[20], palavra_2[20];
                int result;

                printf("Digite a primeira palavra: ");
                getchar();
                fgets(palavra_1, 20, stdin);
                printf("Digite a segunda palavra: ");
                fgets(palavra_2, 20 , stdin);

                result = 3;
                for (int i = 0; i < 20; ++i) {
                    if(palavra_1[i] < palavra_2[i])
                    {
                        result = 1;
                        break;
                    }
                    if(palavra_2[i] < palavra_1[i])
                    {
                        result = 2;
                        break;
                    }
                }

                if(result == 1)
                    printf("\nA primeira palavra vem primeiro!");
                else
                    if (result == 2)
                        printf("\nA segunda palavra vem primeiro!");
                    else
                        if (result == 3)
                            printf("\nAs palavras sao iguais!");
                break;
            }

            case 26:
            {
                char frase[50], nova_frase[50];

                printf("\nDigite uma frase: ");
                getchar();
                fgets(frase, 50, stdin);

                for (int i = 0; i < strlen(frase) - 1; ++i)
                {
                    if (frase[i] != ' ' && frase[i] != '\n' && frase[i] != '\0')
                    {
                        nova_frase[i] = frase[i];
                        nova_frase[i] += 3;
                    }
                }

                printf("A frase como codigo de Cesar : %s", nova_frase);

                break;
            }

            case 27:
            {
                char string[50], copia[50];
                int iguais, cont = 0;

                printf("Digite uma frase: ");
                getchar();
                fgets(string, 50, stdin);

                for (int i = strlen(string) - 2; i >= 0; --i) {
                    copia[cont] = string[i];
                    cont++;
                }
                copia[strlen(string)-1] = '\0';
                string[strlen(string)-1] = '\0';

                iguais = strcmp(string, copia);

                if (iguais == 0)
                    printf("\nA frase e um palindromo!");
                else
                    printf("\nA frase nao e um palindromo!");

                break;
            }

            case 28:
            {
                char primeira[50], segunda[50];
                int contem = 1, contador;

                printf("Digite a primeira string: ");
                getchar();
                fgets(primeira, 50, stdin);
                printf("Digite a segunda: ");
                fgets(segunda, 50, stdin);
                contador = strlen(segunda) - 1;

                for (int i = strlen(primeira) - 1; i > (strlen(primeira) - strlen(segunda)) - 1 ; --i) {
                    if (primeira[i] != segunda[contador])
                        contem = 0;
                    contador--;
                }

                if (contem != 0)
                    printf("A segunda string contem no final da primeira!");
                else
                    printf("Nao contem!");

                break;
            }

            case 29:
            {
                char str1[50], str2[50];
                int n;

                printf("Digite a primeira string: ");
                getchar();
                fgets(str1, 50, stdin);
                printf("Digite a segunda string: ");
                fgets(str2, 50, stdin);

                str1[strlen(str1)-1] = '\0';
                str2[strlen(str2)-1] = '\0';

                strcat(str1, str2);

                printf("\nString concatenada: %s", str1);

                break;
            }

            case 30:
            {
                char primeira[50], segunda[50];
                int qntd = 0, letras_iguais, contador;
                
                printf("Digite a primeira cadeia: ");
                getchar();
                fgets(primeira, 50, stdin);
                printf("Digite a segunda cadeia: ");
                fgets(segunda, 50, stdin);

                primeira[strlen(primeira)-1] = '\0';
                segunda[strlen(segunda)-1] = '\0';

                for (int i = 0; i <= strlen(primeira) - strlen(segunda) + 1; ++i) {
                    letras_iguais = 0;
                    contador = 0;
                    for (int j = i; j < i + strlen(segunda); ++j) {
                        if (segunda[contador] == primeira[j])
                            letras_iguais++;
                        else
                            break;
                        contador++;
                    }
                    if (letras_iguais == strlen(segunda))
                        qntd++;
                }

                printf("A segunda cadeia esta contida %d vezes na primeira!", qntd);

                break;
            }

            case 31:
            {
                char str1[50];
                int opcao;

                printf("Digite uma string: ");
                getchar();
                fgets(str1, 50, stdin);

                printf("\nEscolha uma opcao: ");
                printf("\n(1) Imprimir o tamanho da string.\n(2) Comparar a frase com outra.\n(3) Concatenar a frase com outra.");
                printf("\n(4) Imprimir a string de forma reversa.\n(5) Contar quantas vezes um caractere aparece na frase.");
                printf("\n(6) Substituir o primeiro caractere desejado por outro.\n(7) Verificar se uma frase e subfrase da string. ");
                printf("\n(8) Retornar uma substring.");
                printf("\n\nOpcao: ");
                scanf("%d", &opcao);
                getchar();

                switch (opcao)
                {
                    case 1:
                    {
                        printf("\nA string tem %d letras!", strlen(str1) - 1);

                        break;
                    }
                    case 2:
                    {
                        char frase[50];

                        printf("\nDigite a frase para comparar: ");
                        fgets(frase, 50, stdin);

                        if(strcmp(frase, str1) == 0)
                            printf("A frase e a string sao iguais!");
                        else
                            printf("A frase e a string sao diferentes!");
                        break;
                    }
                    case 3:
                    {
                        char frase[50];

                        printf("\nDigite uma nova string para concatenar: ");
                        fgets(frase, 50, stdin);

                        str1[strlen(str1)-1] = '\0';
                        strcat(str1, frase);
                        printf("\nString modificada: %s", str1);
                        break;
                    }
                    case 4:
                    {
                        printf("\nString:\n %sReversa: \n", str1);
                        for (int i = strlen(str1) - 1; i >= 0 ; --i) {
                            printf("%c", str1[i]);
                        }
                        break;
                    }
                    case 5:
                    {
                        char carac;
                        int contador = 0;

                        printf("\nDigite o caractere: ");
                        carac = getchar();
                        for (int i = 0; i < strlen(str1) - 1; ++i) {
                            if (str1[i] == carac)
                                contador++;
                        }
                        printf("\nO caractere '%c' aparece %i vezes!", carac, contador);
                        break;
                    }
                    case 6:
                    {
                        char carac, subs;

                        printf("\nDigite o caractere a ser substituido: ");
                        carac = getchar();
                        getchar();
                        printf("Digite o caractere que vai substituir: ");
                        subs = getchar();

                        for (int i = 0; i < strlen(str1) - 1; ++i) {
                            if (str1[i] == carac)
                            {
                                str1[i] = subs;
                                break;
                            }
                        }
                        printf("\nA string modificada: \n%s", str1);
                        break;
                    }
                    case 7:
                    {
                        char sub[50];
                        int contem = 0, contador, letras_iguais;

                        printf("Digite a string a ser verificada: ");
                        fgets(sub, 50, stdin);

                        str1[strlen(str1)-1] = '\0';
                        sub[strlen(sub)-1] = '\0';

                        for (int i = 0; i <= strlen(str1) - strlen(sub) + 1; ++i) {
                            letras_iguais = 0;
                            contador = 0;
                            for (int j = i; j < i + strlen(sub); ++j) {
                                if (sub[contador] == str1[j])
                                    letras_iguais++;
                                else
                                    break;
                                contador++;
                            }
                            if (letras_iguais == strlen(sub)) {
                                contem = 1;
                                break;
                            }
                        }
                        if (contem == 1)
                        {
                            printf("\nA string digitada e substring!");
                        } else
                            printf("\nA string digitada nao e substring!");
                        break;
                    }
                    case 8:
                    {
                        int a, b;

                        printf("Digite de qual posicao comeca a substring: ");
                        scanf("%i", &a);
                        printf("Digite em qual posicao termina: ");
                        scanf("%i", &b);

                        printf("\nSubstring: \n");
                        for (int i = a; i <= b; ++i) {
                            printf("%c", str1[i]);
                        }
                    }
                        break;
                }
                break;
            }

            case 32:
            {
                char data[11];
                int dia = 0, mes = 0, ano = 0;
                int nao_e_decimal = 0;

                printf("Digite uma data no formato 'DD/MM/AAAA': ");
                getchar();
                fgets(data, 11, stdin);

                if (data[2] != '/' || data[5] != '/')
                    printf("\nFormato invalido!");
                else
                {
                    for (int i = 0; i < 10; ++i) {
                        if(i != 2 && i != 5)
                            if (data[i] < 48 || data[i] > 57)
                                nao_e_decimal = 1;
                    }
                    if (nao_e_decimal == 0)
                    {
                        dia += (data[0] - 48) * 10 + data[1] - 48;
                        mes += (data[3] - 48) * 10 + data[4] - 48;
                        ano += (data[6] - 48) * 1000 + (data[7] - 48) * 100 + (data[8] - 48) * 10 + data[9] - 48;
                        printf("\nData em inteiros:\ndia: %d\nmes: %d\nano: %d", dia, mes, ano);
                    } else
                        printf("\nSomente numeros!");
                    break;
                }

                break;
            }

            case 33:
            {
                char nomes[1000], novo_nome[100], nome_procurado[100];
                int adicionar = 0, indice_aux = 0, igual = 0;

                printf("Digite um nome de aluno: ");
                getchar();
                fgets(nomes, 100, stdin);
                nomes[strlen(nomes) - 1];

                do
                {
                    printf("\nDeseja adicionar mais um nome?\n(1) SIM\n(2) NAO\nInforme a opcao desejada: ");
                    scanf("%d", &adicionar);
                    getchar();

                    if(adicionar != 2)
                    {
                        printf("\nDigite o nome do aluno: ");
                        fgets(novo_nome, 100, stdin);
                        strcat(nomes, novo_nome);

                    }
                }while(adicionar != 2);

                printf("\nAgora digite um nome para procurar: ");
                fgets(nome_procurado, 100, stdin);

                for (int i = 0; i < strlen(nomes) - 1; ++i) {
                    igual = 1;
                    indice_aux = i;
                    for (int j = 0; j < (strlen(nome_procurado) - 1) / 2; ++j)
                    {
                        if (nome_procurado[j] != nomes[i+j])
                            igual = 0;
                    }
                    if (igual == 1)
                    {
                        printf("\nNome encontrado!\nNome: ");
                        for (int j = indice_aux; nomes[j] != '\n' ; ++j) {
                            printf("%c", nomes[j]);
                        }
                        printf(" no indice %d.", indice_aux);
                    }
                }

                break;
            }
            
            case 34:
            {
                char numeros[1200] = "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";
                int numero, maior = 0, indice;

                for (int i = 0; i < strlen(numeros) - 2 - 4; ++i) {
                    numero = (numeros[i] - 48 ) * (numeros[i+1] - 48 ) * (numeros[i+2] - 48 ) * (numeros[i+3] - 48 ) * (numeros[i+4] - 48 );

                    if (numero > maior)
                    {
                        maior = numero;
                        indice = i;
                    }
                }

                printf("\nMaior numero: %d, indice %i", maior, indice);

                break;
            }


            default:
            {
                if (exercicio == 0)
                {
                    printf("\n\nSaindo do progama...");
                    break;
                }else
                {
                    printf("\n\nExercicio invalido!\n");
                }
            }
        }
    }


}
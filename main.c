#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>
#include <locale.h>
#include <windows.h>

int main()
{
    int maxlinhas=40,maxcolunas=80;
    setlocale(LC_ALL,"portuguese");
    textbackground(BLACK);
    clrscr();

//Tela de carregamento...//
    for(int linha=10; linha<=16; linha++)
    {
        gotoxy(21,linha);
        textbackground(RED);
        printf("                                        \n");
    }
    textcolor(WHITE);
    gotoxy(31,13);
    printf("AUTO AJUSTE A TELA%c",25);
    for(int coluna=50; coluna<=52; coluna++)
    {
        gotoxy(coluna,13);
        printf(".");
        Sleep(400);
    }
    for(int coluna=50; coluna<=52; coluna++)
    {
        gotoxy(coluna,13);
        printf(" ");
        Sleep(400);
    }
    gotoxy(31,13);
    printf("ACORDANDO O PADEIRO");
    for(int coluna=50; coluna<=52; coluna++)
    {
        gotoxy(coluna,13);
        printf(".");
        Sleep(400);
    }
    for(int coluna=50; coluna<=52; coluna++)
    {
        gotoxy(coluna,13);
        printf(" ");
        Sleep(400);
    }
    gotoxy(31,13);
    printf(" PREPARANDO O FORNO");
    for(int coluna=50; coluna<=52; coluna++)
    {
        gotoxy(coluna,13);
        printf(".");
        Sleep(400);
    }
    for(int coluna=50; coluna<=52; coluna++)
    {
        gotoxy(coluna,13);
        printf(" ");
        Sleep(400);
    }
    gotoxy(31,13);
    printf("  ARRUMANDO TABELAS");
    for(int coluna=50; coluna<=52; coluna++)
    {
        gotoxy(coluna,13);
        printf(".");
        Sleep(400);
    }
    for(int coluna=50; coluna<=52; coluna++)
    {
        gotoxy(coluna,13);
        printf(" ");
        Sleep(400);
    }
    for(int linha=1; linha<=40; linha++) // mudar fundo para vermelho
    {
        for (int coluna=1; coluna<=80; coluna++)
        {
            gotoxy(coluna,linha);
            textbackground(RED);
            printf(" ");
        }
        printf(" ");
    }

//Bordas//
    for(int coluna=1; coluna<=maxcolunas; coluna++)
    {
        gotoxy(coluna,1);
        printf("%c",260);
        Sleep(15);
    }
    for(int linhas=1; linhas<=maxlinhas; linhas++)
    {
        gotoxy(80,linhas);
        printf("%c",260);
        Sleep(15);
    }
    for(int coluna=maxcolunas; coluna>=1; coluna--)
    {
        gotoxy(coluna,40);
        printf("%c",260);
        Sleep(15);
    }
    for(int linhas=maxlinhas; linhas>=1; linhas--)
    {
        gotoxy(1,linhas);
        printf("%c",260);
        Sleep(15);
    }

//Nome//
    gotoxy(13,3);
    printf(".   ,         ,-.     ,-.     ,-.     ,-.    ,.     ,-.");
    gotoxy(13,4);
    printf("|\\ /|         |  )   /   \\   (   `   /      /  \\   (   `");
    gotoxy(13,5);
    printf("| V |   ,-.   |-<    |   |    `-.    |      |--|    `-. ");
    gotoxy(13,6);
    printf("|   |   |     |  \\   \\   /   .   )   \\      |  |   .   )");
    gotoxy(13,7);
    printf("'   '   `-'   '  '    `-'     `-'     `-'   '  '    `-'");

//Tabela de inicio//
    gotoxy(2,39);
    textcolor(BLACK);
    printf("beta.mc.roscas.version1.0");
    textcolor(WHITE);
    for(int colunas=13; colunas<=68; colunas++)
    {
        gotoxy(colunas,8);
        printf("%c",278);
        Sleep(1);
    }
    textbackground(BLACK);
    textcolor(WHITE);
    for(int linhas=11; linhas<=36; linhas++)
    {
        gotoxy(13,linhas);
        printf("                                                        \n");
        Sleep(1);
    }
    for(int coluna=12; coluna<=69; coluna++)
    {
        textbackground(WHITE);
        gotoxy(coluna,10);
        printf(" ");
        gotoxy(coluna,37);
        printf(" ");
    }
    for(int linha=10; linha<=37; linha++)
    {
        gotoxy(12,linha);
        printf(" ");
        gotoxy(69,linha);
        printf(" ");
    }
    textbackground(BLACK);
    gotoxy(36,23);
    printf("BEM VINDO%c",289);
    for(int coluna=20; coluna<=46; coluna++)
    {
        gotoxy(coluna,23);
        printf(" ");
        Sleep(100);
    }
    gotoxy(20,23);
    printf(" (1) INICIAR");
    gotoxy(49,23);
    printf("    (0) SAIR");

//Lógica do programa//
    int comnd;
    gotoxy(42,23);
    scanf("%d",&comnd);

    if(comnd == 1)
    {
        textbackground(BLACK);
        textcolor(WHITE);

//Tabelas do programa//
        for(int linha=11; linha<=36; linha++)
        {
            gotoxy(13,linha);
            printf("                                                        \n");
            Sleep(5);
        }
        textbackground(BLACK);
        int e[2],qt,qtcarrinho=0;  // "e" é a variavel de escolha para as tabelas. "qt" é a quantidade para os produtos. "qtcarrinho" é a quantidade de itens q tem no carrinho(maximo de 10).

        float total=00.00;

        char doceL[15]="Doce de Leite",balaL[15]="Bala de Leite", cocadaB[15]="Cocada Baiana", cocadaC[15]="Cocada de Coco", biscoitoPC[38]="Biscoito c/ Pingos de Chocolate",suspiro[26]="Suspiro (Peito de Moça)";

        char presuntoF[20]="Presunto de Frango", presuntoP[20]="Presunto de Porco", salame[20]="Salame Defumado", mortadelaP[22]="Mortadela de Porco", mortadelaF[22]="Mortadela de Frango";// strings para guardar os nomes dos produtos;

        char paoD[20]="Pão Doce", paoF[20]="Pão Francês", paoDF[20]="Pão de Fôrma", paoMS[20]="Pão Massa Sovada", sonho[6]="Sonho"; //variaveis dos pães

        char leite[8]="Leite", iogurte[11]="Iogurte", queijo[20]="Queijo Pré-Cozido", requeijao[20]="Requeijão", manteiga[10]="Manteiga";

        char boloL[20]="Bolo de Leite",boloP[20]="Bolo Pudim",boloO[20]="Bolo de Ovos",tortaS[20]="Torta Salgada", tortaC[20]="Torta de Chocolate",tortaG[20]="Torta de Goiabada";

        char carrinho1[40]="", carrinho2[40]="", carrinho3[40]="", carrinho4[40]="", carrinho5[40]="", carrinho6[40]="", carrinho7[40]="", nada[40]="";

        int TpaoD=1, TpaoF=2, TpaoDF=3, TpaoMS=4, Tsonho=5; // variaveis para guardar o tamanho da string dos produtos para comparar com as dos carrinhos
        int TboloL=6,TboloP=7,TboloO=8,TtortaS=9,TtortaC=10,TtortaG=11;
        int Tleite=12,Tiogurte=13,Tqueijo=14,Trequeijao=15,Tmanteiga=16;
        int TpresuntoF=17,TpresuntoP=18,TmortadelaP=19,TmortadelaF=20,Tsalame=21;
        int TdoceL=21,TbalaL=23,TcocadaB=24,TcocadaC=25,TbiscoitoPC=26,Tsuspiro=27;

        int tamanhoS[7];// vetor de tamanho para o carrinho
        int qtc[7]; // quantidade de itens em cada espaço no carrinho
        qtc[0]=0;
        qtc[1]=0;
        qtc[2]=0;
        qtc[3]=0;
        qtc[4]=0;
        qtc[5]=0;
        qtc[6]=0;
        float precocarrinho[7];// preeço total dos produtos individuais no carrinho
        precocarrinho[0]=0, precocarrinho[1]=0,precocarrinho[2]=0, precocarrinho[3]=0,precocarrinho[4]=0, precocarrinho[5]=0, precocarrinho[6]=0;
        tamanhoS[0]=strlen(carrinho1);
        tamanhoS[1]=strlen(carrinho2);
        tamanhoS[2]=strlen(carrinho3);
        tamanhoS[3]=strlen(carrinho4);
        tamanhoS[4]=strlen(carrinho5);
        tamanhoS[5]=strlen(carrinho6);
        tamanhoS[6]=strlen(carrinho7);

        gotoxy(27,33);
        printf("Carrinho(%d)",qtcarrinho);
        gotoxy(42,33);
        printf("Total: R$%.2f",total);// print o total no canto inferior direito;
        do  // esse "do" será como nosso lobby, o usuario voltara para ca para acessar outras tabelas ou carrinho.
        {
            gotoxy(13,11);
            printf(" Obs: Máximo de compra: 7 produtos com");
            gotoxy(13,12);
            printf(" quantidade de itens ilimitada");
            gotoxy(13,15);
            printf(" 1 - Pães............................\n");
            gotoxy(13,17);
            printf(" 2 - Confeitaria.....................\n");
            gotoxy(13,19);
            printf(" 3 - Laticínios......................\n");
            gotoxy(13,21);
            printf(" 4 - Frios...........................\n");
            gotoxy(13,23);
            printf(" 5 - Doces...........................\n");
            gotoxy(13,25);
            printf(" 6 - Carrinho(%d).....................\n",qtcarrinho);
            gotoxy(13,27);
            printf(" 9 - Fechar Programa!................\n");
            gotoxy(13,29);
            printf(" O que deseja? ");
            scanf("%d",&e[0]);
            for(int linha=15; linha<=32; linha++) // pinta a tela para uma nova tabela, seja ela a principal ou secundaria
            {
                for(int coluna=13; coluna<=67; coluna++)
                {
                    gotoxy(coluna,linha);
                    printf(" ");
                }
                printf(" ");
            }


            switch(e[0])
            {

            case 1: //primeira tabela, referente a "pães"
                do
                {
                    gotoxy(13,15);
                    printf(" 1 - Pão de Fôrma.............R$0.25(Unid.)\n");
                    gotoxy(13,17);
                    printf(" 2 - Pão Frânces..............R$0.25(Unid.)\n");
                    gotoxy(13,19);
                    printf(" 3 - Pão Doce.................R$0.25(Unid.)\n");
                    gotoxy(13,21);
                    printf(" 4 - Pão Massa Sovada.........R$0.35(Unid.)\n");
                    gotoxy(13,23);
                    printf(" 5 - Sonho....................R$0.50(Unid.)\n");
                    gotoxy(13,25);
                    printf(" 9 - Voltar...................Grátis!\n");
                    gotoxy(13,27);
                    printf(" O que deseja? ");
                    scanf("%d",&e[1]);
                    if (e[1]==1)  // caso escolha pao de forma
                    {
                        do //repetição para assegurar de que o usuario não digite um valor menor que 0
                        {
                            gotoxy(13,29);
                            printf(" Digite a quantidade de %s que deseja:",paoDF);
                            scanf("%d",&qt);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,30);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=29; linha<=30; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TpaoDF) ^ (qtcarrinho==7 && tamanhoS[1]!=TpaoDF) ^ (qtcarrinho==7 && tamanhoS[2]!=TpaoDF) ^ (qtcarrinho==7 && tamanhoS[3]!=TpaoDF) ^ (qtcarrinho==7 && tamanhoS[4]!=TpaoDF) ^ (qtcarrinho==7 && tamanhoS[5]!=TpaoDF) ^ (qtcarrinho==7 && tamanhoS[6]!=TpaoDF))
                            {
                                gotoxy(13,29);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=15; linha<=32; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(13,27);
                            }
                            else if (qt==0) {} // caso a quantidade seja 0 ele não execult nada;
                            else  // caso nao todas as condições anteriores não sejam executadas ele irá calcular tudo.
                            {
                                total=total+(qt*0.25);// adiciona ao total mostrado na tela inferior
                                if (tamanhoS[0]==0 || tamanhoS[0]==TpaoDF) //ele ira ver se a posição 1 do carrinho está disponivel
                                {
                                    if(tamanhoS[0]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[0]=TpaoDF;
                                    strcpy(carrinho1, paoDF);
                                    qtc[0]+=qt;
                                    precocarrinho[0]+=(qt*0.25);
                                }
                                else if (tamanhoS[1]==0 || tamanhoS[1]==TpaoDF) //ele ira ver se a posição 2 do carrinho está disponivel
                                {
                                    if(tamanhoS[1]==0) //se ainda não estiver nesse espaço ele adiciona ao numero de carrinho
                                    {
                                        qtcarrinho++;
                                    }// e se estiver ele não irá adicionar a quantidade de carrinho.
                                    tamanhoS[1]=TpaoDF;// substitui o tamanho do espaço do carrinho pelo produto para não
                                    strcpy(carrinho2, paoDF);//  salvar outro emcima do mesmo.
                                    qtc[1]+=qt;// a quantidade é encrementada a quantidade dentro do carrinho
                                    precocarrinho[1]+=(qt*0.25);
                                }// o preço total do produto é encrementado ao espaço do carrinho.

                                else if (tamanhoS[2]==0 || tamanhoS[2]==TpaoDF) //ele ira ver se a posição 3 do carrinho está disponivel
                                {
                                    if(tamanhoS[2]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[2]=TpaoDF;
                                    strcpy(carrinho3, paoDF);
                                    qtc[2]+=qt;
                                    precocarrinho[2]+=(qt*0.25);
                                }

                                else if (tamanhoS[3]==0 || tamanhoS[3]==TpaoDF) //ele ira ver se a posição 4 do carrinho está disponivel
                                {
                                    if(tamanhoS[3]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[3]=TpaoDF;
                                    strcpy(carrinho4, paoDF);
                                    qtc[3]+=qt;
                                    precocarrinho[3]+=(qt*0.25);
                                }

                                else if (tamanhoS[4]==0 || tamanhoS[4]==TpaoDF) //ele ira ver se a posição 5 do carrinho está disponivel
                                {
                                    if(tamanhoS[4]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[4]=TpaoDF;
                                    strcpy(carrinho5, paoDF);
                                    qtc[4]+=qt;
                                    precocarrinho[4]+=(qt*0.25);
                                }

                                else if (tamanhoS[5]==0 || tamanhoS[5]==TpaoDF) //ele ira ver se a posição 6 do carrinho está disponivel
                                {
                                    if(tamanhoS[5]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[5]=TpaoDF;
                                    strcpy(carrinho6, paoDF);
                                    qtc[5]+=qt;
                                    precocarrinho[5]+=(qt*0.25);
                                }

                                else if (tamanhoS[6]==0 || tamanhoS[6]==TpaoDF) //ele ira ver se a posição 7 do carrinho está disponivel
                                {
                                    if(tamanhoS[6]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[6]=TpaoDF;
                                    strcpy(carrinho7, paoDF);
                                    qtc[6]+=qt;
                                    precocarrinho[6]+=(qt*0.25);
                                }

                                for(int coluna=27; coluna<=55; coluna++) //cobre o total anterior para atualizar o proximo!
                                {
                                    for(int linha=33; linha<=33; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(27,33);
                                printf("Carrinho(%d)",qtcarrinho);
                                gotoxy(42,33);
                                printf("Total: R$%.2f",total);
                                gotoxy(13,27);
                            }

                        }
                        while(qt<0);
                    }
                    else if (e[1]==2)
                    {
                        do //repetição para assegurar de que o usuario não digite um valor menor que 0
                        {
                            gotoxy(13,29);
                            printf(" Digite a quantidade de %s que deseja:",paoF);
                            scanf("%d",&qt);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,30);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=29; linha<=30; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TpaoF) ^ (qtcarrinho==7 && tamanhoS[1]!=TpaoF) ^ (qtcarrinho==7 && tamanhoS[2]!=TpaoF) ^ (qtcarrinho==7 && tamanhoS[3]!=TpaoF) ^ (qtcarrinho==7 && tamanhoS[4]!=TpaoF) ^ (qtcarrinho==7 && tamanhoS[5]!=TpaoF) ^ (qtcarrinho==7 && tamanhoS[6]!=TpaoF))
                            {
                                gotoxy(13,29);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=15; linha<=32; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(13,20);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.25);
                                if (tamanhoS[0]==0 || tamanhoS[0]==TpaoF)
                                {
                                    if(tamanhoS[0]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[0]=TpaoF;
                                    strcpy(carrinho1, paoF);
                                    qtc[0]+=qt;
                                    precocarrinho[0]+=(qt*0.25);
                                }
                                else if (tamanhoS[1]==0 || tamanhoS[1]==TpaoF)
                                {
                                    if(tamanhoS[1]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[1]=TpaoF;
                                    strcpy(carrinho2, paoF);
                                    qtc[1]+=qt;
                                    precocarrinho[1]+=(qt*0.25);
                                }

                                else if (tamanhoS[2]==0 || tamanhoS[2]==TpaoF)
                                {
                                    if(tamanhoS[2]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[2]=TpaoF;
                                    strcpy(carrinho3, paoF);
                                    qtc[2]+=qt;
                                    precocarrinho[2]+=(qt*0.25);
                                }

                                else if (tamanhoS[3]==0 || tamanhoS[3]==TpaoF)
                                {
                                    if(tamanhoS[3]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[3]=TpaoF;
                                    strcpy(carrinho4, paoF);
                                    qtc[3]+=qt;
                                    precocarrinho[3]+=(qt*0.25);
                                }

                                else if (tamanhoS[4]==0 || tamanhoS[4]==TpaoF)
                                {
                                    if(tamanhoS[4]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[4]=TpaoF;
                                    strcpy(carrinho5, paoF);
                                    qtc[4]+=qt;
                                    precocarrinho[4]+=(qt*0.25);
                                }

                                else if (tamanhoS[5]==0 || tamanhoS[5]==TpaoF)
                                {
                                    if(tamanhoS[5]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[5]=TpaoF;
                                    strcpy(carrinho6, paoF);
                                    qtc[5]+=qt;
                                    precocarrinho[5]+=(qt*0.25);
                                }

                                else if (tamanhoS[6]==0 || tamanhoS[6]==TpaoF)
                                {
                                    if(tamanhoS[6]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[6]=TpaoF;
                                    strcpy(carrinho7, paoF);
                                    qtc[6]+=qt;
                                    precocarrinho[6]+=(qt*0.25);
                                }

                                for(int coluna=27; coluna<=55; coluna++) //cobre o total anterior para atualizar o proximo!
                                {
                                    for(int linha=33; linha<=33; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(27,33);
                                printf("Carrinho(%d)",qtcarrinho);
                                gotoxy(42,33);
                                printf("Total: R$%.2f",total);
                                gotoxy(13,27);
                            }
                        }
                        while(qt<0);
                    }
                    else if (e[1]==3)
                    {
                        do //repetição para assegurar de que o usuario não digite um valor menor que 0
                        {
                            gotoxy(13,29);
                            printf(" Digite a quantidade de %s que deseja:",paoD);
                            scanf("%d",&qt);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,30);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=29; linha<=30; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TpaoD) ^ (qtcarrinho==7 && tamanhoS[1]!=TpaoD) ^ (qtcarrinho==7 && tamanhoS[2]!=TpaoD) ^ (qtcarrinho==7 && tamanhoS[3]!=TpaoD) ^ (qtcarrinho==7 && tamanhoS[4]!=TpaoD) ^ (qtcarrinho==7 && tamanhoS[5]!=TpaoD) ^ (qtcarrinho==7 && tamanhoS[6]!=TpaoD))
                            {
                                gotoxy(13,29);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=15; linha<=32; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(13,27);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.25);
                                if (tamanhoS[0]==0 || tamanhoS[0]==TpaoD)
                                {
                                    if(tamanhoS[0]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[0]=TpaoD;
                                    strcpy(carrinho1, paoD);
                                    qtc[0]+=qt;
                                    precocarrinho[0]+=(qt*0.25);
                                }
                                else if (tamanhoS[1]==0 || tamanhoS[1]==TpaoD)
                                {
                                    if(tamanhoS[1]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[1]=TpaoD;
                                    strcpy(carrinho2, paoD);
                                    qtc[1]+=qt;
                                    precocarrinho[1]+=(qt*0.25);
                                }

                                else if (tamanhoS[2]==0 || tamanhoS[2]==TpaoD)
                                {
                                    if(tamanhoS[2]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[2]=TpaoD;
                                    strcpy(carrinho3, paoD);
                                    qtc[2]+=qt;
                                    precocarrinho[2]+=(qt*0.25);
                                }

                                else if (tamanhoS[3]==0 || tamanhoS[3]==TpaoD)
                                {
                                    if(tamanhoS[3]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[3]=TpaoD;
                                    strcpy(carrinho4, paoD);
                                    qtc[3]+=qt;
                                    precocarrinho[3]+=(qt*0.25);
                                }

                                else if (tamanhoS[4]==0 || tamanhoS[4]==TpaoD)
                                {
                                    if(tamanhoS[4]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[4]=TpaoD;
                                    strcpy(carrinho5, paoD);
                                    qtc[4]+=qt;
                                    precocarrinho[4]+=(qt*0.25);
                                }

                                else if (tamanhoS[5]==0 || tamanhoS[5]==TpaoD)
                                {
                                    if(tamanhoS[5]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[5]=TpaoD;
                                    strcpy(carrinho6, paoD);
                                    qtc[5]+=qt;
                                    precocarrinho[5]+=(qt*0.25);
                                }

                                else if (tamanhoS[6]==0 || tamanhoS[6]==TpaoD)
                                {
                                    if(tamanhoS[6]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[6]=TpaoD;
                                    strcpy(carrinho7, paoD);
                                    qtc[6]+=qt;
                                    precocarrinho[6]+=(qt*0.25);
                                }

                                for(int coluna=27; coluna<=55; coluna++) //cobre o total anterior para atualizar o proximo!
                                {
                                    for(int linha=33; linha<=33; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(27,33);
                                printf("Carrinho(%d)",qtcarrinho);
                                gotoxy(42,33);
                                printf("Total: R$%.2f",total);
                                gotoxy(13,27);
                            }
                        }
                        while(qt<0);
                    }
                    else if (e[1]==4)
                    {
                        do //repetição para assegurar de que o usuario não digite um valor menor que 0
                        {
                            gotoxy(13,27);
                            gotoxy(13,29);
                            printf("Digite a quantidade de %s que deseja:",paoMS);
                            scanf("%d",&qt);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,30);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=29; linha<=30; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TpaoMS) ^ (qtcarrinho==7 && tamanhoS[1]!=TpaoMS) ^ (qtcarrinho==7 && tamanhoS[2]!=TpaoMS) ^ (qtcarrinho==7 && tamanhoS[3]!=TpaoMS) ^ (qtcarrinho==7 && tamanhoS[4]!=TpaoMS) ^ (qtcarrinho==7 && tamanhoS[5]!=TpaoMS) ^ (qtcarrinho==7 && tamanhoS[6]!=TpaoMS))
                            {
                                gotoxy(13,29);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=15; linha<=32; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(13,27);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.35);
                                if (tamanhoS[0]==0 || tamanhoS[0]==TpaoMS)
                                {
                                    if(tamanhoS[0]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[0]=TpaoMS;
                                    strcpy(carrinho1, paoMS);
                                    qtc[0]+=qt;
                                    precocarrinho[0]+=(qt*0.35);
                                }
                                else if (tamanhoS[1]==0 || tamanhoS[1]==TpaoMS)
                                {
                                    if(tamanhoS[1]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[1]=TpaoMS;
                                    strcpy(carrinho2, paoMS);
                                    qtc[1]+=qt;
                                    precocarrinho[1]+=(qt*0.35);
                                }

                                else if (tamanhoS[2]==0 || tamanhoS[2]==TpaoMS)
                                {
                                    if(tamanhoS[2]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[2]=TpaoMS;
                                    strcpy(carrinho3, paoMS);
                                    qtc[2]+=qt;
                                    precocarrinho[2]+=(qt*0.35);
                                }

                                else if (tamanhoS[3]==0 || tamanhoS[3]==TpaoMS)
                                {
                                    if(tamanhoS[3]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[3]=TpaoMS;
                                    strcpy(carrinho4, paoMS);
                                    qtc[3]+=qt;
                                    precocarrinho[3]+=(qt*0.35);
                                }

                                else if (tamanhoS[4]==0 || tamanhoS[4]==TpaoMS)
                                {
                                    if(tamanhoS[4]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[4]=TpaoMS;
                                    strcpy(carrinho5, paoMS);
                                    qtc[4]+=qt;
                                    precocarrinho[4]+=(qt*0.35);
                                }

                                else if (tamanhoS[5]==0 || tamanhoS[5]==TpaoMS)
                                {
                                    if(tamanhoS[5]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[5]=TpaoMS;
                                    strcpy(carrinho6, paoMS);
                                    qtc[5]+=qt;
                                    precocarrinho[5]+=(qt*0.35);
                                }

                                else if (tamanhoS[6]==0 || tamanhoS[6]==TpaoMS)
                                {
                                    if(tamanhoS[6]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[6]=TpaoMS;
                                    strcpy(carrinho7, paoMS);
                                    qtc[6]+=qt;
                                    precocarrinho[6]+=(qt*0.35);
                                }

                                for(int coluna=27; coluna<=55; coluna++) //cobre o total anterior para atualizar o proximo!
                                {
                                    for(int linha=33; linha<=33; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(27,33);
                                printf("Carrinho(%d)",qtcarrinho);
                                gotoxy(42,33);
                                printf("Total: R$%.2f",total);
                                gotoxy(13,27);
                            }
                        }
                        while(qt<0);
                    }
                    else if (e[1]==5)
                    {
                        do //repetição para assegurar de que o usuario não digite um valor menor que 0
                        {
                            gotoxy(13,27);
                            gotoxy(13,29);
                            printf(" Digite a quantidade de %s que deseja:",sonho);
                            scanf("%d",&qt);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,30);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=29; linha<=30; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=Tsonho) ^ (qtcarrinho==7 && tamanhoS[1]!=Tsonho) ^ (qtcarrinho==7 && tamanhoS[2]!=Tsonho) ^ (qtcarrinho==7 && tamanhoS[3]!=Tsonho) ^ (qtcarrinho==7 && tamanhoS[4]!=Tsonho) ^ (qtcarrinho==7 && tamanhoS[5]!=Tsonho) ^ (qtcarrinho==7 && tamanhoS[6]!=Tsonho))
                            {
                                gotoxy(13,29);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=15; linha<=32; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(13,27);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.50);
                                if (tamanhoS[0]==0 || tamanhoS[0]==Tsonho)
                                {
                                    if(tamanhoS[0]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[0]=Tsonho;
                                    strcpy(carrinho1, sonho);
                                    qtc[0]+=qt;
                                    precocarrinho[0]+=(qt*0.50);
                                }
                                else if (tamanhoS[1]==0 || tamanhoS[1]==Tsonho)
                                {
                                    if(tamanhoS[1]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[1]=Tsonho;
                                    strcpy(carrinho2, sonho);
                                    qtc[1]+=qt;
                                    precocarrinho[1]+=(qt*0.50);
                                }

                                else if (tamanhoS[2]==0 || tamanhoS[2]==Tsonho)
                                {
                                    if(tamanhoS[2]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[2]=Tsonho;
                                    strcpy(carrinho3, sonho);
                                    qtc[2]+=qt;
                                    precocarrinho[2]+=(qt*0.50);
                                }

                                else if (tamanhoS[3]==0 || tamanhoS[3]==Tsonho)
                                {
                                    if(tamanhoS[3]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[3]=Tsonho;
                                    strcpy(carrinho4, sonho);
                                    qtc[3]+=qt;
                                    precocarrinho[3]+=(qt*0.50);
                                }

                                else if (tamanhoS[4]==0 || tamanhoS[4]==Tsonho)
                                {
                                    if(tamanhoS[4]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[4]=Tsonho;
                                    strcpy(carrinho5, sonho);
                                    qtc[4]+=qt;
                                    precocarrinho[4]+=(qt*0.50);
                                }

                                else if (tamanhoS[5]==0 || tamanhoS[5]==Tsonho)
                                {
                                    if(tamanhoS[5]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[5]=Tsonho;
                                    strcpy(carrinho6, sonho);
                                    qtc[5]+=qt;
                                    precocarrinho[5]+=(qt*0.50);
                                }

                                else if (tamanhoS[6]==0 || tamanhoS[6]==Tsonho)
                                {
                                    if(tamanhoS[6]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[6]=Tsonho;
                                    strcpy(carrinho7, sonho);
                                    qtc[6]+=qt;
                                    precocarrinho[6]+=(qt*0.50);
                                }

                                for(int coluna=27; coluna<=55; coluna++) //cobre o total anterior para atualizar o proximo!
                                {
                                    for(int linha=33; linha<=33; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(27,33);
                                printf("Carrinho(%d)",qtcarrinho);
                                gotoxy(42,33);
                                printf("Total: R$%.2f",total);
                                gotoxy(13,27);
                            }
                        }
                        while(qt<0);
                    }
                    else if (e[1]==9) {}
                    else
                    {
                        gotoxy(13,29);
                        printf(" Item inválido! Tente escolher outro.");
                        Sleep(1000);
                    }
                    for(int linha=15; linha<=32; linha++) //limpar a tela depois da escolha
                    {
                        for(int coluna=13; coluna<=67; coluna++)
                        {
                            gotoxy(coluna,linha);
                            printf(" ");
                        }
                        printf(" ");
                    }
                    gotoxy(13,27);
                }
                while(e[1]!=9);
                break;

            case 2:
                do
                {
                    gotoxy(13,15);
                    printf(" 1 - Bolo de Leite............R$15.00(Inteiro)\n");
                    gotoxy(13,17);
                    printf(" 2 - Bolo Pudim...............R$25.00(Inteiro)\n");
                    gotoxy(13,19);
                    printf(" 3 - Bolo de Ovos.............R$11.00(Inteiro)\n");
                    gotoxy(13,21);
                    printf(" 4 - Torta Salgada............R$20.00(Inteiro)\n");
                    gotoxy(13,23);
                    printf(" 5 - Torta de Chocolate.......R$23.00(Inteiro)\n");
                    gotoxy(13,25);
                    printf(" 6 - Torta de Goiabada........R$20.00(Inteiro)\n");
                    gotoxy(13,27);
                    printf(" 9 - Voltar...................Grátis!\n");
                    gotoxy(13,29);
                    printf(" O que deseja? ");
                    scanf("%d",&e[1]);
                    if (e[1]==1)
                    {
                        do //repetição para assegurar de que o usuario não digite um valor menor que 0
                        {
                            gotoxy(13,30);
                            printf(" Digite a quantidade de %s que deseja:",boloL);
                            scanf("%d",&qt);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=29; linha<=31; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TboloL) ^ (qtcarrinho==7 && tamanhoS[1]!=TboloL) ^ (qtcarrinho==7 && tamanhoS[2]!=TboloL) ^ (qtcarrinho==7 && tamanhoS[3]!=TboloL) ^ (qtcarrinho==7 && tamanhoS[4]!=TboloL) ^ (qtcarrinho==7 && tamanhoS[5]!=TboloL) ^ (qtcarrinho==7 && tamanhoS[6]!=TboloL))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=15; linha<=32; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*15);
                                if (tamanhoS[0]==0 || tamanhoS[0]==TboloL)
                                {
                                    if(tamanhoS[0]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[0]=TboloL;
                                    strcpy(carrinho1, boloL);
                                    qtc[0]+=qt;
                                    precocarrinho[0]+=(qt*15);
                                }
                                else if (tamanhoS[1]==0 || tamanhoS[1]==TboloL)
                                {
                                    if(tamanhoS[1]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[1]=TboloL;
                                    strcpy(carrinho2, boloL);
                                    qtc[1]+=qt;
                                    precocarrinho[1]+=(qt*15);
                                }

                                else if (tamanhoS[2]==0 || tamanhoS[2]==TboloL)
                                {
                                    if(tamanhoS[2]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[2]=TboloL;
                                    strcpy(carrinho3, boloL);
                                    qtc[2]+=qt;
                                    precocarrinho[2]+=(qt*15);
                                }

                                else if (tamanhoS[3]==0 || tamanhoS[3]==TboloL)
                                {
                                    if(tamanhoS[3]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[3]=TboloL;
                                    strcpy(carrinho4, boloL);
                                    qtc[3]+=qt;
                                    precocarrinho[3]+=(qt*15);
                                }

                                else if (tamanhoS[4]==0 || tamanhoS[4]==TboloL)
                                {
                                    if(tamanhoS[4]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[4]=TboloL;
                                    strcpy(carrinho5, boloL);
                                    qtc[4]+=qt;
                                    precocarrinho[4]+=(qt*15);
                                }

                                else if (tamanhoS[5]==0 || tamanhoS[5]==TboloL)
                                {
                                    if(tamanhoS[5]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[5]=TboloL;
                                    strcpy(carrinho6, boloL);
                                    qtc[5]+=qt;
                                    precocarrinho[5]+=(qt*15);
                                }

                                else if (tamanhoS[6]==0 || tamanhoS[6]==TboloL)
                                {
                                    if(tamanhoS[6]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[6]=TboloL;
                                    strcpy(carrinho7, boloL);
                                    qtc[6]+=qt;
                                    precocarrinho[6]+=(qt*15);
                                }

                                for(int coluna=27; coluna<=55; coluna++) //cobre o total anterior para atualizar o proximo!
                                {
                                    for(int linha=33; linha<=33; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(27,33);
                                printf("Carrinho(%d)",qtcarrinho);
                                gotoxy(42,33);
                                printf("Total: R$%.2f",total);
                                gotoxy(13,29);
                            }
                        }
                        while(qt<0);
                    }
                    else if (e[1]==2)
                    {
                        do //repetição para assegurar de que o usuario não digite um valor menor que 0
                        {
                            gotoxy(13,30);
                            printf(" Digite a quantidade de %s que deseja:",boloP);
                            scanf("%d",&qt);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=29; linha<=31; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TboloP) ^ (qtcarrinho==7 && tamanhoS[1]!=TboloP) ^ (qtcarrinho==7 && tamanhoS[2]!=TboloP) ^ (qtcarrinho==7 && tamanhoS[3]!=TboloP) ^ (qtcarrinho==7 && tamanhoS[4]!=TboloP) ^ (qtcarrinho==7 && tamanhoS[5]!=TboloP) ^ (qtcarrinho==7 && tamanhoS[6]!=TboloP))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=15; linha<=32; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*25);
                                if (tamanhoS[0]==0 || tamanhoS[0]==TboloP)
                                {
                                    if(tamanhoS[0]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[0]=TboloP;
                                    strcpy(carrinho1, boloP);
                                    qtc[0]+=qt;
                                    precocarrinho[0]+=(qt*25);
                                }
                                else if (tamanhoS[1]==0 || tamanhoS[1]==TboloP)
                                {
                                    if(tamanhoS[1]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[1]=TboloP;
                                    strcpy(carrinho2, boloP);
                                    qtc[1]+=qt;
                                    precocarrinho[1]+=(qt*25);
                                }

                                else if (tamanhoS[2]==0 || tamanhoS[2]==TboloP)
                                {
                                    if(tamanhoS[2]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[2]=TboloP;
                                    strcpy(carrinho3, boloP);
                                    qtc[2]+=qt;
                                    precocarrinho[2]+=(qt*25);
                                }

                                else if (tamanhoS[3]==0 || tamanhoS[3]==TboloP)
                                {
                                    if(tamanhoS[3]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[3]=TboloP;
                                    strcpy(carrinho4, boloP);
                                    qtc[3]+=qt;
                                    precocarrinho[3]+=(qt*25);
                                }

                                else if (tamanhoS[4]==0 || tamanhoS[4]==TboloP)
                                {
                                    if(tamanhoS[4]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[4]=TboloP;
                                    strcpy(carrinho5, boloP);
                                    qtc[4]+=qt;
                                    precocarrinho[4]+=(qt*25);
                                }

                                else if (tamanhoS[5]==0 || tamanhoS[5]==TboloP)
                                {
                                    if(tamanhoS[5]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[5]=TboloP;
                                    strcpy(carrinho6, boloP);
                                    qtc[5]+=qt;
                                    precocarrinho[5]+=(qt*25);
                                }

                                else if (tamanhoS[6]==0 || tamanhoS[6]==TboloP)
                                {
                                    if(tamanhoS[6]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[6]=TboloP;
                                    strcpy(carrinho7, boloP);
                                    qtc[6]+=qt;
                                    precocarrinho[6]+=(qt*25);
                                }

                                for(int coluna=27; coluna<=55; coluna++) //cobre o total anterior para atualizar o proximo!
                                {
                                    for(int linha=33; linha<=33; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(27,33);
                                printf("Carrinho(%d)",qtcarrinho);
                                gotoxy(42,33);
                                printf("Total: R$%.2f",total);
                                gotoxy(13,29);
                            }
                        }
                        while(qt<0);
                    }
                    else if (e[1]==3)
                    {
                        do //repetição para assegurar de que o usuario não digite um valor menor que 0
                        {
                            gotoxy(13,30);
                            printf(" Digite a quantidade de %s que deseja:",boloO);
                            scanf("%d",&qt);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=29; linha<=31; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TboloO) ^ (qtcarrinho==7 && tamanhoS[1]!=TboloO) ^ (qtcarrinho==7 && tamanhoS[2]!=TboloO) ^ (qtcarrinho==7 && tamanhoS[3]!=TboloO) ^ (qtcarrinho==7 && tamanhoS[4]!=TboloO) ^ (qtcarrinho==7 && tamanhoS[5]!=TboloO) ^ (qtcarrinho==7 && tamanhoS[6]!=TboloO))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=15; linha<=32; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*11);
                                if (tamanhoS[0]==0 || tamanhoS[0]==TboloO)
                                {
                                    if(tamanhoS[0]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[0]=TboloO;
                                    strcpy(carrinho1, boloO);
                                    qtc[0]+=qt;
                                    precocarrinho[0]+=(qt*11);
                                }
                                else if (tamanhoS[1]==0 || tamanhoS[1]==TboloO)
                                {
                                    if(tamanhoS[1]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[1]=TboloO;
                                    strcpy(carrinho2, boloO);
                                    qtc[1]+=qt;
                                    precocarrinho[1]+=(qt*11);
                                }

                                else if (tamanhoS[2]==0 || tamanhoS[2]==TboloO)
                                {
                                    if(tamanhoS[2]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[2]=TboloO;
                                    strcpy(carrinho3, boloO);
                                    qtc[2]+=qt;
                                    precocarrinho[2]+=(qt*11);
                                }

                                else if (tamanhoS[3]==0 || tamanhoS[3]==TboloO)
                                {
                                    if(tamanhoS[3]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[3]=TboloO;
                                    strcpy(carrinho4, boloO);
                                    qtc[3]+=qt;
                                    precocarrinho[3]+=(qt*11);
                                }

                                else if (tamanhoS[4]==0 || tamanhoS[4]==TboloO)
                                {
                                    if(tamanhoS[4]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[4]=TboloO;
                                    strcpy(carrinho5, boloO);
                                    qtc[4]+=qt;
                                    precocarrinho[4]+=(qt*11);
                                }

                                else if (tamanhoS[5]==0 || tamanhoS[5]==TboloO)
                                {
                                    if(tamanhoS[5]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[5]=TboloO;
                                    strcpy(carrinho6, boloO);
                                    qtc[5]+=qt;
                                    precocarrinho[5]+=(qt*11);
                                }

                                else if (tamanhoS[6]==0 || tamanhoS[6]==TboloO)
                                {
                                    if(tamanhoS[6]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[6]=TboloO;
                                    strcpy(carrinho7, boloO);
                                    qtc[6]+=qt;
                                    precocarrinho[6]+=(qt*11);
                                }

                                for(int coluna=27; coluna<=55; coluna++) //cobre o total anterior para atualizar o proximo!
                                {
                                    for(int linha=33; linha<=33; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(27,33);
                                printf("Carrinho(%d)",qtcarrinho);
                                gotoxy(42,33);
                                printf("Total: R$%.2f",total);
                                gotoxy(13,29);
                            }
                        }
                        while(qt<0);
                    }
                    else if (e[1]==4)
                    {
                        do //repetição para assegurar de que o usuario não digite um valor menor que 0
                        {
                            gotoxy(13,30);
                            printf(" Digite a quantidade de %s que deseja:",tortaS);
                            scanf("%d",&qt);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=29; linha<=31; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TtortaS) ^ (qtcarrinho==7 && tamanhoS[1]!=TtortaS) ^ (qtcarrinho==7 && tamanhoS[2]!=TtortaS) ^ (qtcarrinho==7 && tamanhoS[3]!=TtortaS) ^ (qtcarrinho==7 && tamanhoS[4]!=TtortaS) ^ (qtcarrinho==7 && tamanhoS[5]!=TtortaS) ^ (qtcarrinho==7 && tamanhoS[6]!=TtortaS))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=15; linha<=32; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*20);
                                if (tamanhoS[0]==0 || tamanhoS[0]==TtortaS)
                                {
                                    if(tamanhoS[0]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[0]=TtortaS;
                                    strcpy(carrinho1, tortaS);
                                    qtc[0]+=qt;
                                    precocarrinho[0]+=(qt*20);
                                }
                                else if (tamanhoS[1]==0 || tamanhoS[1]==TtortaS)
                                {
                                    if(tamanhoS[1]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[1]=TtortaS;
                                    strcpy(carrinho2, tortaS);
                                    qtc[1]+=qt;
                                    precocarrinho[1]+=(qt*20);
                                }

                                else if (tamanhoS[2]==0 || tamanhoS[2]==TtortaS)
                                {
                                    if(tamanhoS[2]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[2]=TtortaS;
                                    strcpy(carrinho3, tortaS);
                                    qtc[2]+=qt;
                                    precocarrinho[2]+=(qt*20);
                                }

                                else if (tamanhoS[3]==0 || tamanhoS[3]==TtortaS)
                                {
                                    if(tamanhoS[3]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[3]=TtortaS;
                                    strcpy(carrinho4, tortaS);
                                    qtc[3]+=qt;
                                    precocarrinho[3]+=(qt*20);
                                }

                                else if (tamanhoS[4]==0 || tamanhoS[4]==TtortaS)
                                {
                                    if(tamanhoS[4]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[4]=TtortaS;
                                    strcpy(carrinho5, tortaS);
                                    qtc[4]+=qt;
                                    precocarrinho[4]+=(qt*20);
                                }

                                else if (tamanhoS[5]==0 || tamanhoS[5]==TtortaS)
                                {
                                    if(tamanhoS[5]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[5]=TtortaS;
                                    strcpy(carrinho6, tortaS);
                                    qtc[5]+=qt;
                                    precocarrinho[5]+=(qt*20);
                                }

                                else if (tamanhoS[6]==0 || tamanhoS[6]==TtortaS)
                                {
                                    if(tamanhoS[6]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[6]=TtortaS;
                                    strcpy(carrinho7, tortaS);
                                    qtc[6]+=qt;
                                    precocarrinho[6]+=(qt*20);
                                }

                                for(int coluna=27; coluna<=55; coluna++) //cobre o total anterior para atualizar o proximo!
                                {
                                    for(int linha=33; linha<=33; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(27,33);
                                printf("Carrinho(%d)",qtcarrinho);
                                gotoxy(42,33);
                                printf("Total: R$%.2f",total);
                                gotoxy(13,29);
                            }
                        }
                        while(qt<0);
                    }
                    else if (e[1]==5)
                    {
                        do //repetição para assegurar de que o usuario não digite um valor menor que 0
                        {
                            gotoxy(13,30);
                            printf(" Digite a quantidade de %s que deseja:",tortaC);
                            scanf("%d",&qt);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=68; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=29; linha<=31; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TtortaC) ^ (qtcarrinho==7 && tamanhoS[1]!=TtortaC) ^ (qtcarrinho==7 && tamanhoS[2]!=TtortaC) ^ (qtcarrinho==7 && tamanhoS[3]!=TtortaC) ^ (qtcarrinho==7 && tamanhoS[4]!=TtortaC) ^ (qtcarrinho==7 && tamanhoS[5]!=TtortaC) ^ (qtcarrinho==7 && tamanhoS[6]!=TtortaC))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=15; linha<=32; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*23);
                                if (tamanhoS[0]==0 || tamanhoS[0]==TtortaC)
                                {
                                    if(tamanhoS[0]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[0]=TtortaC;
                                    strcpy(carrinho1, tortaC);
                                    qtc[0]+=qt;
                                    precocarrinho[0]+=(qt*23);
                                }
                                else if (tamanhoS[1]==0 || tamanhoS[1]==TtortaC)
                                {
                                    if(tamanhoS[1]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[1]=TtortaC;
                                    strcpy(carrinho2, tortaC);
                                    qtc[1]+=qt;
                                    precocarrinho[1]+=(qt*23);
                                }

                                else if (tamanhoS[2]==0 || tamanhoS[2]==TtortaC)
                                {
                                    if(tamanhoS[2]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[2]=TtortaC;
                                    strcpy(carrinho3, tortaC);
                                    qtc[2]+=qt;
                                    precocarrinho[2]+=(qt*23);
                                }

                                else if (tamanhoS[3]==0 || tamanhoS[3]==TtortaC)
                                {
                                    if(tamanhoS[3]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[3]=TtortaC;
                                    strcpy(carrinho4, tortaC);
                                    qtc[3]+=qt;
                                    precocarrinho[3]+=(qt*23);
                                }

                                else if (tamanhoS[4]==0 || tamanhoS[4]==TtortaC)
                                {
                                    if(tamanhoS[4]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[4]=TtortaC;
                                    strcpy(carrinho5, tortaC);
                                    qtc[4]+=qt;
                                    precocarrinho[4]+=(qt*23);
                                }

                                else if (tamanhoS[5]==0 || tamanhoS[5]==TtortaC)
                                {
                                    if(tamanhoS[5]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[5]=TtortaC;
                                    strcpy(carrinho6, tortaC);
                                    qtc[5]+=qt;
                                    precocarrinho[5]+=(qt*23);
                                }

                                else if (tamanhoS[6]==0 || tamanhoS[6]==TtortaC)
                                {
                                    if(tamanhoS[6]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[6]=TtortaC;
                                    strcpy(carrinho7, tortaC);
                                    qtc[6]+=qt;
                                    precocarrinho[6]+=(qt*23);
                                }

                                for(int coluna=27; coluna<=55; coluna++) //cobre o total anterior para atualizar o proximo!
                                {
                                    for(int linha=33; linha<=33; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(27,33);
                                printf("Carrinho(%d)",qtcarrinho);
                                gotoxy(42,33);
                                printf("Total: R$%.2f",total);
                                gotoxy(13,29);
                            }
                        }
                        while(qt<0);
                    }
                    else if (e[1]==6)
                    {
                        do //repetição para assegurar de que o usuario não digite um valor menor que 0
                        {
                            gotoxy(13,30);
                            printf(" Digite a quantidade de %s que deseja:",tortaG);
                            scanf("%d",&qt);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=29; linha<=31; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TtortaG) ^ (qtcarrinho==7 && tamanhoS[1]!=TtortaG) ^ (qtcarrinho==7 && tamanhoS[2]!=TtortaG) ^ (qtcarrinho==7 && tamanhoS[3]!=TtortaG) ^ (qtcarrinho==7 && tamanhoS[4]!=TtortaG) ^ (qtcarrinho==7 && tamanhoS[5]!=TtortaG) ^ (qtcarrinho==7 && tamanhoS[6]!=TtortaG))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=15; linha<=32; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*20);
                                if (tamanhoS[0]==0 || tamanhoS[0]==TtortaG)
                                {
                                    if(tamanhoS[0]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[0]=TtortaG;
                                    strcpy(carrinho1, tortaG);
                                    qtc[0]+=qt;
                                    precocarrinho[0]+=(qt*20);
                                }
                                else if (tamanhoS[1]==0 || tamanhoS[1]==TtortaG)
                                {
                                    if(tamanhoS[1]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[1]=TtortaG;
                                    strcpy(carrinho2, tortaG);
                                    qtc[1]+=qt;
                                    precocarrinho[1]+=(qt*20);
                                }

                                else if (tamanhoS[2]==0 || tamanhoS[2]==TtortaG)
                                {
                                    if(tamanhoS[2]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[2]=TtortaG;
                                    strcpy(carrinho3, tortaG);
                                    qtc[2]+=qt;
                                    precocarrinho[2]+=(qt*20);
                                }

                                else if (tamanhoS[3]==0 || tamanhoS[3]==TtortaG)
                                {
                                    if(tamanhoS[3]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[3]=TtortaG;
                                    strcpy(carrinho4, tortaG);
                                    qtc[3]+=qt;
                                    precocarrinho[3]+=(qt*20);
                                }

                                else if (tamanhoS[4]==0 || tamanhoS[4]==TtortaG)
                                {
                                    if(tamanhoS[4]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[4]=TtortaG;
                                    strcpy(carrinho5, tortaG);
                                    qtc[4]+=qt;
                                    precocarrinho[4]+=(qt*20);
                                }

                                else if (tamanhoS[5]==0 || tamanhoS[5]==TtortaG)
                                {
                                    if(tamanhoS[5]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[5]=TtortaG;
                                    strcpy(carrinho6, tortaG);
                                    qtc[5]+=qt;
                                    precocarrinho[5]+=(qt*20);
                                }

                                else if (tamanhoS[6]==0 || tamanhoS[6]==TtortaG)
                                {
                                    if(tamanhoS[6]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[6]=TtortaG;
                                    strcpy(carrinho7, tortaG);
                                    qtc[6]+=qt;
                                    precocarrinho[6]+=(qt*20);
                                }

                                for(int coluna=27; coluna<=55; coluna++) //cobre o total anterior para atualizar o proximo!
                                {
                                    for(int linha=33; linha<=33; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(27,33);
                                printf("Carrinho(%d)",qtcarrinho);
                                gotoxy(42,33);
                                printf("Total: R$%.2f",total);
                                gotoxy(13,29);
                            }
                        }
                        while(qt<0);
                    }
                    else if (e[1]==9) {}
                    else
                    {
                        gotoxy(13,31);
                        printf(" Item inválido! Tente escolher outro.");
                        Sleep(1000);
                    }
                    for(int linha=15; linha<=32; linha++) //limpar a tela depois da escolha
                    {
                        for(int coluna=13; coluna<=67; coluna++)
                        {
                            gotoxy(coluna,linha);
                            printf(" ");
                        }
                        printf(" ");
                    }
                    gotoxy(13,29);
                }
                while(e[1]!=9);
                break;

            case 3:
                do
                {
                    gotoxy(13,15);
                    printf(" Obs: Digite a quantidade em mL ou g que deseja.");
                    gotoxy(13,17);
                    printf(" 1 - Leite....................R$0.18(100mL)\n");
                    gotoxy(13,19);
                    printf(" 2 - Iogurte..................R$0.75(100mL)\n");
                    gotoxy(13,21);
                    printf(" 3 - Queijo Pré-Cozido........R$2.50(100g)\n");
                    gotoxy(13,23);
                    printf(" 4 - Requeijão................R$4.35(100g)\n");
                    gotoxy(13,25);
                    printf(" 5 - Manteiga.................R$5.00(100g)\n");
                    gotoxy(13,27);
                    printf(" 9 - Voltar...................Grátis!\n");
                    gotoxy(13,29);
                    printf(" O que deseja? ");
                    scanf("%d",&e[1]);
                    if (e[1]==1)  // caso escolha pao de forma
                    {
                        do //repetição para assegurar de que o usuario não digite um valor menor que 0
                        {
                            gotoxy(13,30);
                            printf(" Digite a quantidade de %s que deseja:",leite);
                            scanf("%d",&qt);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=29; linha<=31; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=Tleite) ^ (qtcarrinho==7 && tamanhoS[1]!=Tleite) ^ (qtcarrinho==7 && tamanhoS[2]!=Tleite) ^ (qtcarrinho==7 && tamanhoS[3]!=Tleite) ^ (qtcarrinho==7 && tamanhoS[4]!=Tleite) ^ (qtcarrinho==7 && tamanhoS[5]!=Tleite) ^ (qtcarrinho==7 && tamanhoS[6]!=Tleite))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=15; linha<=32; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.0018);
                                if (tamanhoS[0]==0 || tamanhoS[0]==Tleite)
                                {
                                    if(tamanhoS[0]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[0]=Tleite;
                                    strcpy(carrinho1, leite);
                                    qtc[0]+=qt;
                                    precocarrinho[0]+=(qt*0.0018);
                                }
                                else if (tamanhoS[1]==0 || tamanhoS[1]==Tleite)
                                {
                                    if(tamanhoS[1]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[1]=Tleite;
                                    strcpy(carrinho2, leite);
                                    qtc[1]+=qt;
                                    precocarrinho[1]+=(qt*0.0018);
                                }

                                else if (tamanhoS[2]==0 || tamanhoS[2]==Tleite)
                                {
                                    if(tamanhoS[2]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[2]=Tleite;
                                    strcpy(carrinho3, leite);
                                    qtc[2]+=qt;
                                    precocarrinho[2]+=(qt*0.0018);
                                }

                                else if (tamanhoS[3]==0 || tamanhoS[3]==Tleite)
                                {
                                    if(tamanhoS[3]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[3]=Tleite;
                                    strcpy(carrinho4, leite);
                                    qtc[3]+=qt;
                                    precocarrinho[3]+=(qt*0.0018);
                                }

                                else if (tamanhoS[4]==0 || tamanhoS[4]==Tleite)
                                {
                                    if(tamanhoS[4]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[4]=Tleite;
                                    strcpy(carrinho5, leite);
                                    qtc[4]+=qt;
                                    precocarrinho[4]+=(qt*0.0018);
                                }

                                else if (tamanhoS[5]==0 || tamanhoS[5]==Tleite)
                                {
                                    if(tamanhoS[5]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[5]=Tleite;
                                    strcpy(carrinho6, leite);
                                    qtc[5]+=qt;
                                    precocarrinho[5]+=(qt*0.0018);
                                }

                                else if (tamanhoS[6]==0 || tamanhoS[6]==Tleite)
                                {
                                    if(tamanhoS[6]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[6]=Tleite;
                                    strcpy(carrinho7, leite);
                                    qtc[6]+=qt;
                                    precocarrinho[6]+=(qt*0.0018);
                                }

                                for(int coluna=27; coluna<=55; coluna++) //cobre o total anterior para atualizar o proximo!
                                {
                                    for(int linha=33; linha<=33; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(27,33);
                                printf("Carrinho(%d)",qtcarrinho);
                                gotoxy(42,33);
                                printf("Total: R$%.2f",total);
                                gotoxy(13,29);
                            }
                        }
                        while(qt<0);
                    }
                    else if (e[1]==2)  // caso escolha pao de forma
                    {
                        do //repetição para assegurar de que o usuario não digite um valor menor que 0
                        {
                            gotoxy(13,30);
                            printf(" Digite a quantidade de %s que deseja:",iogurte);
                            scanf("%d",&qt);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=29; linha<=31; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=Tiogurte) ^ (qtcarrinho==7 && tamanhoS[1]!=Tiogurte) ^ (qtcarrinho==7 && tamanhoS[2]!=Tiogurte) ^ (qtcarrinho==7 && tamanhoS[3]!=Tiogurte) ^ (qtcarrinho==7 && tamanhoS[4]!=Tiogurte) ^ (qtcarrinho==7 && tamanhoS[5]!=Tiogurte) ^ (qtcarrinho==7 && tamanhoS[6]!=Tiogurte))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=15; linha<=32; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.0075);
                                if (tamanhoS[0]==0 || tamanhoS[0]==Tiogurte)
                                {
                                    if(tamanhoS[0]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[0]=Tiogurte;
                                    strcpy(carrinho1, iogurte);
                                    qtc[0]+=qt;
                                    precocarrinho[0]+=(qt*0.0075);
                                }
                                else if (tamanhoS[1]==0 || tamanhoS[1]==Tiogurte)
                                {
                                    if(tamanhoS[1]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[1]=Tiogurte;
                                    strcpy(carrinho2, iogurte);
                                    qtc[1]+=qt;
                                    precocarrinho[1]+=(qt*0.0075);
                                }

                                else if (tamanhoS[2]==0 || tamanhoS[2]==Tiogurte)
                                {
                                    if(tamanhoS[2]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[2]=Tiogurte;
                                    strcpy(carrinho3, iogurte);
                                    qtc[2]+=qt;
                                    precocarrinho[2]+=(qt*0.0075);
                                }

                                else if (tamanhoS[3]==0 || tamanhoS[3]==Tiogurte)
                                {
                                    if(tamanhoS[3]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[3]=Tiogurte;
                                    strcpy(carrinho4, iogurte);
                                    qtc[3]+=qt;
                                    precocarrinho[3]+=(qt*0.0075);
                                }

                                else if (tamanhoS[4]==0 || tamanhoS[4]==Tiogurte)
                                {
                                    if(tamanhoS[4]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[4]=Tiogurte;
                                    strcpy(carrinho5, iogurte);
                                    qtc[4]+=qt;
                                    precocarrinho[4]+=(qt*0.0075);
                                }

                                else if (tamanhoS[5]==0 || tamanhoS[5]==Tiogurte)
                                {
                                    if(tamanhoS[5]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[5]=Tiogurte;
                                    strcpy(carrinho6, iogurte);
                                    qtc[5]+=qt;
                                    precocarrinho[5]+=(qt*0.0075);
                                }

                                else if (tamanhoS[6]==0 || tamanhoS[6]==Tiogurte)
                                {
                                    if(tamanhoS[6]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[6]=Tiogurte;
                                    strcpy(carrinho7, iogurte);
                                    qtc[6]+=qt;
                                    precocarrinho[6]+=(qt*0.0075);
                                }

                                for(int coluna=27; coluna<=55; coluna++) //cobre o total anterior para atualizar o proximo!
                                {
                                    for(int linha=33; linha<=33; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(27,33);
                                printf("Carrinho(%d)",qtcarrinho);
                                gotoxy(42,33);
                                printf("Total: R$%.2f",total);
                                gotoxy(13,29);
                            }
                        }
                        while(qt<0);
                    }
                    else if (e[1]==3)  // caso escolha pao de forma
                    {
                        do //repetição para assegurar de que o usuario não digite um valor menor que 0
                        {
                            gotoxy(13,30);
                            printf(" Digite a quantidade de %s que deseja:",queijo);
                            scanf("%d",&qt);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=29; linha<=31; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=Tqueijo) ^ (qtcarrinho==7 && tamanhoS[1]!=Tqueijo) ^ (qtcarrinho==7 && tamanhoS[2]!=Tqueijo) ^ (qtcarrinho==7 && tamanhoS[3]!=Tqueijo) ^ (qtcarrinho==7 && tamanhoS[4]!=Tqueijo) ^ (qtcarrinho==7 && tamanhoS[5]!=Tqueijo) ^ (qtcarrinho==7 && tamanhoS[6]!=Tqueijo))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,31);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=15; linha<=32; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.025);
                                if (tamanhoS[0]==0 || tamanhoS[0]==Tqueijo)
                                {
                                    if(tamanhoS[0]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[0]=Tqueijo;
                                    strcpy(carrinho1, queijo);
                                    qtc[0]+=qt;
                                    precocarrinho[0]+=(qt*0.025);
                                }
                                else if (tamanhoS[1]==0 || tamanhoS[1]==Tqueijo)
                                {
                                    if(tamanhoS[1]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[1]=Tqueijo;
                                    strcpy(carrinho2, queijo);
                                    qtc[1]+=qt;
                                    precocarrinho[1]+=(qt*0.025);
                                }

                                else if (tamanhoS[2]==0 || tamanhoS[2]==Tqueijo)
                                {
                                    if(tamanhoS[2]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[2]=Tqueijo;
                                    strcpy(carrinho3, queijo);
                                    qtc[2]+=qt;
                                    precocarrinho[2]+=(qt*0.025);
                                }

                                else if (tamanhoS[3]==0 || tamanhoS[3]==Tqueijo)
                                {
                                    if(tamanhoS[3]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[3]=Tqueijo;
                                    strcpy(carrinho4, queijo);
                                    qtc[3]+=qt;
                                    precocarrinho[3]+=(qt*0.025);
                                }

                                else if (tamanhoS[4]==0 || tamanhoS[4]==Tqueijo)
                                {
                                    if(tamanhoS[4]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[4]=Tqueijo;
                                    strcpy(carrinho5, queijo);
                                    qtc[4]+=qt;
                                    precocarrinho[4]+=(qt*0.025);
                                }

                                else if (tamanhoS[5]==0 || tamanhoS[5]==Tqueijo)
                                {
                                    if(tamanhoS[5]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[5]=Tqueijo;
                                    strcpy(carrinho6, queijo);
                                    qtc[5]+=qt;
                                    precocarrinho[5]+=(qt*0.025);
                                }

                                else if (tamanhoS[6]==0 || tamanhoS[6]==Tqueijo)
                                {
                                    if(tamanhoS[6]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[6]=Tqueijo;
                                    strcpy(carrinho7, queijo);
                                    qtc[6]+=qt;
                                    precocarrinho[6]+=(qt*0.025);
                                }

                                for(int coluna=27; coluna<=55; coluna++) //cobre o total anterior para atualizar o proximo!
                                {
                                    for(int linha=33; linha<=33; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(27,33);
                                printf("Carrinho(%d)",qtcarrinho);
                                gotoxy(42,33);
                                printf("Total: R$%.2f",total);
                                gotoxy(13,29);
                            }
                        }
                        while(qt<0);
                    }
                    else if (e[1]==4)  // caso escolha pao de forma
                    {
                        do //repetição para assegurar de que o usuario não digite um valor menor que 0
                        {
                            gotoxy(13,30);
                            printf(" Digite a quantidade de %s que deseja:",requeijao);
                            scanf("%d",&qt);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=29; linha<=31; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=Trequeijao) ^ (qtcarrinho==7 && tamanhoS[1]!=Trequeijao) ^ (qtcarrinho==7 && tamanhoS[2]!=Trequeijao) ^ (qtcarrinho==7 && tamanhoS[3]!=Trequeijao) ^ (qtcarrinho==7 && tamanhoS[4]!=Trequeijao) ^ (qtcarrinho==7 && tamanhoS[5]!=Trequeijao) ^ (qtcarrinho==7 && tamanhoS[6]!=Trequeijao))
                            {
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=15; linha<=32; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.0435);
                                if (tamanhoS[0]==0 || tamanhoS[0]==Trequeijao)
                                {
                                    if(tamanhoS[0]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[0]=Trequeijao;
                                    strcpy(carrinho1, requeijao);
                                    qtc[0]+=qt;
                                    precocarrinho[0]+=(qt*0.0435);
                                }
                                else if (tamanhoS[1]==0 || tamanhoS[1]==Trequeijao)
                                {
                                    if(tamanhoS[1]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[1]=Trequeijao;
                                    strcpy(carrinho2, requeijao);
                                    qtc[1]+=qt;
                                    precocarrinho[1]+=(qt*0.0435);
                                }

                                else if (tamanhoS[2]==0 || tamanhoS[2]==Trequeijao)
                                {
                                    if(tamanhoS[2]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[2]=Trequeijao;
                                    strcpy(carrinho3, requeijao);
                                    qtc[2]+=qt;
                                    precocarrinho[2]+=(qt*0.0435);
                                }

                                else if (tamanhoS[3]==0 || tamanhoS[3]==Trequeijao)
                                {
                                    if(tamanhoS[3]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[3]=Trequeijao;
                                    strcpy(carrinho4, requeijao);
                                    qtc[3]+=qt;
                                    precocarrinho[3]+=(qt*0.0435);
                                }

                                else if (tamanhoS[4]==0 || tamanhoS[4]==Trequeijao)
                                {
                                    if(tamanhoS[4]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[4]=Trequeijao;
                                    strcpy(carrinho5, requeijao);
                                    qtc[4]+=qt;
                                    precocarrinho[4]+=(qt*0.0435);
                                }

                                else if (tamanhoS[5]==0 || tamanhoS[5]==Trequeijao)
                                {
                                    if(tamanhoS[5]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[5]=Trequeijao;
                                    strcpy(carrinho6, requeijao);
                                    qtc[5]+=qt;
                                    precocarrinho[5]+=(qt*0.0435);
                                }

                                else if (tamanhoS[6]==0 || tamanhoS[6]==Trequeijao)
                                {
                                    if(tamanhoS[6]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[6]=Trequeijao;
                                    strcpy(carrinho7, requeijao);
                                    qtc[6]+=qt;
                                    precocarrinho[6]+=(qt*0.0435);
                                }

                                for(int coluna=27; coluna<=55; coluna++) //cobre o total anterior para atualizar o proximo!
                                {
                                    for(int linha=33; linha<=33; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(27,33);
                                printf("Carrinho(%d)",qtcarrinho);
                                gotoxy(42,33);
                                printf("Total: R$%.2f",total);
                                gotoxy(13,20);
                            }
                        }
                        while(qt<0);
                    }
                    else if (e[1]==5)  // caso escolha pao de forma
                    {
                        do //repetição para assegurar de que o usuario não digite um valor menor que 0
                        {
                            gotoxy(13,30);
                            printf(" Digite a quantidade de %s que deseja: ",manteiga);
                            scanf("%d",&qt);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=29; linha<=31; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=Tmanteiga) ^ (qtcarrinho==7 && tamanhoS[1]!=Tmanteiga) ^ (qtcarrinho==7 && tamanhoS[2]!=Tmanteiga) ^ (qtcarrinho==7 && tamanhoS[3]!=Tmanteiga) ^ (qtcarrinho==7 && tamanhoS[4]!=Tmanteiga) ^ (qtcarrinho==7 && tamanhoS[5]!=Tmanteiga) ^ (qtcarrinho==7 && tamanhoS[6]!=Tmanteiga))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=15; linha<=32; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.05);
                                if (tamanhoS[0]==0 || tamanhoS[0]==Tmanteiga)
                                {
                                    if(tamanhoS[0]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[0]=Tmanteiga;
                                    strcpy(carrinho1, manteiga);
                                    qtc[0]+=qt;
                                    precocarrinho[0]+=(qt*0.05);
                                }
                                else if (tamanhoS[1]==0 || tamanhoS[1]==Tmanteiga)
                                {
                                    if(tamanhoS[1]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[1]=Tmanteiga;
                                    strcpy(carrinho2, manteiga);
                                    qtc[1]+=qt;
                                    precocarrinho[1]+=(qt*0.05);
                                }

                                else if (tamanhoS[2]==0 || tamanhoS[2]==Tmanteiga)
                                {
                                    if(tamanhoS[2]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[2]=Tmanteiga;
                                    strcpy(carrinho3, manteiga);
                                    qtc[2]+=qt;
                                    precocarrinho[2]+=(qt*0.05);
                                }

                                else if (tamanhoS[3]==0 || tamanhoS[3]==Tmanteiga)
                                {
                                    if(tamanhoS[3]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[3]=Tmanteiga;
                                    strcpy(carrinho4, manteiga);
                                    qtc[3]+=qt;
                                    precocarrinho[3]+=(qt*0.05);
                                }

                                else if (tamanhoS[4]==0 || tamanhoS[4]==Tmanteiga)
                                {
                                    if(tamanhoS[4]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[4]=Tmanteiga;
                                    strcpy(carrinho5, manteiga);
                                    qtc[4]+=qt;
                                    precocarrinho[4]+=(qt*0.05);
                                }

                                else if (tamanhoS[5]==0 || tamanhoS[5]==Tmanteiga)
                                {
                                    if(tamanhoS[5]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[5]=Tmanteiga;
                                    strcpy(carrinho6, manteiga);
                                    qtc[5]+=qt;
                                    precocarrinho[5]+=(qt*0.05);
                                }

                                else if (tamanhoS[6]==0 || tamanhoS[6]==Tmanteiga)
                                {
                                    if(tamanhoS[6]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[6]=Tmanteiga;
                                    strcpy(carrinho7, manteiga);
                                    qtc[6]+=qt;
                                    precocarrinho[6]+=(qt*0.05);
                                }

                                for(int coluna=27; coluna<=55; coluna++) //cobre o total anterior para atualizar o proximo!
                                {
                                    for(int linha=33; linha<=33; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(27,33);
                                printf("Carrinho(%d)",qtcarrinho);
                                gotoxy(42,33);
                                printf("Total: R$%.2f",total);
                                gotoxy(13,29);
                            }
                        }
                        while(qt<0);
                    }
                    else if (e[1]==9) {}
                    else
                    {
                        gotoxy(13,31);
                        printf(" Item inválido! Tente escolher outro.");
                        Sleep(1000);
                    }
                    for(int linha=15; linha<=32; linha++) //limpar a tela depois da escolha
                    {
                        for(int coluna=13; coluna<=67; coluna++)
                        {
                            gotoxy(coluna,linha);
                            printf(" ");
                        }
                        printf(" ");
                    }
                    gotoxy(13,29);
                }
                while(e[1]!=9);
                break;

            case 4:
                do
                {
                    gotoxy(13,15);
                    printf(" *Obs: Digite a quantidade em g(grama) que deseja.\n");
                    gotoxy(13,17);
                    printf(" 1 - Presunto de Frango.......R$1.50 (100g)\n");
                    gotoxy(13,19);
                    printf(" 2 - Presunto de Porco........R$0.90 (100g)\n");
                    gotoxy(13,21);
                    printf(" 3 - Mortadela de Porco.......R$0.80 (100g)\n");
                    gotoxy(13,23);
                    printf(" 4 - Mortadela de Frango......R$1.00 (100g)\n");
                    gotoxy(13,25);
                    printf(" 5 - Salame Defumado..........R$5.00 (100g)\n");
                    gotoxy(13,27);
                    printf(" 9 - Voltar...................Grátis!\n");
                    gotoxy(13,29);
                    printf(" O que deseja? ");
                    scanf("%d",&e[1]);
                    if (e[1]==1)  // caso escolha pao de forma
                    {
                        do //repetição para assegurar de que o usuario não digite um valor menor que 0
                        {
                            gotoxy(13,30);
                            printf("Digite a quantidade de %s que deseja:",presuntoF);
                            scanf("%d",&qt);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=29; linha<=31; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TpresuntoF) ^ (qtcarrinho==7 && tamanhoS[1]!=TpresuntoF) ^ (qtcarrinho==7 && tamanhoS[2]!=TpresuntoF) ^ (qtcarrinho==7 && tamanhoS[3]!=TpresuntoF) ^ (qtcarrinho==7 && tamanhoS[4]!=TpresuntoF) ^ (qtcarrinho==7 && tamanhoS[5]!=TpresuntoF) ^ (qtcarrinho==7 && tamanhoS[6]!=TpresuntoF))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=15; linha<=32; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.015);
                                if (tamanhoS[0]==0 || tamanhoS[0]==TpresuntoF)
                                {
                                    if(tamanhoS[0]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[0]=TpresuntoF;
                                    strcpy(carrinho1, presuntoF);
                                    qtc[0]+=qt;
                                    precocarrinho[0]+=(qt*0.015);
                                }
                                else if (tamanhoS[1]==0 || tamanhoS[1]==TpresuntoF)
                                {
                                    if(tamanhoS[1]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[1]=TpresuntoF;
                                    strcpy(carrinho2, presuntoF);
                                    qtc[1]+=qt;
                                    precocarrinho[1]+=(qt*0.015);
                                }

                                else if (tamanhoS[2]==0 || tamanhoS[2]==TpresuntoF)
                                {
                                    if(tamanhoS[2]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[2]=TpresuntoF;
                                    strcpy(carrinho3, presuntoF);
                                    qtc[2]+=qt;
                                    precocarrinho[2]+=(qt*0.015);
                                }

                                else if (tamanhoS[3]==0 || tamanhoS[3]==TpresuntoF)
                                {
                                    if(tamanhoS[3]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[3]=TpresuntoF;
                                    strcpy(carrinho4, presuntoF);
                                    qtc[3]+=qt;
                                    precocarrinho[3]+=(qt*0.015);
                                }

                                else if (tamanhoS[4]==0 || tamanhoS[4]==TpresuntoF)
                                {
                                    if(tamanhoS[4]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[4]=TpresuntoF;
                                    strcpy(carrinho5, presuntoF);
                                    qtc[4]+=qt;
                                    precocarrinho[4]+=(qt*0.015);
                                }

                                else if (tamanhoS[5]==0 || tamanhoS[5]==TpresuntoF)
                                {
                                    if(tamanhoS[5]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[5]=TpresuntoF;
                                    strcpy(carrinho6, presuntoF);
                                    qtc[5]+=qt;
                                    precocarrinho[5]+=(qt*0.015);
                                }

                                else if (tamanhoS[6]==0 || tamanhoS[6]==TpresuntoF)
                                {
                                    if(tamanhoS[6]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[6]=TpresuntoF;
                                    strcpy(carrinho7, presuntoF);
                                    qtc[6]+=qt;
                                    precocarrinho[6]+=(qt*0.015);
                                }

                                for(int coluna=27; coluna<=55; coluna++) //cobre o total anterior para atualizar o proximo!
                                {
                                    for(int linha=33; linha<=33; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(27,33);
                                printf("Carrinho(%d)",qtcarrinho);
                                gotoxy(42,33);
                                printf("Total: R$%.2f",total);
                                gotoxy(13,29);
                            }
                        }
                        while(qt<0);
                    }
                    else if (e[1]==2)  // caso escolha pao de forma
                    {
                        do //repetição para assegurar de que o usuario não digite um valor menor que 0
                        {
                            gotoxy(13,30);
                            printf(" Digite a quantidade de %s que deseja:",presuntoP);
                            scanf("%d",&qt);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=29; linha<=31; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TpresuntoP) ^ (qtcarrinho==7 && tamanhoS[1]!=TpresuntoP) ^ (qtcarrinho==7 && tamanhoS[2]!=TpresuntoP) ^ (qtcarrinho==7 && tamanhoS[3]!=TpresuntoP) ^ (qtcarrinho==7 && tamanhoS[4]!=TpresuntoP) ^ (qtcarrinho==7 && tamanhoS[5]!=TpresuntoP) ^ (qtcarrinho==7 && tamanhoS[6]!=TpresuntoP))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=15; linha<=32; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.009);
                                if (tamanhoS[0]==0 || tamanhoS[0]==TpresuntoP)
                                {
                                    if(tamanhoS[0]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[0]=TpresuntoP;
                                    strcpy(carrinho1, presuntoP);
                                    qtc[0]+=qt;
                                    precocarrinho[0]+=(qt*0.009);
                                }
                                else if (tamanhoS[1]==0 || tamanhoS[1]==TpresuntoP)
                                {
                                    if(tamanhoS[1]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[1]=TpresuntoP;
                                    strcpy(carrinho2, presuntoP);
                                    qtc[1]+=qt;
                                    precocarrinho[1]+=(qt*0.009);
                                }

                                else if (tamanhoS[2]==0 || tamanhoS[2]==TpresuntoP)
                                {
                                    if(tamanhoS[2]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[2]=TpresuntoP;
                                    strcpy(carrinho3, presuntoP);
                                    qtc[2]+=qt;
                                    precocarrinho[2]+=(qt*0.009);
                                }

                                else if (tamanhoS[3]==0 || tamanhoS[3]==TpresuntoP)
                                {
                                    if(tamanhoS[3]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[3]=TpresuntoP;
                                    strcpy(carrinho4, presuntoP);
                                    qtc[3]+=qt;
                                    precocarrinho[3]+=(qt*0.009);
                                }

                                else if (tamanhoS[4]==0 || tamanhoS[4]==TpresuntoP)
                                {
                                    if(tamanhoS[4]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[4]=TpresuntoP;
                                    strcpy(carrinho5, presuntoP);
                                    qtc[4]+=qt;
                                    precocarrinho[4]+=(qt*0.009);
                                }

                                else if (tamanhoS[5]==0 || tamanhoS[5]==TpresuntoP)
                                {
                                    if(tamanhoS[5]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[5]=TpresuntoP;
                                    strcpy(carrinho6, presuntoP);
                                    qtc[5]+=qt;
                                    precocarrinho[5]+=(qt*0.009);
                                }

                                else if (tamanhoS[6]==0 || tamanhoS[6]==TtortaS)
                                {
                                    if(tamanhoS[6]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[6]=TtortaS;
                                    strcpy(carrinho7, tortaS);
                                    qtc[6]+=qt;
                                    precocarrinho[6]+=(qt*0.009);
                                }

                                for(int coluna=27; coluna<=55; coluna++) //cobre o total anterior para atualizar o proximo!
                                {
                                    for(int linha=33; linha<=33; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(27,33);
                                printf("Carrinho(%d)",qtcarrinho);
                                gotoxy(42,33);
                                printf("Total: R$%.2f",total);
                                gotoxy(13,29);
                            }
                        }
                        while(qt<0);
                    }
                    else if (e[1]==3)  // caso escolha pao de forma
                    {
                        do //repetição para assegurar de que o usuario não digite um valor menor que 0
                        {
                            gotoxy(13,30);
                            printf("Digite a quantidade de %s que deseja:",mortadelaP);
                            scanf("%d",&qt);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=29; linha<=31; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TmortadelaP) ^ (qtcarrinho==7 && tamanhoS[1]!=TmortadelaP) ^ (qtcarrinho==7 && tamanhoS[2]!=TmortadelaP) ^ (qtcarrinho==7 && tamanhoS[3]!=TmortadelaP) ^ (qtcarrinho==7 && tamanhoS[4]!=TmortadelaP) ^ (qtcarrinho==7 && tamanhoS[5]!=TmortadelaP) ^ (qtcarrinho==7 && tamanhoS[6]!=TmortadelaP))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=15; linha<=32; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.008);
                                if (tamanhoS[0]==0 || tamanhoS[0]==TmortadelaP)
                                {
                                    if(tamanhoS[0]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[0]=TmortadelaP;
                                    strcpy(carrinho1, mortadelaP);
                                    qtc[0]+=qt;
                                    precocarrinho[0]+=(qt*0.008);
                                }
                                else if (tamanhoS[1]==0 || tamanhoS[1]==TmortadelaP)
                                {
                                    if(tamanhoS[1]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[1]=TmortadelaP;
                                    strcpy(carrinho2, mortadelaP);
                                    qtc[1]+=qt;
                                    precocarrinho[1]+=(qt*0.008);
                                }

                                else if (tamanhoS[2]==0 || tamanhoS[2]==TmortadelaP)
                                {
                                    if(tamanhoS[2]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[2]=TmortadelaP;
                                    strcpy(carrinho3, mortadelaP);
                                    qtc[2]+=qt;
                                    precocarrinho[2]+=(qt*0.008);
                                }

                                else if (tamanhoS[3]==0 || tamanhoS[3]==TmortadelaP)
                                {
                                    if(tamanhoS[3]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[3]=TmortadelaP;
                                    strcpy(carrinho4, mortadelaP);
                                    qtc[3]+=qt;
                                    precocarrinho[3]+=(qt*0.008);
                                }

                                else if (tamanhoS[4]==0 || tamanhoS[4]==TmortadelaP)
                                {
                                    if(tamanhoS[4]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[4]=TmortadelaP;
                                    strcpy(carrinho5, mortadelaP);
                                    qtc[4]+=qt;
                                    precocarrinho[4]+=(qt*0.008);
                                }

                                else if (tamanhoS[5]==0 || tamanhoS[5]==TmortadelaP)
                                {
                                    if(tamanhoS[5]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[5]=TmortadelaP;
                                    strcpy(carrinho6, mortadelaP);
                                    qtc[5]+=qt;
                                    precocarrinho[5]+=(qt*0.008);
                                }

                                else if (tamanhoS[6]==0 || tamanhoS[6]==TmortadelaP)
                                {
                                    if(tamanhoS[6]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[6]=TmortadelaP;
                                    strcpy(carrinho7, mortadelaP);
                                    qtc[6]+=qt;
                                    precocarrinho[6]+=(qt*0.008);
                                }

                                for(int coluna=27; coluna<=55; coluna++) //cobre o total anterior para atualizar o proximo!
                                {
                                    for(int linha=33; linha<=33; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(27,33);
                                printf("Carrinho(%d)",qtcarrinho);
                                gotoxy(42,33);
                                printf("Total: R$%.2f",total);
                                gotoxy(13,20);
                            }
                        }
                        while(qt<0);
                    }
                    else if (e[1]==4)  // caso escolha pao de forma
                    {
                        do //repetição para assegurar de que o usuario não digite um valor menor que 0
                        {
                            gotoxy(13,30);
                            printf("Digite a quantidade de %s que deseja:",mortadelaF);
                            scanf("%d",&qt);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=68; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=29; linha<=31; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TmortadelaF) ^ (qtcarrinho==7 && tamanhoS[1]!=TmortadelaF) ^ (qtcarrinho==7 && tamanhoS[2]!=TmortadelaF) ^ (qtcarrinho==7 && tamanhoS[3]!=TmortadelaF) ^ (qtcarrinho==7 && tamanhoS[4]!=TmortadelaF) ^ (qtcarrinho==7 && tamanhoS[5]!=TmortadelaF) ^ (qtcarrinho==7 && tamanhoS[6]!=TmortadelaF))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=15; linha<=32; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(13,20);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.01);
                                if (tamanhoS[0]==0 || tamanhoS[0]==TmortadelaF)
                                {
                                    if(tamanhoS[0]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[0]=TmortadelaF;
                                    strcpy(carrinho1, mortadelaF);
                                    qtc[0]+=qt;
                                    precocarrinho[0]+=(qt*0.01);
                                }
                                else if (tamanhoS[1]==0 || tamanhoS[1]==TmortadelaF)
                                {
                                    if(tamanhoS[1]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[1]=TmortadelaF;
                                    strcpy(carrinho2, mortadelaF);
                                    qtc[1]+=qt;
                                    precocarrinho[1]+=(qt*0.01);
                                }

                                else if (tamanhoS[2]==0 || tamanhoS[2]==TmortadelaF)
                                {
                                    if(tamanhoS[2]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[2]=TmortadelaF;
                                    strcpy(carrinho3, mortadelaF);
                                    qtc[2]+=qt;
                                    precocarrinho[2]+=(qt*0.01);
                                }

                                else if (tamanhoS[3]==0 || tamanhoS[3]==TmortadelaF)
                                {
                                    if(tamanhoS[3]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[3]=TmortadelaF;
                                    strcpy(carrinho4, mortadelaF);
                                    qtc[3]+=qt;
                                    precocarrinho[3]+=(qt*0.01);
                                }

                                else if (tamanhoS[4]==0 || tamanhoS[4]==TmortadelaF)
                                {
                                    if(tamanhoS[4]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[4]=TmortadelaF;
                                    strcpy(carrinho5, mortadelaF);
                                    qtc[4]+=qt;
                                    precocarrinho[4]+=(qt*0.01);
                                }

                                else if (tamanhoS[5]==0 || tamanhoS[5]==TmortadelaF)
                                {
                                    if(tamanhoS[5]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[5]=TmortadelaF;
                                    strcpy(carrinho6, mortadelaF);
                                    qtc[5]+=qt;
                                    precocarrinho[5]+=(qt*0.01);
                                }

                                else if (tamanhoS[6]==0 || tamanhoS[6]==TmortadelaF)
                                {
                                    if(tamanhoS[6]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[6]=TmortadelaF;
                                    strcpy(carrinho7, mortadelaF);
                                    qtc[6]+=qt;
                                    precocarrinho[6]+=(qt*0.01);
                                }

                                for(int coluna=27; coluna<=55; coluna++) //cobre o total anterior para atualizar o proximo!
                                {
                                    for(int linha=33; linha<=33; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(27,33);
                                printf("Carrinho(%d)",qtcarrinho);
                                gotoxy(42,33);
                                printf("Total: R$%.2f",total);
                                gotoxy(13,29);
                            }
                        }
                        while(qt<0);
                    }
                    else if (e[1]==5)  // caso escolha pao de forma
                    {
                        do //repetição para assegurar de que o usuario não digite um valor menor que 0
                        {
                            gotoxy(13,30);
                            printf(" Digite a quantidade de %s que deseja:",salame);
                            scanf("%d",&qt);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=29; linha<=31; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=Tsalame) ^ (qtcarrinho==7 && tamanhoS[1]!=Tsalame) ^ (qtcarrinho==7 && tamanhoS[2]!=Tsalame) ^ (qtcarrinho==7 && tamanhoS[3]!=Tsalame) ^ (qtcarrinho==7 && tamanhoS[4]!=Tsalame) ^ (qtcarrinho==7 && tamanhoS[5]!=Tsalame) ^ (qtcarrinho==7 && tamanhoS[6]!=Tsalame))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=15; linha<=32; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.05);
                                if (tamanhoS[0]==0 || tamanhoS[0]==Tsalame)
                                {
                                    if(tamanhoS[0]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[0]=Tsalame;
                                    strcpy(carrinho1, salame);
                                    qtc[0]+=qt;
                                    precocarrinho[0]+=(qt*0.05);
                                }
                                else if (tamanhoS[1]==0 || tamanhoS[1]==Tsalame)
                                {
                                    if(tamanhoS[1]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[1]=Tsalame;
                                    strcpy(carrinho2, salame);
                                    qtc[1]+=qt;
                                    precocarrinho[1]+=(qt*0.05);
                                }

                                else if (tamanhoS[2]==0 || tamanhoS[2]==Tsalame)
                                {
                                    if(tamanhoS[2]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[2]=Tsalame;
                                    strcpy(carrinho3, salame);
                                    qtc[2]+=qt;
                                    precocarrinho[2]+=(qt*0.05);
                                }

                                else if (tamanhoS[3]==0 || tamanhoS[3]==Tsalame)
                                {
                                    if(tamanhoS[3]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[3]=Tsalame;
                                    strcpy(carrinho4, salame);
                                    qtc[3]+=qt;
                                    precocarrinho[3]+=(qt*0.05);
                                }

                                else if (tamanhoS[4]==0 || tamanhoS[4]==Tsalame)
                                {
                                    if(tamanhoS[4]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[4]=Tsalame;
                                    strcpy(carrinho5, salame);
                                    qtc[4]+=qt;
                                    precocarrinho[4]+=(qt*0.05);
                                }

                                else if (tamanhoS[5]==0 || tamanhoS[5]==Tsalame)
                                {
                                    if(tamanhoS[5]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[5]=Tsalame;
                                    strcpy(carrinho6, salame);
                                    qtc[5]+=qt;
                                    precocarrinho[5]+=(qt*0.05);
                                }

                                else if (tamanhoS[6]==0 || tamanhoS[6]==Tsalame)
                                {
                                    if(tamanhoS[6]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[6]=Tsalame;
                                    strcpy(carrinho7, salame);
                                    qtc[6]+=qt;
                                    precocarrinho[6]+=(qt*0.05);
                                }

                                for(int coluna=27; coluna<=55; coluna++) //cobre o total anterior para atualizar o proximo!
                                {
                                    for(int linha=33; linha<=33; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(27,33);
                                printf("Carrinho(%d)",qtcarrinho);
                                gotoxy(42,33);
                                printf("Total: R$%.2f",total);
                                gotoxy(13,29);
                            }
                        }
                        while(qt<0);
                    }
                    else if (e[1]==9) {}
                    else
                    {
                        gotoxy(13,31);
                        printf(" Item inválido! Tente escolher outro.");
                        Sleep(1000);
                    }
                    for(int linha=15; linha<=32; linha++) //limpar a tela depois da escolha
                    {
                        for(int coluna=13; coluna<=67; coluna++)
                        {
                            gotoxy(coluna,linha);
                            printf(" ");
                        }
                        printf(" ");
                    }
                    gotoxy(13,29);
                }
                while(e[1]!=9);
                break;

            case 5:
                do
                {
                    gotoxy(13,15);
                    printf(" 1 - Doce de Leite.......................R$2.00(100mL)\n");
                    gotoxy(13,17);
                    printf(" 2 - Bala de Leite.......................R$0.25(Unid.)\n");
                    gotoxy(13,19);
                    printf(" 3 - Cocada Baiana.......................R$1.00(Unid.)\n");
                    gotoxy(13,21);
                    printf(" 4 - Cocada de Coco......................R$0.80(Unid.)\n");
                    gotoxy(13,23);
                    printf(" 5 - Biscoito c/ Pingos de Chocolate.....R$0.40(Unid.)\n");
                    gotoxy(13,25);
                    printf(" 6 - Suspiro (Peito de Moça).............R$0.70(Unid.)\n");
                    gotoxy(13,27);
                    printf(" 9 - Voltar..............................Grátis!\n");
                    gotoxy(13,29);
                    printf(" O que deseja? ");
                    scanf("%d",&e[1]);
                    if (e[1]==1)  // caso escolha pao de forma
                    {
                        do //repetição para assegurar de que o usuario não digite um valor menor que 0
                        {
                            gotoxy(13,30);
                            printf(" Digite a quantidade de %s que deseja:",doceL);
                            scanf("%d",&qt);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=29; linha<=31; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TdoceL) ^ (qtcarrinho==7 && tamanhoS[1]!=TdoceL) ^ (qtcarrinho==7 && tamanhoS[2]!=TdoceL) ^ (qtcarrinho==7 && tamanhoS[3]!=TdoceL) ^ (qtcarrinho==7 && tamanhoS[4]!=TdoceL) ^ (qtcarrinho==7 && tamanhoS[5]!=TdoceL) ^ (qtcarrinho==7 && tamanhoS[6]!=TdoceL))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=15; linha<=32; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.02);
                                if (tamanhoS[0]==0 || tamanhoS[0]==TdoceL)
                                {
                                    if(tamanhoS[0]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[0]=TdoceL;
                                    strcpy(carrinho1, doceL);
                                    qtc[0]+=qt;
                                    precocarrinho[0]+=(qt*0.02);
                                }
                                else if (tamanhoS[1]==0 || tamanhoS[1]==TdoceL)
                                {
                                    if(tamanhoS[1]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[1]=TdoceL;
                                    strcpy(carrinho2, doceL);
                                    qtc[1]+=qt;
                                    precocarrinho[1]+=(qt*0.02);
                                }

                                else if (tamanhoS[2]==0 || tamanhoS[2]==TdoceL)
                                {
                                    if(tamanhoS[2]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[2]=TdoceL;
                                    strcpy(carrinho3, doceL);
                                    qtc[2]+=qt;
                                    precocarrinho[2]+=(qt*0.02);
                                }

                                else if (tamanhoS[3]==0 || tamanhoS[3]==TdoceL)
                                {
                                    if(tamanhoS[3]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[3]=TdoceL;
                                    strcpy(carrinho4, doceL);
                                    qtc[3]+=qt;
                                    precocarrinho[3]+=(qt*0.02);
                                }

                                else if (tamanhoS[4]==0 || tamanhoS[4]==TdoceL)
                                {
                                    if(tamanhoS[4]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[4]=TdoceL;
                                    strcpy(carrinho5, doceL);
                                    qtc[4]+=qt;
                                    precocarrinho[4]+=(qt*0.02);
                                }

                                else if (tamanhoS[5]==0 || tamanhoS[5]==TdoceL)
                                {
                                    if(tamanhoS[5]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[5]=TdoceL;
                                    strcpy(carrinho6, doceL);
                                    qtc[5]+=qt;
                                    precocarrinho[5]+=(qt*0.02);
                                }

                                else if (tamanhoS[6]==0 || tamanhoS[6]==TdoceL)
                                {
                                    if(tamanhoS[6]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[6]=TdoceL;
                                    strcpy(carrinho7, doceL);
                                    qtc[6]+=qt;
                                    precocarrinho[6]+=(qt*0.02);
                                }

                                for(int coluna=27; coluna<=55; coluna++) //cobre o total anterior para atualizar o proximo!
                                {
                                    for(int linha=33; linha<=33; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(27,33);
                                printf("Carrinho(%d)",qtcarrinho);
                                gotoxy(42,33);
                                printf("Total: R$%.2f",total);
                                gotoxy(13,29);
                            }
                        }
                        while(qt<0);
                    }
                    else if (e[1]==2)  // caso escolha pao de forma
                    {
                        do //repetição para assegurar de que o usuario não digite um valor menor que 0
                        {
                            gotoxy(13,30);
                            printf(" Digite a quantidade de %s que deseja:",balaL);
                            scanf("%d",&qt);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=29; linha<=31; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TbalaL) ^ (qtcarrinho==7 && tamanhoS[1]!=TbalaL) ^ (qtcarrinho==7 && tamanhoS[2]!=TbalaL) ^ (qtcarrinho==7 && tamanhoS[3]!=TbalaL) ^ (qtcarrinho==7 && tamanhoS[4]!=TbalaL) ^ (qtcarrinho==7 && tamanhoS[5]!=TbalaL) ^ (qtcarrinho==7 && tamanhoS[6]!=TbalaL))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=15; linha<=32; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.25);
                                if (tamanhoS[0]==0 || tamanhoS[0]==TbalaL)
                                {
                                    if(tamanhoS[0]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[0]=TbalaL;
                                    strcpy(carrinho1, balaL);
                                    qtc[0]+=qt;
                                    precocarrinho[0]+=(qt*0.25);
                                }
                                else if (tamanhoS[1]==0 || tamanhoS[1]==TbalaL)
                                {
                                    if(tamanhoS[1]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[1]=TbalaL;
                                    strcpy(carrinho2, balaL);
                                    qtc[1]+=qt;
                                    precocarrinho[1]+=(qt*0.25);
                                }

                                else if (tamanhoS[2]==0 || tamanhoS[2]==TbalaL)
                                {
                                    if(tamanhoS[2]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[2]=TbalaL;
                                    strcpy(carrinho3, balaL);
                                    qtc[2]+=qt;
                                    precocarrinho[2]+=(qt*0.25);
                                }

                                else if (tamanhoS[3]==0 || tamanhoS[3]==TbalaL)
                                {
                                    if(tamanhoS[3]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[3]=TbalaL;
                                    strcpy(carrinho4, balaL);
                                    qtc[3]+=qt;
                                    precocarrinho[3]+=(qt*0.25);
                                }

                                else if (tamanhoS[4]==0 || tamanhoS[4]==TbalaL)
                                {
                                    if(tamanhoS[4]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[4]=TbalaL;
                                    strcpy(carrinho5, balaL);
                                    qtc[4]+=qt;
                                    precocarrinho[4]+=(qt*0.25);
                                }

                                else if (tamanhoS[5]==0 || tamanhoS[5]==TbalaL)
                                {
                                    if(tamanhoS[5]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[5]=TbalaL;
                                    strcpy(carrinho6, balaL);
                                    qtc[5]+=qt;
                                    precocarrinho[5]+=(qt*0.25);
                                }

                                else if (tamanhoS[6]==0 || tamanhoS[6]==TbalaL)
                                {
                                    if(tamanhoS[6]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[6]=TbalaL;
                                    strcpy(carrinho7, balaL);
                                    qtc[6]+=qt;
                                    precocarrinho[6]+=(qt*0.25);
                                }

                                for(int coluna=27; coluna<=55; coluna++) //cobre o total anterior para atualizar o proximo!
                                {
                                    for(int linha=33; linha<=33; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(27,33);
                                printf("Carrinho(%d)",qtcarrinho);
                                gotoxy(42,33);
                                printf("Total: R$%.2f",total);
                                gotoxy(13,29);
                            }

                        }
                        while(qt<0);
                    }
                    else if (e[1]==3)  // caso escolha pao de forma
                    {
                        do //repetição para assegurar de que o usuario não digite um valor menor que 0
                        {
                            gotoxy(13,30);
                            printf(" Digite a quantidade de %s que deseja:",cocadaB);
                            scanf("%d",&qt);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=29; linha<=31; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TcocadaB) ^ (qtcarrinho==7 && tamanhoS[1]!=TcocadaB) ^ (qtcarrinho==7 && tamanhoS[2]!=TcocadaB) ^ (qtcarrinho==7 && tamanhoS[3]!=TcocadaB) ^ (qtcarrinho==7 && tamanhoS[4]!=TcocadaB) ^ (qtcarrinho==7 && tamanhoS[5]!=TcocadaB) ^ (qtcarrinho==7 && tamanhoS[6]!=TcocadaB))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=15; linha<=32; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*1);
                                if (tamanhoS[0]==0 || tamanhoS[0]==TcocadaB)
                                {
                                    if(tamanhoS[0]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[0]=TcocadaB;
                                    strcpy(carrinho1, cocadaB);
                                    qtc[0]+=qt;
                                    precocarrinho[0]+=(qt*1);
                                }
                                else if (tamanhoS[1]==0 || tamanhoS[1]==TcocadaB)
                                {
                                    if(tamanhoS[1]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[1]=TcocadaB;
                                    strcpy(carrinho2, cocadaB);
                                    qtc[1]+=qt;
                                    precocarrinho[1]+=(qt*1);
                                }

                                else if (tamanhoS[2]==0 || tamanhoS[2]==TcocadaB)
                                {
                                    if(tamanhoS[2]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[2]=TcocadaB;
                                    strcpy(carrinho3, cocadaB);
                                    qtc[2]+=qt;
                                    precocarrinho[2]+=(qt*1);
                                }

                                else if (tamanhoS[3]==0 || tamanhoS[3]==TcocadaB)
                                {
                                    if(tamanhoS[3]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[3]=TcocadaB;
                                    strcpy(carrinho4, cocadaB);
                                    qtc[3]+=qt;
                                    precocarrinho[3]+=(qt*1);
                                }

                                else if (tamanhoS[4]==0 || tamanhoS[4]==TcocadaB)
                                {
                                    if(tamanhoS[4]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[4]=TcocadaB;
                                    strcpy(carrinho5, cocadaB);
                                    qtc[4]+=qt;
                                    precocarrinho[4]+=(qt*1);
                                }

                                else if (tamanhoS[5]==0 || tamanhoS[5]==TcocadaB)
                                {
                                    if(tamanhoS[5]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[5]=TcocadaB;
                                    strcpy(carrinho6, cocadaB);
                                    qtc[5]+=qt;
                                    precocarrinho[5]+=(qt*1);
                                }

                                else if (tamanhoS[6]==0 || tamanhoS[6]==TcocadaB)
                                {
                                    if(tamanhoS[6]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[6]=TcocadaB;
                                    strcpy(carrinho7, cocadaB);
                                    qtc[6]+=qt;
                                    precocarrinho[6]+=(qt*1);
                                }

                                for(int coluna=27; coluna<=42; coluna++) //cobre o total anterior para atualizar o proximo!
                                {
                                    for(int linha=33; linha<=33; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(27,33);
                                printf("Carrinho(%d)",qtcarrinho);
                                gotoxy(42,33);
                                printf("Total: R$%.2f",total);
                                gotoxy(13,29);
                            }

                        }
                        while(qt<0);
                    }
                    else if (e[1]==4)  // caso escolha pao de forma
                    {
                        do //repetição para assegurar de que o usuario não digite um valor menor que 0
                        {
                            gotoxy(13,30);
                            printf(" Digite a quantidade de %s que deseja:",cocadaC);
                            scanf("%d",&qt);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=29; linha<=31; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TcocadaC) ^ (qtcarrinho==7 && tamanhoS[1]!=TcocadaC) ^ (qtcarrinho==7 && tamanhoS[2]!=TcocadaC) ^ (qtcarrinho==7 && tamanhoS[3]!=TcocadaC) ^ (qtcarrinho==7 && tamanhoS[4]!=TcocadaC) ^ (qtcarrinho==7 && tamanhoS[5]!=TcocadaC) ^ (qtcarrinho==7 && tamanhoS[6]!=TcocadaC))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=15; linha<=32; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.8);
                                if (tamanhoS[0]==0 || tamanhoS[0]==TcocadaC)
                                {
                                    if(tamanhoS[0]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[0]=TcocadaC;
                                    strcpy(carrinho1, cocadaC);
                                    qtc[0]+=qt;
                                    precocarrinho[0]+=(qt*0.8);
                                }
                                else if (tamanhoS[1]==0 || tamanhoS[1]==TcocadaC)
                                {
                                    if(tamanhoS[1]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[1]=TcocadaC;
                                    strcpy(carrinho2, cocadaC);
                                    qtc[1]+=qt;
                                    precocarrinho[1]+=(qt*0.8);
                                }

                                else if (tamanhoS[2]==0 || tamanhoS[2]==TcocadaC)
                                {
                                    if(tamanhoS[2]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[2]=TcocadaC;
                                    strcpy(carrinho3, cocadaC);
                                    qtc[2]+=qt;
                                    precocarrinho[2]+=(qt*0.8);
                                }

                                else if (tamanhoS[3]==0 || tamanhoS[3]==TcocadaC)
                                {
                                    if(tamanhoS[3]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[3]=TcocadaC;
                                    strcpy(carrinho4, cocadaC);
                                    qtc[3]+=qt;
                                    precocarrinho[3]+=(qt*0.8);
                                }

                                else if (tamanhoS[4]==0 || tamanhoS[4]==TcocadaC)
                                {
                                    if(tamanhoS[4]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[4]=TcocadaC;
                                    strcpy(carrinho5, cocadaC);
                                    qtc[4]+=qt;
                                    precocarrinho[4]+=(qt*0.8);
                                }

                                else if (tamanhoS[5]==0 || tamanhoS[5]==TcocadaC)
                                {
                                    if(tamanhoS[5]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[5]=TcocadaC;
                                    strcpy(carrinho6, cocadaC);
                                    qtc[5]+=qt;
                                    precocarrinho[5]+=(qt*0.8);
                                }

                                else if (tamanhoS[6]==0 || tamanhoS[6]==TcocadaC)
                                {
                                    if(tamanhoS[6]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[6]=TcocadaC;
                                    strcpy(carrinho7, cocadaC);
                                    qtc[6]+=qt;
                                    precocarrinho[6]+=(qt*0.8);
                                }

                                for(int coluna=27; coluna<=55; coluna++) //cobre o total anterior para atualizar o proximo!
                                {
                                    for(int linha=33; linha<=33; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(27,33);
                                printf("Carrinho(%d)",qtcarrinho);
                                gotoxy(42,33);
                                printf("Total: R$%.2f",total);
                                gotoxy(13,29);
                            }

                        }
                        while(qt<0);
                    }
                    else if (e[1]==5)  // caso escolha pao de forma
                    {
                        do //repetição para assegurar de que o usuario não digite um valor menor que 0
                        {
                            gotoxy(13,30);
                            printf(" Digite a quantidade de %s",biscoitoPC);
                            gotoxy(13,31);
                            printf(" que deseja: ");
                            scanf("%d",&qt);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=29; linha<=31; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TbiscoitoPC) ^ (qtcarrinho==7 && tamanhoS[1]!=TbiscoitoPC) ^ (qtcarrinho==7 && tamanhoS[2]!=TbiscoitoPC) ^ (qtcarrinho==7 && tamanhoS[3]!=TbiscoitoPC) ^ (qtcarrinho==7 && tamanhoS[4]!=TbiscoitoPC) ^ (qtcarrinho==7 && tamanhoS[5]!=TbiscoitoPC) ^ (qtcarrinho==7 && tamanhoS[6]!=TbiscoitoPC))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=15; linha<=32; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.4);
                                if (tamanhoS[0]==0 || tamanhoS[0]==TbiscoitoPC)
                                {
                                    if(tamanhoS[0]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[0]=TbiscoitoPC;
                                    strcpy(carrinho1, biscoitoPC);
                                    qtc[0]+=qt;
                                    precocarrinho[0]+=(qt*0.4);
                                }
                                else if (tamanhoS[1]==0 || tamanhoS[1]==TbiscoitoPC)
                                {
                                    if(tamanhoS[1]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[1]=TbiscoitoPC;
                                    strcpy(carrinho2, biscoitoPC);
                                    qtc[1]+=qt;
                                    precocarrinho[1]+=(qt*0.4);
                                }

                                else if (tamanhoS[2]==0 || tamanhoS[2]==TbiscoitoPC)
                                {
                                    if(tamanhoS[2]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[2]=TbiscoitoPC;
                                    strcpy(carrinho3, biscoitoPC);
                                    qtc[2]+=qt;
                                    precocarrinho[2]+=(qt*0.4);
                                }

                                else if (tamanhoS[3]==0 || tamanhoS[3]==TbiscoitoPC)
                                {
                                    if(tamanhoS[3]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[3]=TbiscoitoPC;
                                    strcpy(carrinho4, biscoitoPC);
                                    qtc[3]+=qt;
                                    precocarrinho[3]+=(qt*0.4);
                                }

                                else if (tamanhoS[4]==0 || tamanhoS[4]==TbiscoitoPC)
                                {
                                    if(tamanhoS[4]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[4]=TbiscoitoPC;
                                    strcpy(carrinho5, biscoitoPC);
                                    qtc[4]+=qt;
                                    precocarrinho[4]+=(qt*0.4);
                                }

                                else if (tamanhoS[5]==0 || tamanhoS[5]==TbiscoitoPC)
                                {
                                    if(tamanhoS[5]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[5]=TbiscoitoPC;
                                    strcpy(carrinho6, biscoitoPC);
                                    qtc[5]+=qt;
                                    precocarrinho[5]+=(qt*0.4);
                                }

                                else if (tamanhoS[6]==0 || tamanhoS[6]==TbiscoitoPC)
                                {
                                    if(tamanhoS[6]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[6]=TbiscoitoPC;
                                    strcpy(carrinho7, biscoitoPC);
                                    qtc[6]+=qt;
                                    precocarrinho[6]+=(qt*0.4);
                                }

                                for(int coluna=27; coluna<=55; coluna++) //cobre o total anterior para atualizar o proximo!
                                {
                                    for(int linha=33; linha<=33; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(27,33);
                                printf("Carrinho(%d)",qtcarrinho);
                                gotoxy(42,33);
                                printf("Total: R$%.2f",total);
                                gotoxy(13,29);
                            }
                        }
                        while(qt<0);
                    }
                    else if (e[1]==6)  // caso escolha pao de forma
                    {
                        do //repetição para assegurar de que o usuario não digite um valor menor que 0
                        {
                            gotoxy(13,30);
                            printf(" Digite a quantidade de %s",suspiro);
                            gotoxy(13,31);
                            printf(" que deseja: ");
                            scanf("%d",&qt);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=29; linha<=31; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=Tsuspiro) ^ (qtcarrinho==7 && tamanhoS[1]!=Tsuspiro) ^ (qtcarrinho==7 && tamanhoS[2]!=Tsuspiro) ^ (qtcarrinho==7 && tamanhoS[3]!=Tsuspiro) ^ (qtcarrinho==7 && tamanhoS[4]!=Tsuspiro) ^ (qtcarrinho==7 && tamanhoS[5]!=Tsuspiro) ^ (qtcarrinho==7 && tamanhoS[6]!=Tsuspiro))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                for(int coluna=13; coluna<=67; coluna++) // limpa a linha de digitar valor caso um numero invalido
                                {
                                    for(int linha=15; linha<=32; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.7);
                                if (tamanhoS[0]==0 || tamanhoS[0]==Tsuspiro)
                                {
                                    if(tamanhoS[0]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[0]=Tsuspiro;
                                    strcpy(carrinho1, suspiro);
                                    qtc[0]+=qt;
                                    precocarrinho[0]+=(qt*0.7);
                                }
                                else if (tamanhoS[1]==0 || tamanhoS[1]==Tsuspiro)
                                {
                                    if(tamanhoS[1]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[1]=Tsuspiro;
                                    strcpy(carrinho2, suspiro);
                                    qtc[1]+=qt;
                                    precocarrinho[1]+=(qt*0.7);
                                }

                                else if (tamanhoS[2]==0 || tamanhoS[2]==Tsuspiro)
                                {
                                    if(tamanhoS[2]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[2]=Tsuspiro;
                                    strcpy(carrinho3, suspiro);
                                    qtc[2]+=qt;
                                    precocarrinho[2]+=(qt*0.7);
                                }

                                else if (tamanhoS[3]==0 || tamanhoS[3]==Tsuspiro)
                                {
                                    if(tamanhoS[3]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[3]=Tsuspiro;
                                    strcpy(carrinho4, suspiro);
                                    qtc[3]+=qt;
                                    precocarrinho[3]+=(qt*0.7);
                                }

                                else if (tamanhoS[4]==0 || tamanhoS[4]==Tsuspiro)
                                {
                                    if(tamanhoS[4]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[4]=Tsuspiro;
                                    strcpy(carrinho5, suspiro);
                                    qtc[4]+=qt;
                                    precocarrinho[4]+=(qt*0.7);
                                }

                                else if (tamanhoS[5]==0 || tamanhoS[5]==Tsuspiro)
                                {
                                    if(tamanhoS[5]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[5]=Tsuspiro;
                                    strcpy(carrinho6, suspiro);
                                    qtc[5]+=qt;
                                    precocarrinho[5]+=(qt*0.7);
                                }

                                else if (tamanhoS[6]==0 || tamanhoS[6]==Tsuspiro)
                                {
                                    if(tamanhoS[6]==0)
                                    {
                                        qtcarrinho++;
                                    }
                                    tamanhoS[6]=Tsuspiro;
                                    strcpy(carrinho7, suspiro);
                                    qtc[6]+=qt;
                                    precocarrinho[6]+=(qt*0.7);
                                }

                                for(int coluna=27; coluna<=55; coluna++) //cobre o total anterior para atualizar o proximo!
                                {
                                    for(int linha=33; linha<=33; linha++)
                                    {
                                        gotoxy(coluna,linha);
                                        printf(" ");
                                    }
                                    printf(" ");
                                }
                                gotoxy(27,33);
                                printf("Carrinho(%d)",qtcarrinho);
                                gotoxy(42,33);
                                printf("Total: R$%.2f",total);
                                gotoxy(13,29);
                            }
                        }
                        while(qt<0);
                    }
                    else if (e[1]==9) {}
                    else
                    {
                        gotoxy(13,31);
                        printf(" Item inválido! Tente escolher outro.");
                        Sleep(1000);
                    }
                    for(int linha=15; linha<=32; linha++) //limpar a tela depois da escolha
                    {
                        for(int coluna=13; coluna<=67; coluna++)
                        {
                            gotoxy(coluna,linha);
                            printf(" ");
                        }
                        printf(" ");
                    }
                    gotoxy(13,29);
                }
                while(e[1]!=9);
                break;

            case 6:
                do
                {
                    gotoxy(13,14);
                    printf(" PRODUTO                             QT    PREÇO");
                    gotoxy(49,16);
                    printf(" %d",qtc[0]);
                    gotoxy(55,16);
                    printf(" %.2f",precocarrinho[0]);
                    gotoxy(13,16);
                    printf(" 1- %s",carrinho1);

                    gotoxy(49,18);
                    printf(" %d",qtc[1]);
                    gotoxy(55,18);
                    printf(" %.2f",precocarrinho[1]);
                    gotoxy(13,18);
                    printf(" 2- %s",carrinho2);

                    gotoxy(49,20);
                    printf(" %d",qtc[2]);
                    gotoxy(55,20);
                    printf(" %.2f",precocarrinho[2]);
                    gotoxy(13,20);
                    printf(" 3- %s",carrinho3);

                    gotoxy(49,22);
                    printf(" %d",qtc[3]);
                    gotoxy(55,22);
                    printf(" %.2f",precocarrinho[3]);
                    gotoxy(13,22);
                    printf(" 4- %s",carrinho4);

                    gotoxy(49,24);
                    printf(" %d",qtc[4]);
                    gotoxy(55,24);
                    printf(" %.2f",precocarrinho[4]);
                    gotoxy(13,24);
                    printf(" 5- %s",carrinho5);

                    gotoxy(49,26);
                    printf(" %d",qtc[5]);
                    gotoxy(55,26);
                    printf(" %.2f",precocarrinho[5]);
                    gotoxy(13,26);
                    printf(" 6- %s",carrinho6);

                    gotoxy(49,28);
                    printf(" %d",qtc[6]);
                    gotoxy(55,28);
                    printf(" %.2f",precocarrinho[6]);
                    gotoxy(13,28);
                    printf(" 7- %s",carrinho7);

                    gotoxy(13,30);
                    printf(" 1 - Remover Produto");
                    gotoxy(46,30);
                    printf("2 - Fechar Compra!");
                    gotoxy(13,31);
                    printf(" 9 - Voltar");
                    gotoxy(39,30);
                    scanf("%d",&e[1]);
                    if (e[1]==1)
                    {
                        do
                        {
                            for(int linha=30; linha<=31; linha++)
                            {
                                for(int coluna=13; coluna<=67; coluna++)
                                {
                                    gotoxy(coluna,linha);
                                    printf(" ");
                                }
                                printf(" ");
                            }
                            gotoxy(13,30);
                            printf("Qual produto deseja remover? ");
                            gotoxy(13,31);
                            printf("*SERÁ REMOVIDO TODA QUANTIDADE");
                            gotoxy(13,32);
                            printf("9 - Cancelar");
                            gotoxy(42,30);
                            scanf("%d",&qt);
                            switch(qt)
                            {
                            case 1:
                                if (tamanhoS[0]!=0)
                                {
                                    total-=precocarrinho[0];
                                    tamanhoS[0]=0;
                                    qtcarrinho--;
                                    qtc[0]=0;
                                    strcpy(carrinho1, nada);
                                    precocarrinho[0]=0;
                                    for (int linha=16; linha<=17; linha++)
                                    {
                                        for(int coluna=13; coluna<=60; coluna++)
                                        {
                                            gotoxy(coluna,linha);
                                            printf(" ");
                                        }
                                        printf(" ");
                                    }
                                    gotoxy(49,16);
                                    printf(" %d",qtc[0]);
                                    gotoxy(55,16);
                                    printf(" %.2f",precocarrinho[0]);
                                    gotoxy(13,16);
                                    printf(" 1- %s",carrinho1);
                                    gotoxy(27,33);
                                    printf("Carrinho(%d)",qtcarrinho);
                                    gotoxy(42,33);
                                    printf("Total: R$%.2f",total);
                                    gotoxy(13,29);
                                }
                                else
                                {
                                    for(int linha=30; linha<=32; linha++)
                                    {
                                        for(int coluna=13; coluna<=67; coluna++)
                                        {
                                            gotoxy(coluna,linha);
                                            printf(" ");
                                        }
                                        printf(" ");
                                    }
                                    gotoxy(13,30);
                                    printf(" Não há produtos!");
                                    Sleep(1000);
                                }
                                break;
                            case 2:
                                if (tamanhoS[1]!=0)
                                {
                                    total-=precocarrinho[1];
                                    tamanhoS[1]=0;
                                    qtcarrinho--;
                                    qtc[1]=0;
                                    strcpy(carrinho2, nada);
                                    precocarrinho[1]=0;
                                    for (int linha=18; linha<=19; linha++)
                                    {
                                        for(int coluna=13; coluna<=60; coluna++)
                                        {
                                            gotoxy(coluna,linha);
                                            printf(" ");
                                        }
                                        printf(" ");
                                    }
                                    gotoxy(49,18);
                                    printf(" %d",qtc[1]);
                                    gotoxy(55,18);
                                    printf(" %.2f",precocarrinho[1]);
                                    gotoxy(13,18);
                                    printf(" 2- %s",carrinho2);
                                    gotoxy(27,33);
                                    printf("Carrinho(%d)",qtcarrinho);
                                    gotoxy(42,33);
                                    printf("Total: R$%.2f",total);
                                    gotoxy(13,29);
                                }
                                else
                                {
                                    for(int linha=30; linha<=32; linha++)
                                    {
                                        for(int coluna=13; coluna<=67; coluna++)
                                        {
                                            gotoxy(coluna,linha);
                                            printf(" ");
                                        }
                                        printf(" ");
                                    }
                                    gotoxy(13,30);
                                    printf(" Não há produtos!");
                                    Sleep(1000);
                                }
                                break;
                            case 3:
                                if (tamanhoS[2]!=0)
                                {
                                    total-=precocarrinho[2];
                                    tamanhoS[2]=0;
                                    qtcarrinho--;
                                    qtc[2]=0;
                                    strcpy(carrinho3, nada);
                                    precocarrinho[2]=0;
                                    for (int linha=19; linha<=20; linha++)
                                    {
                                        for(int coluna=13; coluna<=60; coluna++)
                                        {
                                            gotoxy(coluna,linha);
                                            printf(" ");
                                        }
                                        printf(" ");
                                    }
                                    gotoxy(49,20);
                                    printf(" %d",qtc[2]);
                                    gotoxy(55,20);
                                    printf(" %.2f",precocarrinho[2]);
                                    gotoxy(13,20);
                                    printf(" 3- %s",carrinho3);
                                    gotoxy(27,33);
                                    printf("Carrinho(%d)",qtcarrinho);
                                    gotoxy(42,33);
                                    printf("Total: R$%.2f",total);
                                    gotoxy(13,29);
                                }
                                else
                                {
                                    for(int linha=30; linha<=32; linha++)
                                    {
                                        for(int coluna=13; coluna<=67; coluna++)
                                        {
                                            gotoxy(coluna,linha);
                                            printf(" ");
                                        }
                                        printf(" ");
                                    }
                                    gotoxy(13,30);
                                    printf(" Não há produtos!");
                                    Sleep(1000);
                                }
                                break;
                            case 4:
                                if (tamanhoS[3]!=0)
                                {
                                    total-=precocarrinho[3];
                                    tamanhoS[3]=0;
                                    qtcarrinho--;
                                    qtc[3]=0;
                                    strcpy(carrinho4, nada);
                                    precocarrinho[3]=0;
                                    for (int linha=21; linha<=22; linha++)
                                    {
                                        for(int coluna=13; coluna<=60; coluna++)
                                        {
                                            gotoxy(coluna,linha);
                                            printf(" ");
                                        }
                                        printf(" ");
                                    }
                                    gotoxy(49,22);
                                    printf(" %d",qtc[3]);
                                    gotoxy(55,22);
                                    printf(" %.2f",precocarrinho[3]);
                                    gotoxy(13,22);
                                    printf(" 4- %s",carrinho4);
                                    gotoxy(27,33);
                                    printf("Carrinho(%d)",qtcarrinho);
                                    gotoxy(42,33);
                                    printf("Total: R$%.2f",total);
                                    gotoxy(13,29);
                                }
                                else
                                {
                                    for(int linha=30; linha<=32; linha++)
                                    {
                                        for(int coluna=13; coluna<=67; coluna++)
                                        {
                                            gotoxy(coluna,linha);
                                            printf(" ");
                                        }
                                        printf(" ");
                                    }
                                    gotoxy(13,30);
                                    printf("Não há produtos!");
                                    Sleep(1000);
                                }
                                break;
                            case 5:
                                if (tamanhoS[4]!=0)
                                {
                                    total-=precocarrinho[4];
                                    tamanhoS[4]=0;
                                    qtcarrinho--;
                                    qtc[4]=0;
                                    strcpy(carrinho5, nada);
                                    precocarrinho[4]=0;
                                    for (int linha=23; linha<=24; linha++)
                                    {
                                        for(int coluna=13; coluna<=60; coluna++)
                                        {
                                            gotoxy(coluna,linha);
                                            printf(" ");
                                        }
                                        printf(" ");
                                    }
                                    gotoxy(49,24);
                                    printf(" %d",qtc[4]);
                                    gotoxy(55,24);
                                    printf(" %.2f",precocarrinho[4]);
                                    gotoxy(13,24);
                                    printf(" 5- %s",carrinho5);
                                    gotoxy(27,33);
                                    printf("Carrinho(%d)",qtcarrinho);
                                    gotoxy(42,33);
                                    printf("Total: R$%.2f",total);
                                    gotoxy(13,29);
                                }
                                else
                                {
                                    for(int linha=30; linha<=32; linha++)
                                    {
                                        for(int coluna=13; coluna<=67; coluna++)
                                        {
                                            gotoxy(coluna,linha);
                                            printf(" ");
                                        }
                                        printf(" ");
                                    }
                                    gotoxy(13,30);
                                    printf(" Não há produtos!");
                                    Sleep(1000);
                                }
                                break;
                            case 6:
                                if (tamanhoS[5]!=0)
                                {
                                    total-=precocarrinho[5];
                                    tamanhoS[5]=0;
                                    qtcarrinho--;
                                    qtc[5]=0;
                                    strcpy(carrinho6, nada);
                                    precocarrinho[5]=0;
                                    for (int linha=25; linha<=26; linha++)
                                    {
                                        for(int coluna=13; coluna<=60; coluna++)
                                        {
                                            gotoxy(coluna,linha);
                                            printf(" ");
                                        }
                                        printf(" ");
                                    }
                                    gotoxy(49,26);
                                    printf(" %d",qtc[5]);
                                    gotoxy(55,26);
                                    printf(" %.2f",precocarrinho[5]);
                                    gotoxy(13,26);
                                    printf(" 6- %s",carrinho6);
                                    gotoxy(27,33);
                                    printf("Carrinho(%d)",qtcarrinho);
                                    gotoxy(42,33);
                                    printf("Total: R$%.2f",total);
                                    gotoxy(13,29);
                                }
                                else
                                {
                                    for(int linha=30; linha<=32; linha++)
                                    {
                                        for(int coluna=13; coluna<=67; coluna++)
                                        {
                                            gotoxy(coluna,linha);
                                            printf(" ");
                                        }
                                        printf(" ");
                                    }
                                    gotoxy(13,30);
                                    printf(" Não há produtos!");
                                    Sleep(1000);
                                }
                                break;
                            case 7:
                                if (tamanhoS[6]!=0)
                                {
                                    total-=precocarrinho[6];
                                    tamanhoS[6]=0;
                                    qtcarrinho--;
                                    qtc[6]=0;
                                    strcpy(carrinho7, nada);
                                    precocarrinho[6]=0;
                                    for (int linha=27; linha<=28; linha++)
                                    {
                                        for(int coluna=13; coluna<=60; coluna++)
                                        {
                                            gotoxy(coluna,linha);
                                            printf(" ");
                                        }
                                        printf(" ");
                                    }
                                    gotoxy(49,28);
                                    printf(" %d",qtc[6]);
                                    gotoxy(55,28);
                                    printf(" %.2f",precocarrinho[6]);
                                    gotoxy(13,28);
                                    printf(" 7- %s",carrinho7);
                                    gotoxy(27,33);
                                    printf("Carrinho(%d)",qtcarrinho);
                                    gotoxy(42,33);
                                    printf("Total: R$%.2f",total);
                                    gotoxy(13,29);
                                }
                                else
                                {
                                    for(int linha=30; linha<=32; linha++)
                                    {
                                        for(int coluna=13; coluna<=67; coluna++)
                                        {
                                            gotoxy(coluna,linha);
                                            printf(" ");
                                        }
                                        printf(" ");
                                    }
                                    gotoxy(13,30);
                                    printf(" Não há produtos!");
                                    Sleep(1000);
                                }
                            default:
                                break;
                            }
                        }
                        while(qt!=9);
                    }

                    else if (e[1]==2)
                    {
                        textbackground(BLUE);
                        clrscr();
                        textbackground(WHITE);
                        textcolor(BLUE);
                        gotoxy(36,15);
                        printf(" McRoscas ");
                        textbackground(BLUE);
                        textcolor(WHITE);
                        gotoxy(5,17);
                        printf("Um erro fatal de execução ocorreu em McRoscas.exe devido a algum comando");
                        gotoxy(5,18);
                        printf("inválido ou uma falha no sistema. Este aplicativo será encerrado.");
                        gotoxy(5,20);
                        printf("* Aperte qualquer tecla para finalizar este programa.");
                        gotoxy(5,22);
                        printf("* Você perdera quaisquer dados salvos neste aplicativo.\n\n");
                        gotoxy(5,22);
                        textcolor(BLUE);
                        return 404;
                    }
                    else if (e[1]==9) {}
                    else
                    {
                        gotoxy(13,31);
                        printf(" Valor Inválido!");
                        Sleep(1000);
                    }
                    for(int linha=14; linha<=32; linha++) //limpar a tela depois da escolha
                    {
                        for(int coluna=13; coluna<=67; coluna++)
                        {
                            gotoxy(coluna,linha);
                            printf(" ");
                        }
                        printf(" ");
                    }
                    gotoxy(13,20);
                }
                while(e[1]!=9);

            default:
                break;
            }
        }
        while(e[0]!=9);
    }

//Tela de saída//
    textbackground(DARKGRAY);
    clrscr();
    gotoxy(14,3);
    printf(" _   _  ______   _____       __ ______   _____   _____\n");
    gotoxy(14,4);
    printf("| | | | |  ___| /  ___|     / / |  _  \\ /  ___| |_   _|\n");
    gotoxy(14,5);
    printf("| | | | | |_    \\ `--.     / /  | | | | \\ `--.    | |\n");
    gotoxy(14,6);
    printf("| | | | |  _|    `--. \\   / /   | | | |  `--. \\   | |\n");
    gotoxy(14,7);
    printf("| |_| | | |     /\\__/ /  / /    | |/ /  /\\__/ /  _| |_\n");
    gotoxy(14,8);
    printf(" \\___/  \\_|     \\____/  /_/     |___/   \\____/   \\___/\n");
    for(int colunas=14; colunas<=68; colunas++)
    {
        gotoxy(colunas,9);
        printf("%c",278);
        Sleep(15);
    }
    textbackground(BLACK);
    textcolor(WHITE);
    for(int linhas=11; linhas<=34; linhas++)
    {
        gotoxy(14,linhas);
        printf("                                                       \n");
    }
    gotoxy(18,13);
    printf("Toda Lógica de Designer(conio2)");
    gotoxy(18,14);
    printf("Lauro Santana");
    gotoxy(18,17);
    printf("Toda Lógica do Código-Fonte e Algoritmo");
    gotoxy(18,18);
    printf("Carlos Daniel");
    gotoxy(18,21);
    printf("Escrita do Código-Fonte");
    gotoxy(18,22);
    printf("Carlos Daniel e Douglas Cunha");
    gotoxy(18,25);
    printf("Documentação");
    gotoxy(18,26);
    printf("Carine dos Santos, Mickael Barreto & Douglas Cunha");
    gotoxy(18,29);
    printf("Agradescimento Especial");
    gotoxy(18,31);
    printf("Professor Dr.");
    gotoxy(18,32);
    printf("Raphael Pereira de Oliveira\n\n\n\n\n\n\n\n");
    textcolor(DARKGRAY);
    textbackground(DARKGRAY);
    gotoxy(18,34);
    getch();
    return 0;
}

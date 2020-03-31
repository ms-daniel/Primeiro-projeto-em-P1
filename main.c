#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>
#include <locale.h>
#include <windows.h>
#include <time.h>

#define MLINHAS 40
#define MCOLUNAS 80
void CHAMATEMA(){
    int tema;
    PINTATUDO();
    textcolor(WHITE);
    gotoxy(20,15);printf("O McRoscas agora possui um sístema de temas!");
    gotoxy(32,18);printf("Escolha um dos temas!");
    textcolor(YELLOW);gotoxy(21,22);printf("Verão <1>");

    textcolor(YELLOW);gotoxy(21,24);printf("Out");
    textcolor(LIGHTRED);gotoxy(24,24);printf("ono <2>");

    textcolor(LIGHTBLUE);gotoxy(21,26);printf("In");
    textcolor(LIGHTCYAN);gotoxy(23,26);printf("ver");
    textcolor(WHITE);gotoxy(26,26);printf("no <3>");

    textcolor(LIGHTGREEN);gotoxy(21,28);printf("Pri");
    textcolor(YELLOW);gotoxy(24,28);printf("ma");
    textcolor(LIGHTRED);gotoxy(26,28);printf("ve");
    textcolor(LIGHTMAGENTA);gotoxy(28,28);printf("ra <4>");

    textcolor(LIGHTRED);gotoxy(21,30);printf("Clás");
    textcolor(WHITE);gotoxy(25,30);printf("sico <5>");

    textcolor(WHITE);gotoxy(40,26);printf("Qual tema deseja? ");
    scanf("%d",&tema);
    TEMAS(tema);}
void nome(void){
gotoxy(13,3);
    printf(".   ,         ,-.     ,-.     ,-.     ,-.    ,.     ,-.");
    gotoxy(13,4);
    printf("|\\ /|         |  )   /   \\   (   `   /      /  \\   (   `");
    gotoxy(13,5);
    printf("| V |   ,-.   |-<    |   |    `-.    |      |--|    `-. ");
    gotoxy(13,6);
    printf("|   |   |     |  \\   \\   /   .   )   \\      |  |   .   )");
    gotoxy(13,7);
    printf("'   '   `-'   '  '    `-'     `-'     `-'   '  '    `-'");}
void TEMAS(int e){
    switch(e){
        case 1 :
            Beep(4000,100);
            for(int linha=1; linha<=40; linha++){
                for (int coluna=1; coluna<=80; coluna++){
                    gotoxy(coluna,linha);
                    textbackground(YELLOW);
                    printf(" ");
                }
                printf(" ");
            }

//Bordas//
            textcolor(BLACK);
            int linhaa=1;
            for (int coluna=1;coluna<MCOLUNAS;coluna++){
                if(linhaa==3)
                    linhaa=linhaa-2;
                gotoxy(coluna,linhaa);
                printf("%c",15);
                linhaa++;
                Sleep(25);
            }
            int colunaa=MCOLUNAS;
            for (int linha=2;linha<MLINHAS;linha++){
                if(colunaa==81)
                    colunaa=colunaa-2;
                gotoxy(colunaa,linha);
                printf("%c",15);
                colunaa++;
                Sleep(25);
            }
            linhaa=40;
            for (int coluna=80;coluna>1;coluna--){
                if(linhaa==38)
                    linhaa=linhaa+2;
                gotoxy(coluna,linhaa);
                printf("%c",15);
                linhaa--;
                Sleep(25);
            }
            colunaa=1;
            for (int linha=39;linha>1;linha--){
                if(colunaa==0)
                    colunaa=colunaa+2;
                gotoxy(colunaa,linha);
                printf("%c",15);
                colunaa--;
                Sleep(25);
            }
//Nome//
            gotoxy(13,3);
            nome();

//Tabela de inicio//
            gotoxy(2,39);
            for(int colunas=13; colunas<=68; colunas++){
                gotoxy(colunas,8);
                printf("%c",278);
                Sleep(10);
            }
            textbackground(BLACK);
            textcolor(WHITE);
            PINTATUDO();
            for(int coluna=12; coluna<=69; coluna++){
                textbackground(BROWN);
                gotoxy(coluna,10);
                printf(" ");
                gotoxy(coluna,37);
                printf(" ");
            }
            for(int linha=10; linha<=37; linha++){
                gotoxy(12,linha);
                printf(" ");
                gotoxy(69,linha);
                printf(" ");
            }
            break;
            case 2 :
                Beep(4000,100);
                for(int linha=1; linha<=40; linha++){
                    for (int coluna=1; coluna<=80; coluna++){
                        gotoxy(coluna,linha);
                        textbackground(BROWN);
                        printf(" ");
                    }
                    printf(" ");
                }

//Bordas//
                textcolor(YELLOW);
                int linhaa2=1;
                for (int coluna=1;coluna<MCOLUNAS;coluna++){
                    if(linhaa2==3)
                        linhaa2=linhaa2-2;
                    gotoxy(coluna,linhaa2);
                    printf("%c",15);
                    linhaa2++;
                    Sleep(25);
                }
                textcolor(RED);
                int colunaa2=MCOLUNAS;
                for (int linha=2;linha<MLINHAS;linha++){
                    if(colunaa2==81)
                        colunaa2=colunaa2-2;
                    gotoxy(colunaa2,linha);
                    printf("%c",15);
                    colunaa2++;
                    Sleep(25);
                }
                textcolor(YELLOW);
                linhaa2=40;
                for (int coluna=80;coluna>1;coluna--){
                    if(linhaa2==38)
                        linhaa2=linhaa2+2;
                    gotoxy(coluna,linhaa2);
                    printf("%c",15);
                    linhaa2--;
                    Sleep(25);
                }
                textcolor(RED);
                colunaa2=1;
                for (int linha=39;linha>2;linha--){
                    if(colunaa2==0)
                        colunaa2=colunaa2+2;
                    gotoxy(colunaa2,linha);
                    printf("%c",15);
                    colunaa2--;
                    Sleep(25);
                }
//Nome//
                textcolor(YELLOW);
                nome();

//Tabela de inicio//
                gotoxy(2,39);textcolor(RED);
                for(int colunas=13; colunas<=68; colunas++){
                    gotoxy(colunas,8);
                    printf("%c",278);
                    Sleep(10);
                }
                textbackground(BLACK);
                textcolor(WHITE);
                PINTATUDO();
                for(int coluna=12; coluna<=69; coluna++)
                {
                    textbackground(RED);
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
                break;
        case 3 :
            Beep(4000,100);
            for(int linha=1; linha<=40; linha++)
            {
                for (int coluna=1; coluna<=80; coluna++)
                {
                    gotoxy(coluna,linha);
                    textbackground(BLUE);
                    printf(" ");
                }
                printf(" ");
            }

//Bordas//
            textcolor(WHITE);
            for(int coluna=1;coluna<MCOLUNAS;coluna++){
                if(coluna%2==1){
                    for(int linha=1;linha<MLINHAS;linha++){
                        if(linha%2==1){
                            gotoxy(coluna,linha);
                            printf("%c",15);
                            Sleep(8);}
                    }
                }
            }
//Nome//
            nome();
            textcolor(LIGHTBLUE);
//Tabela de inicio//
            gotoxy(2,39);
            for(int colunas=13; colunas<=68; colunas++)
            {
                gotoxy(colunas,8);
                printf("%c",278);
                Sleep(10);
            }
            textbackground(BLACK);
            textcolor(WHITE);
            PINTATUDO();
            for(int coluna=12; coluna<=69; coluna++)
            {
                textbackground(LIGHTBLUE);
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
            break;
        case 4 :
            Beep(4000,100);
            for(int linha=1; linha<=40; linha++){
                for (int coluna=1; coluna<=80; coluna++){
                    gotoxy(coluna,linha);
                    textbackground(GREEN);
                    printf(" ");
                }
                printf(" ");
            }

//Bordas//
            textcolor(LIGHTMAGENTA);
            int linhaa22=1;
            for (int coluna=1;coluna<MCOLUNAS;coluna++){
                if(linhaa22==3)
                    linhaa22=linhaa22-2;
                gotoxy(coluna,linhaa22);
                printf("%c",15);
                linhaa22++;
                Sleep(25);
            }
            textcolor(LIGHTCYAN);
            int colunaa22=MCOLUNAS;
            for (int linha=2;linha<MLINHAS;linha++){
                if(colunaa22==81)
                    colunaa22=colunaa22-2;
                gotoxy(colunaa22,linha);
                printf("%c",15);
                colunaa22++;
                Sleep(25);
            }
            textcolor(YELLOW);
            linhaa22=40;
            for (int coluna=80;coluna>1;coluna--){
                if(linhaa22==38)
                    linhaa22=linhaa22+2;
                gotoxy(coluna,linhaa22);
                printf("%c",15);
                linhaa22--;
                Sleep(25);
            }
            textcolor(LIGHTRED);
            colunaa22=1;
            for (int linha=39;linha>2;linha--){
                if(colunaa22==0)
                    colunaa22=colunaa22+2;
                gotoxy(colunaa22,linha);
                printf("%c",15);
                colunaa22--;
                Sleep(25);
            }

    //Nome//
            textcolor(YELLOW);
            nome();
            textcolor(LIGHTMAGENTA);
            gotoxy(2,39);
            for(int colunas=13; colunas<=68; colunas++)
            {
                gotoxy(colunas,8);
                printf("%c",278);
                Sleep(10);
            }
            textbackground(BLACK);
            textcolor(WHITE);
            PINTATUDO();
            for(int coluna=12; coluna<=69; coluna++){
                textbackground(LIGHTGREEN);
                gotoxy(coluna,10);
                printf(" ");
                gotoxy(coluna,37);
                printf(" ");
            }
            for(int linha=10; linha<=37; linha++){
                gotoxy(12,linha);
                printf(" ");
                gotoxy(69,linha);
                printf(" ");
            }
            for(int coluna=12; coluna<=69; coluna++){
                gotoxy(coluna,10);
                printf(" ");
                gotoxy(coluna,37);
                printf(" ");
                }
            for(int linha=10; linha<=37; linha++){
                gotoxy(12,linha);
                printf(" ");
                gotoxy(69,linha);
                printf(" ");
            }
            textbackground(BLACK);
            textcolor(WHITE);
            PINTATUDO();
            break;

        default :
            Beep(4000,100);

            for(int linha=1; linha<=40; linha++){
                for (int coluna=1; coluna<=80; coluna++){
                    gotoxy(coluna,linha);
                    textbackground(RED);
                    printf(" ");
                }
                printf(" ");
            }

            //Bordas//
            for(int coluna=1; coluna<=MCOLUNAS; coluna++){
                gotoxy(coluna,1);
                printf("%c",260);
                Sleep(15);
            }
            for(int linhas=1; linhas<=MLINHAS; linhas++){
                gotoxy(80,linhas);
                printf("%c",260);
                Sleep(15);
                }
            for(int coluna=MCOLUNAS; coluna>=1; coluna--){
                gotoxy(coluna,40);
                printf("%c",260);
                Sleep(15);
            }
            for(int linhas=MLINHAS; linhas>=1; linhas--){
                gotoxy(1,linhas);
                printf("%c",260);
                Sleep(15);
            }

            //Nome//
            nome();

            gotoxy(2,39);
            for(int colunas=13; colunas<=68; colunas++){
                gotoxy(colunas,8);
                printf("%c",278);
                Sleep(10);
            }
            textbackground(BLACK);
            textcolor(WHITE);
            PINTATUDO();
            for(int coluna=12; coluna<=69; coluna++){
                textbackground(WHITE);
                gotoxy(coluna,10);
                printf(" ");
                gotoxy(coluna,37);
                printf(" ");
                }
            for(int linha=10; linha<=37; linha++){
                gotoxy(12,linha);
                printf(" ");
                gotoxy(69,linha);
                printf(" ");
            }
            textbackground(BLACK);
            textcolor(WHITE);
            PINTATUDO();
            for(int coluna=12; coluna<=69; coluna++){
                textbackground(WHITE);
                gotoxy(coluna,10);
                printf(" ");
                gotoxy(coluna,37);
                printf(" ");
            }
            for(int linha=10; linha<=37; linha++){
                gotoxy(12,linha);
                printf(" ");
                gotoxy(69,linha);
                printf(" ");
                }}}
void PINTATUDO(void){
    for(int linhas=11; linhas<=36; linhas++){
        gotoxy(13,linhas);
        printf("                                                        \n");
    }
}

void carregamento(void){
    colorido(3); //Função que pinta cada um dos carregamentos! McRoscas está em ritmo de Carnaval \o/
    gotoxy(31,13);printf("MISTURANDO OS TEMAS",25);
    for(int coluna=50; coluna<=52; coluna++){
        gotoxy(coluna,13);
        printf(".");
        Sleep(450);
    }
    for(int coluna=50; coluna<=52; coluna++){
        gotoxy(coluna,13);
        printf(" ");
        Sleep(450);
    }
    colorido(2);
    gotoxy(31,13);printf("ACORDANDO O PADEIRO");

    for(int coluna=50; coluna<=52; coluna++){
        gotoxy(coluna,13);
        printf(".");
        Sleep(450);
    }

    for(int coluna=50; coluna<=52; coluna++){
        gotoxy(coluna,13);
        printf(" ");
        Sleep(450);
    }
    colorido(4);
    gotoxy(31,13);printf(" PREPARANDO O FORNO");

    for(int coluna=50; coluna<=52; coluna++){
        gotoxy(coluna,13);
        printf(".");
        Sleep(450);
    }

    for(int coluna=50; coluna<=52; coluna++){
        gotoxy(coluna,13);
        printf(" ");
        Sleep(450);
    }
    colorido(1);
    gotoxy(31,13);printf("  ARRUMANDO TABELAS");
    for(int coluna=50; coluna<=52; coluna++){

        gotoxy(coluna,13);
        printf(".");
        Sleep(450);
    }
    for(int coluna=50; coluna<=52; coluna++){
        gotoxy(coluna,13);
        printf(" ");
        Sleep(450);
    }
    }

void colorido(int a){
    if(a==1){
        for(int linha=10; linha<=16; linha++){
            gotoxy(21,linha);
            textbackground(CYAN);
            printf("                                        \n");
            Sleep(10);
        }
    }
    if(a==2){
        for(int linha=10; linha<=16; linha++){
            gotoxy(21,linha);
            textbackground(BLUE);
            printf("                                        \n");
            Sleep(10);
        }
    }
    if(a==3){
        for(int linha=10; linha<=16; linha++){
            gotoxy(21,linha);
            textbackground(RED);
            printf("                                        \n");
            Sleep(10);
        }
    }
    if(a==4){
         for(int linha=10; linha<=16; linha++){
                gotoxy(21,linha);
                textbackground(GREEN);
                printf("                                        \n");
                Sleep(10);
            }
    }
}

void reiniciar(void){
main();}

void pintatela(void){
        for(int coluna=13; coluna<=67; coluna++){
            for(int linha=15; linha<=32; linha++){
                gotoxy(coluna,linha);
                printf(" ");
            }
            printf(" ");
        }
}

void pintavalor(void){
        for(int coluna=27; coluna<=55; coluna++){
            for(int linha=33; linha<=33; linha++){
                gotoxy(coluna,linha);
                printf(" ");
            }
            printf(" ");
        }
}

void pintacarrinho(void){
    for(int linha=30; linha<=32; linha++){
        for(int coluna=13; coluna<=67; coluna++){
            gotoxy(coluna,linha);
            printf(" ");
        }
        printf(" ");
   }
}

void pintaInvalido(){
    for(int coluna=13; coluna<=67; coluna++){ // limpa a linha de digitar valor caso um numero invalido
        for(int linha=29; linha<=31; linha++){
            gotoxy(coluna,linha);
            printf(" ");}
        printf(" ");
    }
}

int CupomDesconto(int sorteio){
    int numerocupom;
    srand( (unsigned)time(NULL) );
    for (int c=0;c<1000;c++){
        numerocupom=rand()%500;}
    return numerocupom;
    }

int Clientes(char cliente[],int aaaa){
    int nclientes;
    nclientes=aaaa;
    return nclientes;
}

int main(){

    setlocale(LC_ALL,"portuguese");
    textbackground(BLACK);
    clrscr();

//Tela de carregamento...//
    textcolor(WHITE);
    gotoxy(27,1);printf("Clique em MAXIMIZAR para uma melhor experiência %c",24);
    carregamento();//Função que imprime os nomes e as cores da tela de carregamento

    textbackground(BLACK);textcolor(WHITE);
    gotoxy(21,10);printf("                                        ");
    gotoxy(20,37);printf("Obs: O tema poderá ser alterado no menu de temas.");
    CHAMATEMA();
    textbackground(BLACK);
    gotoxy(36,23);
    printf("BEM VINDO%c",289);
    for(int coluna=20; coluna<=46; coluna++){
        gotoxy(coluna,23);
        printf(" ");
        Sleep(100);
    }
    int comnd=4;
    while(comnd>1){
        textbackground(BLACK);
        textcolor(WHITE);
        gotoxy(20,18);printf(" <1>      INICIAR");
        gotoxy(20,24);printf(" <2> ALTERAR TEMA");
        gotoxy(20,30);printf(" <3>         SAIR");
        gotoxy(14,36);printf("mcroscas.alpha.version 2.0");
        gotoxy(45,24);printf("O QUE DESEJA? ");scanf("%d",&comnd);
        Beep(4000,100);

        if(comnd==2){
            PINTATUDO();
            CHAMATEMA();
        }

        if(comnd==3){
            comnd=-1;
            gotoxy(1,40);}
    }

      if(comnd == 1){
        textbackground(BLACK);
        textcolor(WHITE);
        PINTATUDO();
        char Cliente[12];
        int aaaa=1;
        gotoxy(25,15);printf("O McRoscas agora possuí Clientes!");
        gotoxy(24,22);printf("Digite o primeiro nome do Cliente!");
        gotoxy(30,26);printf("Nome: ");
        gotoxy(36,26);scanf("%s",&Cliente);
        Beep(4000,100);
        PINTATUDO();
        gotoxy(58,12);
        printf("%s",Cliente);
        gotoxy(56,11);
        printf("Cliente %d",Clientes(Cliente,aaaa));
        textbackground(BLACK);
        textcolor(WHITE);
//Tabelas do programa//
        pintatela();
        textbackground(BLACK);
        int e[2],qt,qtcarrinho=0;  // "e" é a variavel de escolha para as tabelas. "qt" é a quantidade para os produtos. "qtcarrinho" é a quantidade de itens q tem no carrinho(maximo de 10).

        float total=00.00;

        char doceL[15]="Doce de Leite",balaL[15]="Bala de Leite", cocadaB[15]="Cocada Baiana", cocadaC[15]="Cocada de Coco", biscoitoPC[38]="Biscoito c/ Pingos de Chocolate",suspiro[26]="Suspiro (Peito de Moça)";

        char presuntoF[20]="Presunto de Frango", presuntoP[20]="Presunto de Porco", salame[20]="Salame Defumado", mortadelaP[22]="Mortadela de Porco", mortadelaF[22]="Mortadela de Frango";// strings para guardar os nomes dos produtos;

        char paoD[20]="Pão Doce", paoF[20]="Pão Francês", paoDF[20]="Pão de Fôrma", paoMS[20]="Pão Massa Sovada", sonho[6]="Sonho"; //variaveis dos pães

        char leite[8]="Leite", iogurte[11]="Iogurte", queijo[20]="Queijo Pré-Cozido", requeijao[20]="Requeijão", manteiga[10]="Manteiga";

        char boloL[20]="Bolo de Leite",boloP[20]="Bolo Pudim",boloO[20]="Bolo de Ovos",tortaS[20]="Torta Salgada", tortaC[20]="Torta de Chocolate",tortaG[20]="Torta de Goiabada";

        int TpaoD=1, TpaoF=2, TpaoDF=3, TpaoMS=4, Tsonho=5; // constantes para servirem como uma ID para os produtos.
        int TboloL=6,TboloP=7,TboloO=8,TtortaS=9,TtortaC=10,TtortaG=11;
        int Tleite=12,Tiogurte=13,Tqueijo=14,Trequeijao=15,Tmanteiga=16;
        int TpresuntoF=17,TpresuntoP=18,TmortadelaP=19,TmortadelaF=20,Tsalame=21;
        int TdoceL=21,TbalaL=23,TcocadaB=24,TcocadaC=25,TbiscoitoPC=26,Tsuspiro=27;
        int sorteio;
        int desconto=0;
        int eeee;
        int chances=3;

        char carrinho[7][40]={""}, nada[40]="";
        int tamanhoS[7];// vetor de tamanho para o carrinho
        float QTePRECO[7][2]; // quantidade de itens em cada espaço no carrinho e na segunda coluna o preco.
        QTePRECO[0][0]=0; QTePRECO[0][1]=0;
        QTePRECO[1][0]=0; QTePRECO[1][1]=0;
        QTePRECO[2][0]=0; QTePRECO[2][1]=0;
        QTePRECO[3][0]=0; QTePRECO[3][1]=0;
        QTePRECO[4][0]=0; QTePRECO[4][1]=0;
        QTePRECO[5][0]=0; QTePRECO[5][1]=0;
        QTePRECO[6][0]=0; QTePRECO[6][1]=0;

        tamanhoS[0]=0;
        tamanhoS[1]=0;
        tamanhoS[2]=0;
        tamanhoS[3]=0;
        tamanhoS[4]=0;
        tamanhoS[5]=0;
        tamanhoS[6]=0;

        gotoxy(27,33);
        printf("Carrinho(%d)",qtcarrinho);
        gotoxy(42,33);
        printf("Total: R$%.2f",total);// print o total no canto inferior direito;
        do{  // esse "do" será como nosso lobby, o usuario voltara para ca para acessar outras tabelas ou carrinho.
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
            printf(" 7 - Gerar Cupom!....................");
            gotoxy(13,29);
            printf(" 8 - Novo Cliente....................");
            gotoxy(13,31);
            printf(" 9 - Fechar Programa!................\n");
            gotoxy(51,23);
            printf(" O que deseja? ");
            scanf("%d",&e[0]);
            Beep(4000,100);
            pintatela();
            switch(e[0]){
            case 1: //primeira tabela, referente a "pães"
                do{
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
                    Beep(4000,100);
                    if (e[1]==1)  // caso escolha pao de forma
                    {
                        do //repetição para assegurar de que o usuario não digite um valor menor que 0
                        {
                            gotoxy(13,29);
                            printf(" Digite a quantidade de %s que deseja:",paoDF);
                            scanf("%d",&qt);
                            Beep(4000,100);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,30);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                pintaInvalido();
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TpaoDF) ^ (qtcarrinho==7 && tamanhoS[1]!=TpaoDF) ^ (qtcarrinho==7 && tamanhoS[2]!=TpaoDF) ^ (qtcarrinho==7 && tamanhoS[3]!=TpaoDF) ^ (qtcarrinho==7 && tamanhoS[4]!=TpaoDF) ^ (qtcarrinho==7 && tamanhoS[5]!=TpaoDF) ^ (qtcarrinho==7 && tamanhoS[6]!=TpaoDF))
                            {
                                gotoxy(13,29);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                pintatela();
                                gotoxy(13,27);
                            }
                            else if (qt==0) {} // caso a quantidade seja 0 ele não execult nada;
                            else  // caso nao todas as condições anteriores não sejam executadas ele irá calcular tudo.
                            {
                                total=total+(qt*0.25);// adiciona ao total mostrado na tela inferior
                                for (int c=0;c<7;c++)
                                    if (tamanhoS[c]==0 || tamanhoS[c]==TpaoDF){ //ele ira ver se a posição 1 do carrinho está disponivel
                                        if(tamanhoS[c]==0){
                                            qtcarrinho++;}
                                        strcpy(carrinho[c], paoDF);
                                        tamanhoS[c]=TpaoDF;
                                        QTePRECO[c][0]+=qt;
                                        QTePRECO[c][1]+=(qt*0.25);
                                        break;// parar a repetição assim que encontrar um valor
                                    }

                                pintavalor();
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
                            Beep(4000,100);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,30);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                pintaInvalido();
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TpaoF) ^ (qtcarrinho==7 && tamanhoS[1]!=TpaoF) ^ (qtcarrinho==7 && tamanhoS[2]!=TpaoF) ^ (qtcarrinho==7 && tamanhoS[3]!=TpaoF) ^ (qtcarrinho==7 && tamanhoS[4]!=TpaoF) ^ (qtcarrinho==7 && tamanhoS[5]!=TpaoF) ^ (qtcarrinho==7 && tamanhoS[6]!=TpaoF))
                            {
                                gotoxy(13,29);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                pintatela();
                                gotoxy(13,20);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.25);
                                for (int c=0;c<7;c++)
                                    if (tamanhoS[c]==0 || tamanhoS[c]==TpaoF){
                                        if(tamanhoS[c]==0){
                                            qtcarrinho++;}
                                        strcpy(carrinho[c], paoF);
                                        tamanhoS[c]=TpaoF;
                                        QTePRECO[c][0]+=qt;
                                        QTePRECO[c][1]+=(qt*0.25);
                                        break;
                                    }

                                pintavalor();
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
                            Beep(4000,100);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,30);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                pintaInvalido();
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TpaoD) ^ (qtcarrinho==7 && tamanhoS[1]!=TpaoD) ^ (qtcarrinho==7 && tamanhoS[2]!=TpaoD) ^ (qtcarrinho==7 && tamanhoS[3]!=TpaoD) ^ (qtcarrinho==7 && tamanhoS[4]!=TpaoD) ^ (qtcarrinho==7 && tamanhoS[5]!=TpaoD) ^ (qtcarrinho==7 && tamanhoS[6]!=TpaoD))
                            {
                                gotoxy(13,29);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                pintatela();
                                gotoxy(13,27);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.25);
                                for (int c=0;c<7;c++)
                                    if (tamanhoS[c]==0 || tamanhoS[c]==TpaoD){
                                        if(tamanhoS[c]==0){
                                            qtcarrinho++;}
                                        strcpy(carrinho[c], paoD);
                                        tamanhoS[c]=TpaoD;
                                        QTePRECO[c][0]+=qt;
                                        QTePRECO[c][1]+=(qt*0.25);
                                        break;
                                    }

                                pintavalor();
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
                            Beep(4000,100);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,30);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                pintaInvalido();
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TpaoMS) ^ (qtcarrinho==7 && tamanhoS[1]!=TpaoMS) ^ (qtcarrinho==7 && tamanhoS[2]!=TpaoMS) ^ (qtcarrinho==7 && tamanhoS[3]!=TpaoMS) ^ (qtcarrinho==7 && tamanhoS[4]!=TpaoMS) ^ (qtcarrinho==7 && tamanhoS[5]!=TpaoMS) ^ (qtcarrinho==7 && tamanhoS[6]!=TpaoMS))
                            {
                                gotoxy(13,29);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                pintatela();
                                gotoxy(13,27);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.35);
                                for (int c=0;c<7;c++)
                                    if (tamanhoS[c]==0 || tamanhoS[c]==TpaoMS){
                                        if(tamanhoS[c]==0){
                                            qtcarrinho++;}
                                        strcpy(carrinho[c], paoMS);
                                        tamanhoS[c]=TpaoMS;
                                        QTePRECO[c][0]+=qt;
                                        QTePRECO[c][1]+=(qt*0.35);
                                        break;
                                    }

                                pintavalor();
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
                            Beep(4000,100);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,30);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                pintaInvalido();
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=Tsonho) ^ (qtcarrinho==7 && tamanhoS[1]!=Tsonho) ^ (qtcarrinho==7 && tamanhoS[2]!=Tsonho) ^ (qtcarrinho==7 && tamanhoS[3]!=Tsonho) ^ (qtcarrinho==7 && tamanhoS[4]!=Tsonho) ^ (qtcarrinho==7 && tamanhoS[5]!=Tsonho) ^ (qtcarrinho==7 && tamanhoS[6]!=Tsonho))
                            {
                                gotoxy(13,29);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                pintatela();
                                gotoxy(13,27);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.50);
                                for (int c=0;c<7;c++)
                                    if (tamanhoS[c]==0 || tamanhoS[c]==Tsonho){
                                        if(tamanhoS[c]==0){
                                            qtcarrinho++;}
                                        strcpy(carrinho[c], sonho);
                                        tamanhoS[c]=Tsonho;
                                        QTePRECO[c][0]+=qt;
                                        QTePRECO[c][1]+=(qt*0.50);
                                        break;
                                    }

                                pintavalor();
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
                    pintatela();
                    gotoxy(13,27);
                }
                while(e[1]!=9);
                break;
            case 2:
                do{
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
                    Beep(4000,100);
                    if (e[1]==1)
                    {
                        do //repetição para assegurar de que o usuario não digite um valor menor que 0
                        {
                            gotoxy(13,30);
                            printf(" Digite a quantidade de %s que deseja:",boloL);
                            scanf("%d",&qt);
                            Beep(4000,100);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                pintaInvalido();
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TboloL) ^ (qtcarrinho==7 && tamanhoS[1]!=TboloL) ^ (qtcarrinho==7 && tamanhoS[2]!=TboloL) ^ (qtcarrinho==7 && tamanhoS[3]!=TboloL) ^ (qtcarrinho==7 && tamanhoS[4]!=TboloL) ^ (qtcarrinho==7 && tamanhoS[5]!=TboloL) ^ (qtcarrinho==7 && tamanhoS[6]!=TboloL))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                pintatela();
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*15);
                                for (int c=0;c<7;c++)
                                    if (tamanhoS[c]==0 || tamanhoS[c]==TboloL){
                                        if(tamanhoS[c]==0){
                                            qtcarrinho++;}
                                        strcpy(carrinho[c], boloL);
                                        tamanhoS[c]=TboloL;
                                        QTePRECO[c][0]+=qt;
                                        QTePRECO[c][1]+=(qt*15);
                                        break;
                                    }

                                pintavalor();
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
                            Beep(4000,100);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                pintaInvalido();
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TboloP) ^ (qtcarrinho==7 && tamanhoS[1]!=TboloP) ^ (qtcarrinho==7 && tamanhoS[2]!=TboloP) ^ (qtcarrinho==7 && tamanhoS[3]!=TboloP) ^ (qtcarrinho==7 && tamanhoS[4]!=TboloP) ^ (qtcarrinho==7 && tamanhoS[5]!=TboloP) ^ (qtcarrinho==7 && tamanhoS[6]!=TboloP))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                pintatela();
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*25);
                                for (int c=0;c<7;c++)
                                    if (tamanhoS[c]==0 || tamanhoS[c]==TboloP){
                                        if(tamanhoS[c]==0){
                                            qtcarrinho++;}
                                        strcpy(carrinho[c], boloP);
                                        tamanhoS[c]=TboloP;
                                        QTePRECO[c][0]+=qt;
                                        QTePRECO[c][1]+=(qt*25);
                                        break;
                                    }

                                pintavalor();
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
                            Beep(4000,100);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                pintaInvalido();
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TboloO) ^ (qtcarrinho==7 && tamanhoS[1]!=TboloO) ^ (qtcarrinho==7 && tamanhoS[2]!=TboloO) ^ (qtcarrinho==7 && tamanhoS[3]!=TboloO) ^ (qtcarrinho==7 && tamanhoS[4]!=TboloO) ^ (qtcarrinho==7 && tamanhoS[5]!=TboloO) ^ (qtcarrinho==7 && tamanhoS[6]!=TboloO))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                pintatela();
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*11);
                                for (int c=0;c<7;c++)
                                    if (tamanhoS[c]==0 || tamanhoS[c]==TboloO){
                                        if(tamanhoS[c]==0){
                                            qtcarrinho++;}
                                        strcpy(carrinho[c], boloO);
                                        tamanhoS[c]=TboloO;
                                        QTePRECO[c][0]+=qt;
                                        QTePRECO[c][1]+=(qt*11);
                                        break;
                                    }

                                pintavalor();
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
                            Beep(4000,100);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                pintaInvalido();
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TtortaS) ^ (qtcarrinho==7 && tamanhoS[1]!=TtortaS) ^ (qtcarrinho==7 && tamanhoS[2]!=TtortaS) ^ (qtcarrinho==7 && tamanhoS[3]!=TtortaS) ^ (qtcarrinho==7 && tamanhoS[4]!=TtortaS) ^ (qtcarrinho==7 && tamanhoS[5]!=TtortaS) ^ (qtcarrinho==7 && tamanhoS[6]!=TtortaS))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                pintatela();
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*20);
                                for (int c=0;c<7;c++)
                                    if (tamanhoS[c]==0 || tamanhoS[c]==TtortaS){
                                        if(tamanhoS[c]==0){
                                            qtcarrinho++;}
                                        strcpy(carrinho[c], tortaS);
                                        tamanhoS[c]=TtortaS;
                                        QTePRECO[c][0]+=qt;
                                        QTePRECO[c][1]+=(qt*20);
                                        break;
                                    }

                                pintavalor();
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
                            Beep(4000,100);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                pintaInvalido();
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TtortaC) ^ (qtcarrinho==7 && tamanhoS[1]!=TtortaC) ^ (qtcarrinho==7 && tamanhoS[2]!=TtortaC) ^ (qtcarrinho==7 && tamanhoS[3]!=TtortaC) ^ (qtcarrinho==7 && tamanhoS[4]!=TtortaC) ^ (qtcarrinho==7 && tamanhoS[5]!=TtortaC) ^ (qtcarrinho==7 && tamanhoS[6]!=TtortaC))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                pintatela();
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*23);
                                for (int c=0;c<7;c++)
                                    if (tamanhoS[c]==0 || tamanhoS[c]==TtortaC){
                                        if(tamanhoS[c]==0){
                                            qtcarrinho++;}
                                        strcpy(carrinho[c], tortaC);
                                        tamanhoS[c]=TtortaC;
                                        QTePRECO[c][0]+=qt;
                                        QTePRECO[c][1]+=(qt*23);
                                        break;
                                    }

                                pintavalor();
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
                            Beep(4000,100);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                pintaInvalido();
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TtortaG) ^ (qtcarrinho==7 && tamanhoS[1]!=TtortaG) ^ (qtcarrinho==7 && tamanhoS[2]!=TtortaG) ^ (qtcarrinho==7 && tamanhoS[3]!=TtortaG) ^ (qtcarrinho==7 && tamanhoS[4]!=TtortaG) ^ (qtcarrinho==7 && tamanhoS[5]!=TtortaG) ^ (qtcarrinho==7 && tamanhoS[6]!=TtortaG))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                pintatela();
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*20);
                                for (int c=0;c<7;c++)
                                    if (tamanhoS[c]==0 || tamanhoS[c]==TtortaG){
                                        if(tamanhoS[c]==0){
                                            qtcarrinho++;}
                                        strcpy(carrinho[c], tortaG);
                                        tamanhoS[c]=TtortaG;
                                        QTePRECO[c][0]+=qt;
                                        QTePRECO[c][1]+=(qt*20);
                                        break;
                                    }

                                pintavalor();
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
                    pintatela();
                    gotoxy(13,29);
                }
                while(e[1]!=9);
                break;

            case 3:
                do{
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
                    Beep(4000,100);
                    if (e[1]==1)  // caso escolha pao de forma
                    {
                        do //repetição para assegurar de que o usuario não digite um valor menor que 0
                        {
                            gotoxy(13,30);
                            printf(" Digite a quantidade de %s que deseja:",leite);
                            scanf("%d",&qt);
                            Beep(4000,100);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                pintaInvalido();
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=Tleite) ^ (qtcarrinho==7 && tamanhoS[1]!=Tleite) ^ (qtcarrinho==7 && tamanhoS[2]!=Tleite) ^ (qtcarrinho==7 && tamanhoS[3]!=Tleite) ^ (qtcarrinho==7 && tamanhoS[4]!=Tleite) ^ (qtcarrinho==7 && tamanhoS[5]!=Tleite) ^ (qtcarrinho==7 && tamanhoS[6]!=Tleite))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                pintatela();
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.0018);
                                for (int c=0;c<7;c++)
                                    if (tamanhoS[c]==0 || tamanhoS[c]==Tleite){
                                        if(tamanhoS[c]==0){
                                            qtcarrinho++;}
                                        strcpy(carrinho[c], leite);
                                        tamanhoS[c]=Tleite;
                                        QTePRECO[c][0]+=qt;
                                        QTePRECO[c][1]+=(qt*0.0018);
                                        break;
                                    }

                                pintavalor();
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
                            Beep(4000,100);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                pintaInvalido();
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=Tiogurte) ^ (qtcarrinho==7 && tamanhoS[1]!=Tiogurte) ^ (qtcarrinho==7 && tamanhoS[2]!=Tiogurte) ^ (qtcarrinho==7 && tamanhoS[3]!=Tiogurte) ^ (qtcarrinho==7 && tamanhoS[4]!=Tiogurte) ^ (qtcarrinho==7 && tamanhoS[5]!=Tiogurte) ^ (qtcarrinho==7 && tamanhoS[6]!=Tiogurte))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                pintatela();
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.0075);
                                for (int c=0;c<7;c++)
                                    if (tamanhoS[c]==0 || tamanhoS[c]==Tiogurte){
                                        if(tamanhoS[c]==0){
                                            qtcarrinho++;}
                                        strcpy(carrinho[c], iogurte);
                                        tamanhoS[c]=Tiogurte;
                                        QTePRECO[c][0]+=qt;
                                        QTePRECO[c][1]+=(qt*0.0075);
                                        break;
                                    }

                                pintavalor();
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
                            Beep(4000,100);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                pintaInvalido();
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=Tqueijo) ^ (qtcarrinho==7 && tamanhoS[1]!=Tqueijo) ^ (qtcarrinho==7 && tamanhoS[2]!=Tqueijo) ^ (qtcarrinho==7 && tamanhoS[3]!=Tqueijo) ^ (qtcarrinho==7 && tamanhoS[4]!=Tqueijo) ^ (qtcarrinho==7 && tamanhoS[5]!=Tqueijo) ^ (qtcarrinho==7 && tamanhoS[6]!=Tqueijo))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,31);// vai para linha onde digita a quantidade;
                                pintatela();
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.025);
                                for (int c=0;c<7;c++)
                                    if (tamanhoS[c]==0 || tamanhoS[c]==Tqueijo){
                                        if(tamanhoS[c]==0){
                                            qtcarrinho++;}
                                        strcpy(carrinho[c], queijo);
                                        tamanhoS[c]=Tqueijo;
                                        QTePRECO[c][0]+=qt;
                                        QTePRECO[c][1]+=(qt*0.025);
                                        break;
                                    }

                                pintavalor();
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
                            Beep(4000,100);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                pintaInvalido();
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=Trequeijao) ^ (qtcarrinho==7 && tamanhoS[1]!=Trequeijao) ^ (qtcarrinho==7 && tamanhoS[2]!=Trequeijao) ^ (qtcarrinho==7 && tamanhoS[3]!=Trequeijao) ^ (qtcarrinho==7 && tamanhoS[4]!=Trequeijao) ^ (qtcarrinho==7 && tamanhoS[5]!=Trequeijao) ^ (qtcarrinho==7 && tamanhoS[6]!=Trequeijao))
                            {
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                pintatela();
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.0435);
                                for (int c=0;c<7;c++)
                                    if (tamanhoS[c]==0 || tamanhoS[c]==Trequeijao){
                                        if(tamanhoS[c]==0){
                                            qtcarrinho++;}
                                        strcpy(carrinho[c], requeijao);
                                        tamanhoS[c]=Trequeijao;
                                        QTePRECO[c][0]+=qt;
                                        QTePRECO[c][1]+=(qt*0.0435);
                                        break;
                                    }

                                pintavalor();
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
                            Beep(4000,100);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                pintaInvalido();
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=Tmanteiga) ^ (qtcarrinho==7 && tamanhoS[1]!=Tmanteiga) ^ (qtcarrinho==7 && tamanhoS[2]!=Tmanteiga) ^ (qtcarrinho==7 && tamanhoS[3]!=Tmanteiga) ^ (qtcarrinho==7 && tamanhoS[4]!=Tmanteiga) ^ (qtcarrinho==7 && tamanhoS[5]!=Tmanteiga) ^ (qtcarrinho==7 && tamanhoS[6]!=Tmanteiga))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                pintatela();
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.05);
                                for (int c=0;c<7;c++)
                                    if (tamanhoS[c]==0 || tamanhoS[c]==Tmanteiga){
                                        if(tamanhoS[c]==0){
                                            qtcarrinho++;}
                                        strcpy(carrinho[c], manteiga);
                                        tamanhoS[c]=Tmanteiga;
                                        QTePRECO[c][0]+=qt;
                                        QTePRECO[c][1]+=(qt*0.05);
                                        break;
                                    }

                                pintavalor();
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
                    pintatela();
                    gotoxy(13,29);
                }
                while(e[1]!=9);
                break;

            case 4:
                do{
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
                    Beep(4000,100);
                    if (e[1]==1)  // caso escolha pao de forma
                    {
                        do //repetição para assegurar de que o usuario não digite um valor menor que 0
                        {
                            gotoxy(13,30);
                            printf("Digite a quantidade de %s que deseja:",presuntoF);
                            scanf("%d",&qt);
                            Beep(4000,100);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                pintaInvalido();
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TpresuntoF) ^ (qtcarrinho==7 && tamanhoS[1]!=TpresuntoF) ^ (qtcarrinho==7 && tamanhoS[2]!=TpresuntoF) ^ (qtcarrinho==7 && tamanhoS[3]!=TpresuntoF) ^ (qtcarrinho==7 && tamanhoS[4]!=TpresuntoF) ^ (qtcarrinho==7 && tamanhoS[5]!=TpresuntoF) ^ (qtcarrinho==7 && tamanhoS[6]!=TpresuntoF))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                pintatela();
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.015);
                                for (int c=0;c<7;c++)
                                    if (tamanhoS[c]==0 || tamanhoS[c]==TpresuntoF){
                                        if(tamanhoS[c]==0){
                                            qtcarrinho++;}
                                        strcpy(carrinho[c], presuntoF);
                                        tamanhoS[c]=TpresuntoF;
                                        QTePRECO[c][0]+=qt;
                                        QTePRECO[c][1]+=(qt*0.015);
                                        break;
                                    }

                                pintavalor();
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
                            Beep(4000,100);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                pintaInvalido();
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TpresuntoP) ^ (qtcarrinho==7 && tamanhoS[1]!=TpresuntoP) ^ (qtcarrinho==7 && tamanhoS[2]!=TpresuntoP) ^ (qtcarrinho==7 && tamanhoS[3]!=TpresuntoP) ^ (qtcarrinho==7 && tamanhoS[4]!=TpresuntoP) ^ (qtcarrinho==7 && tamanhoS[5]!=TpresuntoP) ^ (qtcarrinho==7 && tamanhoS[6]!=TpresuntoP))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                pintatela();
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.009);
                                for (int c=0;c<7;c++)
                                    if (tamanhoS[c]==0 || tamanhoS[c]==TpresuntoP){
                                        if(tamanhoS[c]==0){
                                            qtcarrinho++;}
                                        strcpy(carrinho[c], presuntoP);
                                        tamanhoS[c]=TpresuntoP;
                                        QTePRECO[c][0]+=qt;
                                        QTePRECO[c][1]+=(qt*0.009);
                                        break;
                                    }

                                pintavalor();
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
                            Beep(4000,100);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                pintaInvalido();
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TmortadelaP) ^ (qtcarrinho==7 && tamanhoS[1]!=TmortadelaP) ^ (qtcarrinho==7 && tamanhoS[2]!=TmortadelaP) ^ (qtcarrinho==7 && tamanhoS[3]!=TmortadelaP) ^ (qtcarrinho==7 && tamanhoS[4]!=TmortadelaP) ^ (qtcarrinho==7 && tamanhoS[5]!=TmortadelaP) ^ (qtcarrinho==7 && tamanhoS[6]!=TmortadelaP))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                pintatela();
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.008);
                                for (int c=0;c<7;c++)
                                    if (tamanhoS[c]==0 || tamanhoS[c]==TmortadelaP){
                                        if(tamanhoS[c]==0){
                                            qtcarrinho++;}
                                        strcpy(carrinho[c], mortadelaP);
                                        tamanhoS[c]=TmortadelaP;
                                        QTePRECO[c][0]+=qt;
                                        QTePRECO[c][1]+=(qt*0.008);
                                        break;
                                    }

                                pintavalor();
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
                            Beep(4000,100);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                pintaInvalido();
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TmortadelaF) ^ (qtcarrinho==7 && tamanhoS[1]!=TmortadelaF) ^ (qtcarrinho==7 && tamanhoS[2]!=TmortadelaF) ^ (qtcarrinho==7 && tamanhoS[3]!=TmortadelaF) ^ (qtcarrinho==7 && tamanhoS[4]!=TmortadelaF) ^ (qtcarrinho==7 && tamanhoS[5]!=TmortadelaF) ^ (qtcarrinho==7 && tamanhoS[6]!=TmortadelaF))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                pintatela();
                                gotoxy(13,20);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.01);
                                for (int c=0;c<7;c++)
                                    if (tamanhoS[c]==0 || tamanhoS[c]==TmortadelaF){
                                        if(tamanhoS[c]==0){
                                            qtcarrinho++;}
                                        strcpy(carrinho[c], mortadelaF);
                                        tamanhoS[c]=TmortadelaF;
                                        QTePRECO[c][0]+=qt;
                                        QTePRECO[c][1]+=(qt*0.01);
                                        break;
                                    }

                                pintavalor();
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
                            Beep(4000,100);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                pintaInvalido();
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=Tsalame) ^ (qtcarrinho==7 && tamanhoS[1]!=Tsalame) ^ (qtcarrinho==7 && tamanhoS[2]!=Tsalame) ^ (qtcarrinho==7 && tamanhoS[3]!=Tsalame) ^ (qtcarrinho==7 && tamanhoS[4]!=Tsalame) ^ (qtcarrinho==7 && tamanhoS[5]!=Tsalame) ^ (qtcarrinho==7 && tamanhoS[6]!=Tsalame))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                pintatela();
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.05);
                                for (int c=0;c<7;c++)
                                    if (tamanhoS[c]==0 || tamanhoS[c]==Tsalame){
                                        if(tamanhoS[c]==0){
                                            qtcarrinho++;}
                                        strcpy(carrinho[c], salame);
                                        tamanhoS[c]=Tsalame;
                                        QTePRECO[c][0]+=qt;
                                        QTePRECO[c][1]+=(qt*0.05);
                                        break;
                                    }

                                pintavalor();
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
                    pintatela();
                    gotoxy(13,29);
                }
                while(e[1]!=9);
                break;

            case 5:
                do{
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
                    Beep(4000,100);
                    if (e[1]==1)  // caso escolha pao de forma
                    {
                        do //repetição para assegurar de que o usuario não digite um valor menor que 0
                        {
                            gotoxy(13,30);
                            printf(" Digite a quantidade de %s que deseja:",doceL);
                            scanf("%d",&qt);
                            Beep(4000,100);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                pintaInvalido();
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TdoceL) ^ (qtcarrinho==7 && tamanhoS[1]!=TdoceL) ^ (qtcarrinho==7 && tamanhoS[2]!=TdoceL) ^ (qtcarrinho==7 && tamanhoS[3]!=TdoceL) ^ (qtcarrinho==7 && tamanhoS[4]!=TdoceL) ^ (qtcarrinho==7 && tamanhoS[5]!=TdoceL) ^ (qtcarrinho==7 && tamanhoS[6]!=TdoceL))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                pintatela();
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.02);
                                for (int c=0;c<7;c++)
                                    if (tamanhoS[c]==0 || tamanhoS[c]==TdoceL){
                                        if(tamanhoS[c]==0){
                                            qtcarrinho++;}
                                        strcpy(carrinho[c], doceL);
                                        tamanhoS[c]=TdoceL;
                                        QTePRECO[c][0]+=qt;
                                        QTePRECO[c][1]+=(qt*0.02);
                                        break;
                                }

                                pintavalor();
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
                            Beep(4000,100);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                pintaInvalido();
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TbalaL) ^ (qtcarrinho==7 && tamanhoS[1]!=TbalaL) ^ (qtcarrinho==7 && tamanhoS[2]!=TbalaL) ^ (qtcarrinho==7 && tamanhoS[3]!=TbalaL) ^ (qtcarrinho==7 && tamanhoS[4]!=TbalaL) ^ (qtcarrinho==7 && tamanhoS[5]!=TbalaL) ^ (qtcarrinho==7 && tamanhoS[6]!=TbalaL))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                pintatela();
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.25);
                                for (int c=0;c<7;c++)
                                    if (tamanhoS[c]==0 || tamanhoS[c]==TbalaL){
                                        if(tamanhoS[c]==0){
                                            qtcarrinho++;}
                                        strcpy(carrinho[c], balaL);
                                        tamanhoS[c]=TbalaL;
                                        QTePRECO[c][0]+=qt;
                                        QTePRECO[c][1]+=(qt*0.25);
                                        break;
                                    }

                                pintavalor();
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
                            Beep(4000,100);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                pintaInvalido();
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TcocadaB) ^ (qtcarrinho==7 && tamanhoS[1]!=TcocadaB) ^ (qtcarrinho==7 && tamanhoS[2]!=TcocadaB) ^ (qtcarrinho==7 && tamanhoS[3]!=TcocadaB) ^ (qtcarrinho==7 && tamanhoS[4]!=TcocadaB) ^ (qtcarrinho==7 && tamanhoS[5]!=TcocadaB) ^ (qtcarrinho==7 && tamanhoS[6]!=TcocadaB))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                pintatela();
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*1);
                                for (int c=0;c<7;c++)
                                    if (tamanhoS[c]==0 || tamanhoS[c]==TcocadaB){
                                        if(tamanhoS[c]==0){
                                            qtcarrinho++;}
                                        strcpy(carrinho[c], cocadaB);
                                        tamanhoS[c]=TcocadaB;
                                        QTePRECO[c][0]+=qt;
                                        QTePRECO[c][1]+=qt;
                                        break;
                                    }

                                pintavalor();
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
                            Beep(4000,100);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                pintaInvalido();
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TcocadaC) ^ (qtcarrinho==7 && tamanhoS[1]!=TcocadaC) ^ (qtcarrinho==7 && tamanhoS[2]!=TcocadaC) ^ (qtcarrinho==7 && tamanhoS[3]!=TcocadaC) ^ (qtcarrinho==7 && tamanhoS[4]!=TcocadaC) ^ (qtcarrinho==7 && tamanhoS[5]!=TcocadaC) ^ (qtcarrinho==7 && tamanhoS[6]!=TcocadaC))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                pintatela();
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.8);
                                for (int c=0;c<7;c++)
                                    if (tamanhoS[c]==0 || tamanhoS[c]==TcocadaC){
                                        if(tamanhoS[c]==0){
                                            qtcarrinho++;}
                                        strcpy(carrinho[c], cocadaC);
                                        tamanhoS[c]=TcocadaC;
                                        QTePRECO[c][0]+=qt;
                                        QTePRECO[c][1]+=(qt*0.8);
                                        break;
                                    }

                                pintavalor();
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
                            Beep(4000,100);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                pintaInvalido();
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=TbiscoitoPC) ^ (qtcarrinho==7 && tamanhoS[1]!=TbiscoitoPC) ^ (qtcarrinho==7 && tamanhoS[2]!=TbiscoitoPC) ^ (qtcarrinho==7 && tamanhoS[3]!=TbiscoitoPC) ^ (qtcarrinho==7 && tamanhoS[4]!=TbiscoitoPC) ^ (qtcarrinho==7 && tamanhoS[5]!=TbiscoitoPC) ^ (qtcarrinho==7 && tamanhoS[6]!=TbiscoitoPC))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                pintatela();
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.4);
                                for (int c=0;c<7;c++)
                                    if (tamanhoS[c]==0 || tamanhoS[c]==TbiscoitoPC){
                                        if(tamanhoS[c]==0){
                                            qtcarrinho++;}
                                        strcpy(carrinho[c], biscoitoPC);
                                        tamanhoS[c]=TbiscoitoPC;
                                        QTePRECO[c][0]+=qt;
                                        QTePRECO[c][1]+=(qt*0.4);
                                        break;
                                    }

                                pintavalor();
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
                            Beep(4000,100);
                            if (qt<0) //if para caso escolha um numero negativo
                            {
                                gotoxy(13,31);
                                printf(" Valor inválido!");
                                Sleep(500);
                                gotoxy(13,27);// vai para linha onde digita a quantidade;
                                pintaInvalido();
                            }
                            else if ((qtcarrinho==7 && tamanhoS[0]!=Tsuspiro) ^ (qtcarrinho==7 && tamanhoS[1]!=Tsuspiro) ^ (qtcarrinho==7 && tamanhoS[2]!=Tsuspiro) ^ (qtcarrinho==7 && tamanhoS[3]!=Tsuspiro) ^ (qtcarrinho==7 && tamanhoS[4]!=Tsuspiro) ^ (qtcarrinho==7 && tamanhoS[5]!=Tsuspiro) ^ (qtcarrinho==7 && tamanhoS[6]!=Tsuspiro))
                            {
                                gotoxy(13,31);
                                printf(" Não é possível adicionar ao carrinho! Limite excedido.");
                                Sleep(1500);
                                gotoxy(13,29);// vai para linha onde digita a quantidade;
                                pintatela();
                                gotoxy(13,29);
                            }
                            else if (qt==0) {}
                            else
                            {
                                total=total+(qt*0.7);
                                for (int c=0;c<7;c++)
                                    if (tamanhoS[c]==0 || tamanhoS[c]==Tsuspiro){
                                        if(tamanhoS[c]==0){
                                            qtcarrinho++;}
                                        strcpy(carrinho[c], suspiro);
                                        tamanhoS[c]=Tsuspiro;
                                        QTePRECO[c][0]+=qt;
                                        QTePRECO[c][1]+=(qt*0.7);
                                        break;
                                    }

                                pintavalor();
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
                    pintatela();
                    gotoxy(13,29);
                }
                while(e[1]!=9);
                break;

            case 6:
                do{
                    gotoxy(13,14);
                    printf(" PRODUTO                             QT    PREÇO");
                    for (int c=0, linha=16;c<7;c++,linha+=2){
                        gotoxy(49,linha);
                        printf(" %.0f",QTePRECO[c][0]);
                        gotoxy(55,linha);
                        printf(" %.2f",QTePRECO[c][1]);
                        gotoxy(13,linha);
                        printf(" %d- %s",c+1, carrinho[c]);
                    }

                    gotoxy(13,30);
                    printf(" 1 - Remover Produto");
                    gotoxy(46,30);
                    printf("2 - Fechar Compra!");
                    gotoxy(13,31);
                    printf(" 9 - Voltar");
                    gotoxy(39,30);
                    scanf("%d",&e[1]);
                    Beep(4000,100);
                    if (e[1]==1)
                    {
                        do
                        {
                            pintaInvalido();
                            gotoxy(13,30);
                            printf("Qual produto deseja remover? ");
                            gotoxy(13,31);
                            printf("*SERÁ REMOVIDO TODA QUANTIDADE");
                            gotoxy(13,32);
                            printf("9 - Cancelar");
                            gotoxy(42,30);
                            scanf("%d",&qt);
                            Beep(4000,100);
                            if (qt==9){}
                            else if (tamanhoS[qt-1]!=0)
                            {
                                total-=QTePRECO[qt-1][1];
                                tamanhoS[qt-1]=0;
                                qtcarrinho--;
                                QTePRECO[qt-1][0]=0;
                                strcpy(carrinho[qt-1], nada);
                                QTePRECO[qt-1][1]=0;
                                pintatela();
                                pintavalor();
                                gotoxy(27,33);
                                printf("Carrinho(%d)",qtcarrinho);
                                gotoxy(42,33);
                                printf("Total: R$%.2f",total);
                                gotoxy(13,27);

                                for (int c=0, linha=16;c<7;c++,linha+=2){
                                    gotoxy(49,linha);
                                    printf(" %.0f",QTePRECO[c][0]);
                                    gotoxy(55,linha);
                                    printf(" %.2f",QTePRECO[c][1]);
                                    gotoxy(13,linha);
                                    printf(" %d- %s",c+1, carrinho[c]);
                                }
                            }
                            else
                            {
                                pintacarrinho();
                                gotoxy(13,30);
                                printf(" Não há produtos!");
                                Sleep(1000);
                            }
                        }while(qt!=9);
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
                        printf("* Aperte qualquer tecla para reiniciar este programa.");
                        gotoxy(5,22);
                        printf("* Você perdera quaisquer dados salvos neste aplicativo.");
                        gotoxy(5,22);
                        textcolor(BLUE);
                        gotoxy(60,22);getch();
                        reiniciar();
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
                break;
            case 7:
                gotoxy(27,17);printf("Quer tentar a sorte e talvez");
                gotoxy(27,18);printf("ganhar um cupom de desconto?");
                gotoxy(27,20);printf("Digite um número entre 0 e 20");
                gotoxy(27,21);printf("se acertar leva desconto de 20%!");
                gotoxy(30,24);printf(" <1> Sim!");
                gotoxy(43,24);printf(" <2> Não!");
                gotoxy(41,24);scanf("%d",&eeee);
                Beep(4000,100);
                pintatela();

                if (eeee==1){
                    do{
                        gotoxy(21,20);
                        printf("Vamos lá! Escolha um numero entre 0 e 20!");
                        srand( (unsigned)time(NULL) );
                        sorteio=rand()%21;
                        gotoxy(40,24);

                        scanf("%d",&eeee);
                        Beep(4000,100);
                        pintatela();

                        if (eeee==sorteio){
                            gotoxy(30,22);printf("Parabéns!");
                            gotoxy(30,24);printf("Gerando cupom");
                            for (int c=43;c<45;c++){
                                Sleep(700);
                                printf(".");
                                gotoxy(c,24);
                            }
                            for (int c=0;c<500;c+=20){
                                gotoxy(43,24);
                                Beep(4000,50);
                                printf(" %d",rand()%500);
                                Sleep(75);
                                for (int j=43;j<47;j++){
                                    gotoxy(j,24);
                                    printf(" ");}
                                gotoxy(43,24);
                            }
                            pintatela();
                            CupomDesconto(sorteio);
                            desconto=CupomDesconto(sorteio);
                            gotoxy(29,22);printf("O seu cupom é: ");
                            gotoxy(44,22);printf("%dMcR",desconto);
                            gotoxy(17,24);printf("Pode usar o seu cupom assim que fechar a compra!");
                            Sleep(5000);
                            chances=0;
                            gotoxy(22,26);printf("Aperte qualquer tecla para confirmar!");
                            getch();
                            Beep(4000,100);
                            pintatela();}

                else{
                    chances--;
                    if (chances==0){
                        gotoxy(22,22);printf("Suas chances acabaram!");
                        gotoxy(22,24);printf("Tente novamente na proxima compra!");
                        Sleep(1500);
                        pintatela();}
                    else {
                        gotoxy(22,22);printf("Que pena :( Não foi o número sorteado");
                        gotoxy(22,24);printf("Tente novamente! (chances restantes: %d)", chances);
                        Sleep(3500);
                        pintatela();}
                    }
                    }while(chances!=0);
                }
            break;
            case 8:
                textbackground(BLACK);
                textcolor(WHITE);
                pintatela();
                char Cliente[12];
                aaaa++;
                gotoxy(25,15);printf("O McRoscas agora possuí Clientes!");
                gotoxy(22,22);printf("Digite o primeiro nome do novo Cliente!");
                gotoxy(30,26);printf("Nome: ");
                gotoxy(36,26);scanf("%s",Cliente);
                pintatela();
                gotoxy(58,12);printf("           ");
                gotoxy(58,12);
                printf("%s",Cliente);
                gotoxy(56,11);
                printf("Cliente %d",Clientes(Cliente,aaaa));

                default:
                    break;
        }
        }while(e[0]!=9);

//Tela de saída//
    PINTATUDO();
    char voce[15]={'V','o','c','ê',' ','é',' ','E','s','p','e','c','i','a','l'};
    gotoxy(34,17);
    for(int i=0;i<15;i++){
        printf("%c",voce[i]);
        Sleep(150);}

    gotoxy(33,25);
    char mcroscas[17]={'A',' ','E','q','u','i','p','e',' ','M','c','R','o','s','c','a','s'};
    for(int i=0;i<17;i++){
        printf("%c",mcroscas[i]);
        Sleep(150);}

    gotoxy(38,27);
    char angra[10]={'A','g','r','a','d','e','c','e'};
    for(int i=0;i<10;i++){
        printf("%c",angra[i]);
        Sleep(150);}
    gotoxy(33,29);
    char pref[17]={'A',' ','S','u','a',' ','P','r','e','f','ê','r','e','n','c','i','a'};
    for(int i=0;i<17;i++){
        printf("%c",pref[i]);
        Sleep(150);}
    getch();
    gotoxy(1,40);
    return 0;
}}

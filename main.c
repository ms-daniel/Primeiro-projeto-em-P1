#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>
#include <locale.h>
#include <windows.h>
#include <time.h>
#include <ctype.h>

#define MLINHAS 40
#define MCOLUNAS 80


struct CLIENTES{
    char nome[502];
    char rua[502];
    int numerorua;
    char bairro[25];
    char telefone[30];
}pessoas[100];

        int desconto=0;
        int qtcarrinho=0, qt=0;
        float total=00.00;
        int Posicao_Cliente=-1; //começa negativo pq qnd for pra main ela adiciona +1, daí ele fica em 0
                                //(isso vai ser para ler o indice na hora de fechar compra

        char doceL[15]="Doce de Leite",balaL[15]="Bala de Leite", cocadaB[15]="Cocada Baiana", cocadaC[15]="Cocada de Coco", biscoitoPC[38]="Biscoito",suspiro[26]="Suspiro";
        char presuntoF[20]="P. de Frango", presuntoP[20]="P. de Porco", salame[20]="Salame Defumado", mortadelaP[22]="Mor. de Porco", mortadelaF[22]="Mor. de Frango";// strings para guardar os nomes dos produtos;
        char paoD[20]="Pão Doce", paoF[20]="Pão Francês", paoDF[20]="Pão de Fôrma", paoMS[20]="Pão M. Sovada", sonho[6]="Sonho"; //variaveis dos pães
        char leite[8]="Leite", iogurte[11]="Iogurte", queijo[20]="Q. Pré-Cozido", requeijao[20]="Requeijão", manteiga[10]="Manteiga";
        char boloL[20]="B. de Leite",boloP[20]="B. Pudim",boloO[20]="B. de Ovos",tortaS[20]="T. Salgada", tortaC[20]="T. de Chocolate",tortaG[20]="T. de Goiabada";

        /* preço dos produtos */
        float
                Ppaes=0.25, PpaoMS=0.35, Psonho= 0.50,

                PboloL=15, PboloP=25, PboloO=11, PtortaS=20, PtortaC=23, PtortaG=20,

                Pleite=0.0018, Piogurte=0.0075, Pqueijo=0.025, Prequeijao=0.0435, Pmanteiga= 0.05,

                PpresuntoF=0.015, PpresuntoP=0.009, PmortadelaP=0.008, PmortadelaF=0.01, Psalame=0.05,

                PdoceL=0.02, PbalaL=0.25, PcocadaB=1, PcocadaC=0.8, PbiscoitoPC=0.4, Psuspiro=0.7;
        /* */

        char carrinho[27][40]={""}, nada[40]="";

        int TpaoD=1, TpaoF=2, TpaoDF=3, TpaoMS=4, Tsonho=5; // constantes para servirem como uma ID para os produtos.
        int TboloL=6,TboloP=7,TboloO=8,TtortaS=9,TtortaC=10,TtortaG=11;
        int Tleite=12,Tiogurte=13,Tqueijo=14,Trequeijao=15,Tmanteiga=16;
        int TpresuntoF=17,TpresuntoP=18,TmortadelaP=19,TmortadelaF=20,Tsalame=21;
        int TdoceL=22,TbalaL=23,TcocadaB=24,TcocadaC=25,TbiscoitoPC=26,Tsuspiro=27;

        int tamanhoS[27]={0};// vetor de tamanho para o carrinho
        float QTePRECO[27][2]={0}; // quantidade de itens em cada espaço no carrinho e na segunda coluna o preco.

void FecharCompra1(){ //primeira parte do fechar compra
    PINTATUDO();
    int opcao;
    gotoxy(20,18); printf("Tem certeza que deseja fechar sua compra?");
    gotoxy(33,19); printf("1.SIM");
    gotoxy(43,19); printf("2.NAO");
    gotoxy(40,19); scanf("%d",&opcao);
    Beep(4000,100);
    setbuf(stdin,NULL); //limpar o buff do teclado apra o \n do scanf anterior não ir para a leitura da string do nome e bugar
    if (opcao==1){
        pintatela();
        gotoxy(18,12); printf("Nome Completo: "); scanf("%[^\n]",&pessoas[Posicao_Cliente].nome);
        Beep(4000,100);
        setbuf(stdin,NULL);
        gotoxy(18,13); printf("Bairro: "); scanf("%[^\n]",&pessoas[Posicao_Cliente].bairro);
        Beep(4000,100);
        setbuf(stdin,NULL);
        gotoxy(18,14); printf("Rua: "); scanf("%[^\n]",&pessoas[Posicao_Cliente].rua);
        Beep(4000,100);
        setbuf(stdin,NULL);
        gotoxy(18,15); printf("N* da casa: "); scanf("%d",&pessoas[Posicao_Cliente].numerorua);
        Beep(4000,100);
        setbuf(stdin,NULL);
        gotoxy(18,16); printf("Telefe: "); scanf("%[^\n]",&pessoas[Posicao_Cliente].telefone);
        Beep(4000,100);
        setbuf(stdin,NULL);
        pintatela();
        gotoxy(23,20);
        printf("Carregando e organizando produtos");
        for(int coluna=38;coluna<=42;coluna++){
            gotoxy(coluna,21);
            printf(".");
            Beep(4000,100);
            Sleep(500);
        }
        pintatela();
        FecharCompra2();

    }
}

void FecharCompra2(){//segunda parte que pinta a nota fiscal
    float totaldesconto=0;
    textbackground(BLACK);
    PintaTEMAS();
    setlocale(LC_ALL, "C"); //para os caracteres da tabela ASCII serem impressos normalmente
    gotoxy(13,3);printf("%c",201);

    for(int c=1;c<=43;c++)
        printf("%c",205);
    printf("%c\n",187);
    gotoxy(13,4); printf("%c               NF-e McRoscas               %c\n",186,186);
    gotoxy(13,5); printf("%cNome:                                      %c\n",186,186);
    Beep(2000,50);

    setlocale(LC_ALL, "portuguese");
    gotoxy(20,5); printf("%s",pessoas[Posicao_Cliente].nome);

    setlocale(LC_ALL, "C");
    gotoxy(13,6); printf("%cBairro:                                    %c\n",186,186);
    Beep(2000,50);

    setlocale(LC_ALL, "portuguese");
    gotoxy(22,6); printf("%s",pessoas[Posicao_Cliente].bairro);

    setlocale(LC_ALL, "C");
    gotoxy(13,7); printf("%cRua:                                 n*    %c\n",186,186);
    Beep(2000,50);

    setlocale(LC_ALL, "portuguese");
    gotoxy(19,7); printf("%s",pessoas[Posicao_Cliente].rua);
    gotoxy(54,7); printf("%d",pessoas[Posicao_Cliente].numerorua);

    setlocale(LC_ALL, "C");
    gotoxy(13,8); printf("%cTelefone:                    Cupom:        %c\n",186,186);
    Beep(2000,50);

    setlocale(LC_ALL, "portuguese");
    gotoxy(24,8); printf("%s",pessoas[Posicao_Cliente].telefone);
    if (desconto!=0){
        totaldesconto=total*0.2;
        gotoxy(50,8); printf("%dMcR", desconto);}


    setlocale(LC_ALL, "C");
    gotoxy(13,9); printf("%c                                           %c\n",186,186);
    gotoxy(13,10);printf("%c    -----------------------------------    %c\n",186,186);
    gotoxy(13,11);printf("%c                  Produtos                 %c\n",186,186);
    Beep(2000,100);

    gotoxy(13,12);printf("%c                                           %c\n",186,186);
    gotoxy(13,13);printf("%c                                           %c\n",186,186);//nessa linha vai printar o printf q está na linha 130

    setlocale(LC_ALL, "portuguese");
    gotoxy(15,13);printf("PRODUTO                       QT    PREÇO");

    setlocale(LC_ALL, "C");
    Beep(2000,100);
    for(int linha=14, c=-1;c<=qtcarrinho;c++,linha++){//printa os caracteres laterais
        gotoxy(13,linha);
        printf("%c                                           %c\n",186,186);}

    setlocale(LC_ALL, "portuguese");
    MostraCarrinhoTotal(qtcarrinho); //printa todos os produtos q contem no carrinho
    Beep(2000,50);
    gotoxy(20,15+qtcarrinho); printf("Desconto: R$%.2f  Total: R$%.2f", totaldesconto,total-=(total*0.2));

    setlocale(LC_ALL, "C");
    gotoxy(13,16+qtcarrinho);printf("%c    -----------------------------------    %c\n",186,186);
    gotoxy(13,17+qtcarrinho);printf("%c                                           %c\n",186,186);
    Beep(2000,50);
    gotoxy(13,18+qtcarrinho);printf("%c                                           %c\n",186,186);
    setlocale(LC_ALL, "portuguese");
    gotoxy(14,18+qtcarrinho);printf("A equipe McRoscas Agradece sua preferência!");

    setlocale(LC_ALL, "C");
    gotoxy(13,19+qtcarrinho);printf("%c",200);
    for(int c=1;c<=43;c++)
        printf("%c",205);
    printf("%c\n",188);
    system("pause");
    reiniciar();
}
void MostraCarrinhoTotal(int quantidade){
    for (int c=0, linha=14;c<quantidade;c++,linha++){
                        gotoxy(44,linha);
                        printf(" %.0f",QTePRECO[c][0]);
                        gotoxy(50,linha);
                        printf(" %.2f",QTePRECO[c][1]);
                        gotoxy(15,linha);
                        printf("%d- %s",c+1, carrinho[c]);
                        Beep(2000,50);
                        Sleep(200);
                    }
}

char* PrintClient(char clienteincial[],int temaaleatorio){ //verifique se o nome do cliente vai passar da tela
    char aux[44]="";

    for (int c=0;c<=39;c++){ //passar somente 39 caracteres do nome do cliente para auxiliar
            aux[c]=clienteincial[c];}
    TEMAS(temaaleatorio); //pinta p msm tema novamente para ficar bonito e não ficar as letras fora bugando
    aux[40]='.';aux[41]='.'; aux[42]='.';aux[43]='\0'; //salva os pontinhos e o \0 nos indices finais
    strcpy(clienteincial, aux); //copia a auxiliar na variavel do cliente pra não bugar qnd retornar
    return clienteincial;
}

void Compra (char produto[],float preco, int id){
    do{ //repetição para assegurar de que o usuario não digite um valor menor que 0
        gotoxy(13,29);
        printf(" Digite a quantidade de %s que deseja:",produto);
        scanf("%d",&qt);
        Beep(4000,100);
        if (qt<0){ //if para caso escolha um numero negativo
            gotoxy(13,30);
            printf(" Valor inválido!");
            Sleep(500);
            gotoxy(13,27);// vai para linha onde digita a quantidade;
            pintaInvalido(29,31);
        }
            else if (qt==0) {} // caso a quantidade seja 0 ele não execulta nada;

            else{ // caso todas as condições anteriores não sejam executadas ele irá calcular tudo.
                total=total+(qt*preco);// adiciona ao total
                for (int c=0;c<27;c++)
                    if (tamanhoS[c]==0 || tamanhoS[c]==id){ //ele irá ver qual posição está disponivel
                        if(tamanhoS[c]==0){
                            qtcarrinho++;}
                        strcpy(carrinho[c], produto);
                        tamanhoS[c]=id;
                        QTePRECO[c][0]+=qt;
                        QTePRECO[c][1]+=(qt*preco);
                        break;// parar a repetição assim que encontrar um valor
                        }
                    pintavalor();
                    gotoxy(35,36);
                    printf("Carrinho(%d)",qtcarrinho);
                    gotoxy(50,36);
                    printf("Total: R$%.2f",total);
                    gotoxy(13,27);
                }
        }while(qt<0);
}

void OrganizaCarrinho(){//vai passar o item da ultima posição para a posição do item removido
    char carrinho_auxiliar[40];//varuiaveis auxiliares para não perder o valor
    float QTePRECOauxiliar[1][2];
    int tamanhoSauxiliar;

    int anterior=qt;
    int posterior=qtcarrinho;
    //aqui começa a passar os valores do ultimo para o espaço que foi removido
        if (anterior>=0 && (qt-1)<qtcarrinho)
            for (int c=0; c<qtcarrinho; c++){
                //salva os valores do espaço q foi removido
                strcpy(carrinho_auxiliar, carrinho[anterior-1]);
                tamanhoSauxiliar=tamanhoS[anterior-1];
                QTePRECOauxiliar[0][0]=QTePRECO[anterior-1][0];
                QTePRECOauxiliar[0][1]=QTePRECO[anterior-1][1];
                //troca os valores do espaço posterior dentro do q foi removido
                tamanhoS[anterior-1]=tamanhoS[anterior];
                QTePRECO[anterior-1][0]=QTePRECO[anterior][0];
                QTePRECO[anterior-1][1]=QTePRECO[anterior][1];
                strcpy(carrinho[anterior-1], carrinho[anterior]);
                //salva o removido dentro do posterior
                tamanhoS[anterior]=tamanhoSauxiliar;
                QTePRECO[anterior][0]=QTePRECOauxiliar[0][0];
                QTePRECO[anterior][1]=QTePRECOauxiliar[0][1];
                strcpy(carrinho[anterior], carrinho_auxiliar);
                //incrementa a varaivel para poder fazer isso ate o ultimo espaço ocupado
                anterior++;
            }
}

void OpcoesCarrinho(){ //pinta as opçoes do carrinho
    gotoxy(13,33);
    printf(" 1 - Próxima Página");
    gotoxy(13,34);
    printf(" 3 - Remover Produto");
    gotoxy(46,33);
    printf("2 - Fechar Compra!");
    gotoxy(46,34);
    printf("9 - Voltar");
    gotoxy(39,33);
}

void RemoverProduto(int pag){
    do{
            pintaInvalido(33,35);
            gotoxy(14,33);
            printf("Qual produto deseja remover? ");
            gotoxy(14,34);
            printf("9 - Cancelar");
            gotoxy(42,33);
            scanf("%d",&qt);
            Beep(4000,100);

            if (qt==9){}

            else if (tamanhoS[qt-1]!=0){
                total-=QTePRECO[qt-1][1]; //tira do valor total
                tamanhoS[qt-1]=0;  //define o ID do espaço como 0, constando não haver nada lá dentro
                qtcarrinho--; //diminui a quantidade de itens que diz ter no carrinho
                QTePRECO[qt-1][0]=0; //zera a quantidade dos itens
                QTePRECO[qt-1][1]=0;//zera o valor total do espaço
                strcpy(carrinho[qt-1], nada); //"zera" a string do espaço
                if (qtcarrinho!=0)
                    OrganizaCarrinho(); //chama a função que organiza os espaços

                pintatela();

                gotoxy(35,36);
                printf("Carrinho(%d)",qtcarrinho);
                gotoxy(50,36);
                printf("Total: R$%.2f",total);
                gotoxy(13,27);
                if (pag==1)
                    MostraCarrinho();
                else if (pag==2)
                    MostraCarrinho2();
                else
                    MostraCarrinho3();
            }
            else{
                for(int linha=33; linha<=35; linha++){ //pinta a tela do carrinho
                    for(int coluna=13; coluna<=67; coluna++){
                        gotoxy(coluna,linha);
                        printf(" ");
                    }
                    printf(" ");
                }
                gotoxy(13,34);
                printf(" Não há produtos!");
                Sleep(1000);
                }
    }while(qt!=9);
}

void MostraCarrinho(){ //printa os itens do carrinho pagina 1
    for (int c=0, linha=14;c<9;c++,linha+=2){
                        gotoxy(49,linha);
                        printf(" %.0f",QTePRECO[c][0]);
                        gotoxy(55,linha);
                        printf(" %.2f",QTePRECO[c][1]);
                        gotoxy(13,linha);
                        printf(" %d- %s",c+1, carrinho[c]);
                    }
}

void MostraCarrinho2(){ //printa os itens do carrinho pagina 2
    for (int c=9, linha=14;c<18;c++,linha+=2){
                        gotoxy(49,linha);
                        printf(" %.0f",QTePRECO[c][0]);
                        gotoxy(55,linha);
                        printf(" %.2f",QTePRECO[c][1]);
                        gotoxy(13,linha);
                        printf(" %d- %s",c+1, carrinho[c]);
                    }
}

void MostraCarrinho3(){ //printa os itens do carrinho pagina 3
    for (int c=18, linha=14;c<27;c++,linha+=2){
                        gotoxy(49,linha);
                        printf(" %.0f",QTePRECO[c][0]);
                        gotoxy(55,linha);
                        printf(" %.2f",QTePRECO[c][1]);
                        gotoxy(13,linha);
                        printf(" %d- %s",c+1, carrinho[c]);
                    }
}

void BordasExternas(int a){
int linha=1;
int coluna;

    if(a==1){
        for (int coluna=1;coluna<MCOLUNAS;coluna++){
                if(linha==3)
                    linha=linha-2;
            gotoxy(coluna,linha);
            printf("%c",15);
            linha++;
            Sleep(10);
        }
    }
    if(a==2){
        coluna=MCOLUNAS;
        for (int linha=2;linha<MLINHAS;linha++){
                if(coluna==81)
                    coluna=coluna-2;
            gotoxy(coluna,linha);
            printf("%c",15);
            coluna++;
            Sleep(10);
        }
    }
    if(a==3){
        linha=40;
        for (int coluna=80;coluna>1;coluna--){
                if(linha==38)
                    linha=linha+2;
            gotoxy(coluna,linha);
            printf("%c",15);
            linha--;
            Sleep(10);
        }
    }
    if(a==4){
        coluna=1;
        for (int linha=39;linha>2;linha--){
                if(coluna==0)
                    coluna=coluna+2;
            gotoxy(coluna,linha);
            printf("%c",15);
            coluna--;
            Sleep(10);
        }
    }
}

void TemaVerao(){
    Beep(4000,100);

    textbackground(YELLOW);
    PintaTEMAS();

    textcolor(BLACK);
    for(int borda=1;borda<=4;borda++)
    BordasExternas(borda);

    nome();

    Sublinhado();

    textbackground(BROWN);
    BordaInterna();

textbackground(BLACK);
textcolor(WHITE);
PINTATUDO();
}

void TemaOutono(){
    Beep(4000,100);

    textbackground(BROWN);
    PintaTEMAS();

    for(int borda=1;borda<=4;borda++){
            if(borda%2==0)
                textcolor(RED);
            else
                textcolor(YELLOW);
        BordasExternas(borda);
    }

    textcolor(YELLOW);
    nome();


    textcolor(RED);
    Sublinhado();

    textbackground(RED);
    BordaInterna();

textbackground(BLACK);
textcolor(WHITE);
PINTATUDO();
}

void TemaInverno(){
    Beep(4000,100);

    textbackground(BLUE);
    PintaTEMAS();

//Flocos de Neve//
    textcolor(WHITE);
    for(int coluna=1;coluna<MCOLUNAS;coluna++){
            if(coluna%2==1){
                for(int linha=1;linha<MLINHAS;linha++){
                    if(linha%2==1){
                        gotoxy(coluna,linha);
                            printf("%c",15);
                        Sleep(4);
                    }
                }
            }
    }

    nome();
    textcolor(LIGHTBLUE);

    Sublinhado();

    textbackground(LIGHTBLUE);
    BordaInterna();

textbackground(BLACK);
textcolor(WHITE);
PINTATUDO();
}

void TemaPrimavera(){
    Beep(4000,100);

    textbackground(GREEN);
    PintaTEMAS();

    textcolor(LIGHTMAGENTA);
    BordasExternas(1);

    textcolor(LIGHTCYAN);
    BordasExternas(2);

    textcolor(YELLOW);
    BordasExternas(3);

    textcolor(LIGHTRED);
    BordasExternas(4);

    textcolor(YELLOW);
    nome();

    textcolor(LIGHTMAGENTA);
    Sublinhado();

    textbackground(LIGHTGREEN);
    BordaInterna();

textbackground(BLACK);
textcolor(WHITE);
PINTATUDO();
}

void TemaClassico(){
    Beep(4000,100);

    textbackground(RED);
    PintaTEMAS();

//Borda Tema Clássico//
   for(int coluna=1; coluna<=MCOLUNAS; coluna++)
    {
        gotoxy(coluna,1);
            printf("%c",260);
                Sleep(15);
    }

    for(int linhas=1; linhas<=MLINHAS; linhas++)
    {
        gotoxy(80,linhas);
            printf("%c",260);
                Sleep(15);
    }

    for(int coluna=MCOLUNAS; coluna>=1; coluna--)
    {
        gotoxy(coluna,40);
            printf("%c",260);
                Sleep(15);
    }

    for(int linhas=MLINHAS; linhas>=1; linhas--)
    {
        gotoxy(1,linhas);
            printf("%c",260);
                Sleep(15);
    }


    nome();

    Sublinhado();

    textbackground(WHITE);
    BordaInterna();

textbackground(BLACK);
textcolor(WHITE);
PINTATUDO();
}

void CHAMATEMA(){
    int tema;
    PINTATUDO();
    textcolor(WHITE);

    gotoxy(20,15);
        printf("O McRoscas agora possui um sístema de temas!");
    gotoxy(32,18);
        printf("Escolha um dos temas!");

    textcolor(YELLOW);
        gotoxy(21,22);
            printf("Verão <1>");


    textcolor(YELLOW);
        gotoxy(21,24);
            printf("Out");
    textcolor(LIGHTRED);
        gotoxy(24,24);
            printf("ono <2>");


    textcolor(LIGHTBLUE);
        gotoxy(21,26);
            printf("In");
    textcolor(LIGHTCYAN);
        gotoxy(23,26);
            printf("ver");
    textcolor(WHITE);
        gotoxy(26,26);
            printf("no <3>");


    textcolor(LIGHTGREEN);
        gotoxy(21,28);
            printf("Pri");
    textcolor(YELLOW);
        gotoxy(24,28);
            printf("ma");
    textcolor(LIGHTRED);
        gotoxy(26,28);
            printf("ve");
    textcolor(LIGHTMAGENTA);
        gotoxy(28,28);
            printf("ra <4>");

    textcolor(LIGHTRED);
        gotoxy(21,30);
            printf("Clás");
    textcolor(WHITE);
        gotoxy(25,30);
            printf("sico <5>");

    textcolor(WHITE);
        gotoxy(40,26);
            printf("Qual tema deseja? ");
                scanf("%d",&tema);
    TEMAS(tema);}

void nome(){
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

void Sublinhado(){
for(int colunas=13; colunas<=68; colunas++)
    {
        gotoxy(colunas,8);
            printf("%c",278);
                Sleep(10);
    }
}

void BordaInterna(){
    for(int coluna=12; coluna<=69; coluna++)
    {
        gotoxy(coluna,10);
            printf(" ");
        gotoxy(coluna,37);
            printf(" ");
            Sleep(10);
    }
    for(int linha=10; linha<=37; linha++)
    {
        gotoxy(12,linha);
            printf(" ");
        gotoxy(69,linha);
            printf(" ");
            Sleep(10);
    }
}

void TEMAS(int tema){
        switch(tema){
            case 1 :
                TemaVerao();
            break;

            case 2 :
                TemaOutono();
            break;

            case 3 :
                TemaInverno();
            break;

            case 4 :
                TemaPrimavera();
            break;

            case 5 :
                TemaClassico();
            break;

            default :
                gotoxy(40,26);
                    printf("  Valor inválido!");
                    Sleep(500);
                    CHAMATEMA();
            break;
        }
}

void PintaTEMAS(){
for(int linha=1; linha<=40; linha++){
        for (int coluna=1; coluna<=80; coluna++){
            gotoxy(coluna,linha);
            printf(" ");
        }
        printf(" ");
    }
}

void PINTATUDO(){
for(int linhas=11; linhas<=36; linhas++){
        gotoxy(13,linhas);
        printf("                                                        \n");
    }}

void pintaCarregamento(){
 for(int linha=10; linha<=16; linha++){
        gotoxy(21,linha);
        printf("                                        \n");
        Sleep(10);
    }
}

void PontinhosCarregamento(){
for(int coluna=50; coluna<=52; coluna++)
    {
        gotoxy(coluna,13);
        printf(".");
        Sleep(250);
    }
    for(int coluna=50; coluna<=52; coluna++)
    {
        gotoxy(coluna,13);
        printf(" ");
        Sleep(250);
    }
}

void carregamento(){
    colorido(3); //Função que pinta cada um dos carregamentos! McRoscas está em ritmo de Carnaval \o/
    gotoxy(31,13);printf("MISTURANDO OS TEMAS",25);
    PontinhosCarregamento();
    colorido(2);
    gotoxy(31,13);printf("ACORDANDO O PADEIRO");
    PontinhosCarregamento();
    colorido(4);
    gotoxy(31,13);printf(" PREPARANDO O FORNO");
    PontinhosCarregamento();
    colorido(1);
    gotoxy(31,13);printf("  ARRUMANDO TABELAS");
    PontinhosCarregamento();
}

void colorido(int cor){
    if(cor==1){
    textbackground(CYAN);
    pintaCarregamento();
    }
    if(cor==2){
    textbackground(BLUE);
    pintaCarregamento();
    }
    if(cor==3){
    textbackground(RED);
    pintaCarregamento();
    }
    if(cor==4){
    textbackground(GREEN);
    pintaCarregamento();
    }
}

void reiniciar(){ //zera todas as variaveis do  carrinho
    for (int c=0;c<27;c++){
        strcpy(carrinho[c], nada);
        QTePRECO[c][0]=0;
        QTePRECO[c][1]=0;
        tamanhoS[c]=0;}
    qt=0; qtcarrinho=0; total=0; desconto=0;

    main();
}

void pintatela(){
     for(int coluna=13; coluna<=67; coluna++){
        for(int linha=12; linha<=35; linha++){
            gotoxy(coluna,linha);
            printf(" ");
        }
        printf(" ");
    }
}

void pintavalor(){
    for(int coluna=27; coluna<=55; coluna++){
       for(int linha=33; linha<=33; linha++){
            gotoxy(coluna,linha);
            printf(" ");
        }
        printf(" ");
    }
}

void pintaInvalido(int linha, int limitelinha){
    for(int coluna=13; coluna<=67; coluna++){ // limpa a linha de digitar valor caso um numero invalido
        for(int lin=linha;lin<=limitelinha; lin++){
            gotoxy(coluna,lin);
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




int main() //main
{
    setlocale(LC_ALL,"portuguese");
    textbackground(BLACK);
    clrscr();

    textcolor(WHITE);
    gotoxy(27,1);printf("Clique em MAXIMIZAR para uma melhor experiência %c",24);
    Posicao_Cliente++;

    carregamento();// Função que imprime os nomes e as cores da tela de carregamento

    srand((unsigned)time(NULL));
    int temaaleatorio=0;
    temaaleatorio=rand()%5+1;
    TEMAS(temaaleatorio);// Primeiro tema escolhido de forma aleatória

    gotoxy(36,23);
    printf("BEM VINDO%c",289);
    for(int coluna=20; coluna<=46; coluna++){
        gotoxy(coluna,23);
        printf(" ");
        Sleep(100);
    }

    int comnd=4;
    while(comnd>1){
    gotoxy(20,18);printf(" <1>      INICIAR");

    gotoxy(20,24);printf(" <2> ALTERAR TEMA");

    gotoxy(20,30);printf(" <3>         SAIR");

    gotoxy(14,36);printf("mcroscas versão 1.0");

    gotoxy(45,24);printf("O QUE DESEJA? ");scanf("%d",&comnd);
    Beep(4000,100);
    if(comnd==2){

        PINTATUDO();
        CHAMATEMA();
    }
    if(comnd==3){
        break;
        gotoxy(1,40);}

    if(comnd!=3 && comnd!=1 && comnd!=2){
        gotoxy(45,24);
            printf("Valor Inválido  ");
            Sleep(500);
        PINTATUDO();
        }
    }
    if(comnd == 1)
    {
        PINTATUDO();
        char clientein[999];
        gotoxy(25,15);printf("O McRoscas agora possuí Clientes!");
        gotoxy(24,22);printf("Digite o primeiro nome do Cliente!");
        gotoxy(30,26);printf("Nome: ");
        gotoxy(36,26);scanf("%s", clientein);
        Beep(4000,100);
        PINTATUDO();
        int Tcliente=0;
        Tcliente=strlen(clientein); //lê o nome do cliente pra ver qnts letras tem
        if (Tcliente>43){ //se tiver mais q 43 ele executa a função que ajeita isso e printa certo sem bugar
            strcpy(clientein, PrintClient(clientein, temaaleatorio));
            gotoxy(14,11);
            printf("Cliente: %s", clientein);
        }
        else{
            gotoxy(14,11);
            printf("Cliente: %s", clientein);
        }

{
        textbackground(BLACK);
        textcolor(WHITE);

//Tabelas do programa//
        pintatela();
        textbackground(BLACK);
        int e[4];  // "e" é a variavel de escolha para as tabelas.



        int sorteio;
        int escolhacupom;
        int chances=3;

        gotoxy(35,36);
        printf("Carrinho(%d)",qtcarrinho);
        gotoxy(50,36);
        printf("Total: R$%.2f",total);// print o total no canto inferior direito;
        do  // esse "do" será como nosso lobby, o usuario voltara para ca para acessar outras tabelas ou carrinho.
        {

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
            printf(" 8 - Reiniciar.......................");
            gotoxy(13,31);
            printf(" 9 - Fechar Programa!................\n");
            gotoxy(51,23);
            printf(" O que deseja? ");
            scanf("%d",&e[0]);
            Beep(4000,100);
            pintatela();


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
                    Beep(4000,100);
                    if (e[1]==1)  // caso escolha pao de forma
                        Compra(paoDF, Ppaes, TpaoDF);

                    else if (e[1]==2)
                        Compra(paoF, Ppaes, TpaoF);

                    else if (e[1]==3)
                        Compra(paoD, Ppaes, TpaoD);

                    else if (e[1]==4)
                        Compra(paoMS, PpaoMS, TpaoMS);

                    else if (e[1]==5)
                        Compra(sonho, Psonho, Tsonho);

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
                    Beep(4000,100);
                    if (e[1]==1)
                        Compra(boloL, PboloL, TboloL);

                    else if (e[1]==2)
                        Compra(boloP, PboloP, TboloP);

                    else if (e[1]==3)
                        Compra(boloO, PboloO, TboloO);

                    else if (e[1]==4)
                        Compra(tortaS, PtortaS, TtortaS);

                    else if (e[1]==5)
                        Compra(tortaC, PtortaC, TtortaC);

                    else if (e[1]==6)
                        Compra(tortaG, PtortaG, TtortaG);

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
                    Beep(4000,100);
                    if (e[1]==1)
                        Compra(leite, Pleite, Tleite);

                    else if (e[1]==2)
                        Compra(iogurte, Piogurte, Tiogurte);

                    else if (e[1]==3)
                        Compra(queijo, Pqueijo, Tqueijo);

                    else if (e[1]==4)
                        Compra(requeijao, Prequeijao, Trequeijao);

                    else if (e[1]==5)
                        Compra(manteiga, Pmanteiga, Tmanteiga);

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
                    Beep(4000,100);
                    if (e[1]==1)
                        Compra(presuntoF, PpresuntoF, TpresuntoF);

                    else if (e[1]==2)
                        Compra(presuntoP, PpresuntoP, TpresuntoP);

                    else if (e[1]==3)  // caso escolha pao de forma
                        Compra(mortadelaP, PmortadelaP, TmortadelaP);

                    else if (e[1]==4)  // caso escolha pao de forma
                        Compra(mortadelaF, PmortadelaF, TmortadelaF);

                    else if (e[1]==5)  // caso escolha pao de forma
                        Compra(salame, Psalame, Tsalame);

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
                    Beep(4000,100);
                    if (e[1]==1)  // caso escolha pao de forma
                        Compra(doceL, PdoceL, TdoceL);

                    else if (e[1]==2)  // caso escolha pao de forma
                        Compra(balaL, PbalaL, TbalaL);

                    else if (e[1]==3)  // caso escolha pao de forma
                        Compra(cocadaB, PcocadaB, TcocadaB);

                    else if (e[1]==4)  // caso escolha pao de forma
                        Compra(cocadaC, PcocadaC, TcocadaC);

                    else if (e[1]==5)  // caso escolha pao de forma
                        Compra(biscoitoPC, PbiscoitoPC, TbiscoitoPC);

                    else if (e[1]==6)  // caso escolha pao de forma
                        Compra(suspiro, Psuspiro, Tsuspiro);

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
                    gotoxy(13,13);printf(" PRODUTO                             QT    PREÇO");
                    MostraCarrinho();

                    OpcoesCarrinho();
                    scanf("%d",&e[1]);
                    Beep(4000,100);

                    if (e[1]==1){ //inicio da pagina 2 do carrinho
                        do{
                            pintatela();
                            gotoxy(13,13);printf(" PRODUTO                             QT    PREÇO");
                            MostraCarrinho2();
                            OpcoesCarrinho();
                            scanf("%d",&e[2]);

                            if (e[2]==1){ // inicio pagina 3 do carrinho
                                pintatela();
                                gotoxy(13,13);printf(" PRODUTO                             QT    PREÇO");
                                MostraCarrinho3();
                                OpcoesCarrinho();
                                scanf("%d",&e[3]);

                                if (e[3]==1) //se ele escolher para ir para o proxmo carrinho (não tem um quarto) voltará para o primeiro. é só definir a variavel usada no segundo como 9 para sair de la e voltar para o primeiro;
                                    e[2]=9;

                                else if (e[3]==2){
                                        if (qtcarrinho==0){
                                        for(int linha=33; linha<=35; linha++){ //pinta a tela do carrinho
                                            for(int coluna=13; coluna<=67; coluna++){
                                                gotoxy(coluna,linha);
                                                printf(" ");}
                                            printf(" ");}

                                        gotoxy(13,34);
                                        printf(" Não há produtos!");
                                        Sleep(1000);
                                        }
                                    else{
                                        FecharCompra1();
                                    }
                                }

                                else if (e[3]==3)
                                    RemoverProduto(3);
                                else if (e[3]==9){}
                                else{
                                    gotoxy(13,32);
                                    printf(" Valor Inválido!");
                                    Sleep(1000);
                                }
                            }
                            //fim da pagina 3 do carrinho

                            else if (e[2]==2){
                                if (qtcarrinho==0){
                                    for(int linha=33; linha<=35; linha++){ //pinta a tela do carrinho
                                        for(int coluna=13; coluna<=67; coluna++){
                                            gotoxy(coluna,linha);
                                            printf(" ");}
                                        printf(" ");}

                                    gotoxy(13,34);
                                    printf(" Não há produtos!");
                                    Sleep(1000);
                                    }
                                else{
                                    FecharCompra1();
                                }
                            }
                            else if (e[2]==3)
                                RemoverProduto(2);
                            else if (e[2]==9){}
                            else{
                                gotoxy(13,32);
                                printf(" Valor Inválido!");
                                Sleep(1000);
                            }
                            pintatela();
                        }while(e[2]!=9);
                    } //fim da pagina 2 do carrinho

                    else if (e[1]==2){
                        if (qtcarrinho==0){
                            for(int linha=33; linha<=35; linha++){ //pinta a tela do carrinho
                                for(int coluna=13; coluna<=67; coluna++){
                                    gotoxy(coluna,linha);
                                    printf(" ");}
                                printf(" ");}

                            gotoxy(13,34);
                            printf(" Não há produtos!");
                            Sleep(1000);
                            }
                        else{
                            FecharCompra1();
                        }
                    }

                    else if (e[1]==3)
                        RemoverProduto(1);

                    else if (e[1]==9){}

                    else{
                        gotoxy(13,32);
                        printf(" Valor Inválido!");
                        Sleep(1000);
                    }

                    pintatela();
                }while(e[1]!=9);
                break;

            case 7:
                gotoxy(27,17);printf("Quer tentar a sorte e talvez");
                gotoxy(27,18);printf("ganhar um cupom de desconto?");
                gotoxy(27,20);printf("Digite um número entre 0 e 20");
                gotoxy(24,21);printf("se acertar leva desconto de 20 porcento!");
                gotoxy(30,24);printf(" <1> Sim!");
                gotoxy(43,24);printf(" <2> Não!");
                gotoxy(41,24);scanf("%d",&escolhacupom);
                Beep(4000,100);
                pintatela();

                if (escolhacupom==1 && chances>0 && desconto==0){
                    do{
                        gotoxy(21,20);
                        printf("Vamos lá! Escolha um numero entre 0 e 20!");
                        srand( (unsigned)time(NULL) );
                        sorteio=rand()%21;
                        gotoxy(40,24);
                        //printf("%d", sorteio); //Printf usado para ver o número aleatório do sorteio
                        scanf("%d",&escolhacupom);
                        Beep(4000,100);
                        pintatela();

                        if (escolhacupom==sorteio){
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
                        gotoxy(31,22);printf("O seu cupom é: ");
                        gotoxy(46,22);printf("%dMcR",desconto);
                        gotoxy(20,24);printf("Ao fechar a compra o desconto será aplicado!");
                        Sleep(2000);
                        chances=0;
                        gotoxy(22,27);printf("Aperte qualquer tecla para confirmar!");
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
                        Sleep(2500);
                        pintatela();}
                    }
                    }while(chances!=0);
                }
                else if (chances==0 || desconto!=0){
                    gotoxy(19,22);printf("Suas chances acabaram ou você ja ganhou!");
                    gotoxy(22,24);printf("Tente novamente na proxima compra!");
                    Sleep(1500);
                    pintatela();
                    }
            break;

            case 8:
                reiniciar();
                break;
                }
            }
        while(e[0]!=9);
    }}
//Tela de saída//
    PINTATUDO();
    char voce[15]={'V','o','c','ê',' ','é',' ','E','s','p','e','c','i','a','l'};
    gotoxy(34,17);
    for(int i=0;i<15;i++){
        printf("%c",voce[i]);
        Sleep(100);}

    gotoxy(33,25);
    char mcroscas[17]={'A',' ','E','q','u','i','p','e',' ','M','c','R','o','s','c','a','s'};
    for(int i=0;i<17;i++){
        printf("%c",mcroscas[i]);
        Sleep(50);}

    gotoxy(38,27);
    char angra[10]={'A','g','r','a','d','e','c','e'};
    for(int i=0;i<10;i++){
        printf("%c",angra[i]);
        Sleep(50);}
    gotoxy(33,29);
    char pref[17]={'A',' ','S','u','a',' ','P','r','e','f','ê','r','e','n','c','i','a'};
    for(int i=0;i<17;i++){
        printf("%c",pref[i]);
        Sleep(50);}
    getch();
    gotoxy(1,40);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define VP 50
#define VSP 100
#define VUP 200
#define furia_max 40


void rand_ini()
{
    long long unsigned *tempo;
    srand(time(&tempo));
}

void gotoxy(int y,int x)
{
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){y,x});
}

void dalay(int x,int y)
{
    int j,k;
    for(j = 0; j < x ; j++)
            for(k = 0 ; k < y ; k++)
                1==1;
}

typedef struct personagem
{
    char nome[20];
    char Classe[10];
    char nomeSkill[20];
    char nomeSkill2[20];
    char nomeSkill3[20];
    char nomeSkill4[20];
    int lv;
    int hp;
    int hp_max;
    int def;
    int atq;
    int DanoSkill;
    int DanoSkill2;
    int DanoSkill3;
    int DanoSkill4;
    int atqm;
    int mp;
    int furia;
    int xp;
    unsigned int pocao;
    unsigned int S_pocao;
    unsigned int U_pocao;

}personagem;

typedef struct inimigos
{
    int hp;
    int def;
    int xp;
    int dnsk1;
    int dnsk2;
    int dnsk3;
    int qtdSk;
    int qtd_drop;
    int tela;
    int R_vida;
    int a_print;
    int altura_PC_print;
    char nome[15];
    char nomeSk1[30];
    char nomeSk2[30];
    char nomeSk3[30];
}inimigos;

void cria_personagem(personagem *prota)
{
    int opc;
    do
    {
        puts("1 - guerreiro");
        printf("\nInforme a classe desejada -----> ");
        scanf("%d",&opc);
        system("cls");
    }while(opc != 1);
    switch(opc)
    {
        case 1:
            gets(prota->nome);
            strcpy(prota->Classe,"Guerreiro");
            prota->lv = 1;
            prota->hp = 200;
            prota->hp_max = 200;
            prota->def = 30;
            prota->atq = 20;
            prota->furia = 0;
            prota->pocao = 5;
            prota->S_pocao = 0;
            prota->U_pocao = 0;
            prota->DanoSkill = 35;
            prota->DanoSkill2 = 45;
            prota->DanoSkill3 = 55;
            prota->DanoSkill4 = 65;
            prota->xp = 0;
            strcpy(prota->nomeSkill,"Corte cruzado");
            strcpy(prota->nomeSkill2,"Lamina Furiosa");
            strcpy(prota->nomeSkill3,"Lamina Flamejante");
            strcpy(prota->nomeSkill4,"Corte Demoniaco");
            break;
    }
    printf("\nInforme seu nome ----> ");
    gets(prota->nome);
    system("cls");
}

void cria_inimigos(inimigos *C_inimigos,int x)
{
    switch(x)
    {
        case 0:
            strcpy(C_inimigos->nome,"Zumbi");
            strcpy(C_inimigos->nomeSk1,"Halito mortal");
            //C_inimigos->hp = 1;
            C_inimigos->dnsk1 = 20;
            C_inimigos->hp = 30;
            C_inimigos->xp = 10;
            C_inimigos->def = 10;
            C_inimigos->qtdSk = 1;
            C_inimigos->tela = 1;
            C_inimigos->a_print = 4;
            C_inimigos->altura_PC_print = 18;
            C_inimigos->R_vida = 0;
            C_inimigos->qtd_drop = 1;
            break;
        case 1:
            strcpy(C_inimigos->nome,"Fantasma");
            strcpy(C_inimigos->nomeSk1,"Toque sombrio");
            strcpy(C_inimigos->nomeSk2,"Vento do submundo");
            C_inimigos->hp = 1;
            C_inimigos->dnsk1 = 40;
            C_inimigos->dnsk2 = 60;
            C_inimigos->hp = 50;
            C_inimigos->xp = 20;
            C_inimigos->def = 20;
            C_inimigos->qtdSk = 2;
            C_inimigos->tela = 2;
            C_inimigos->a_print = 4;
            C_inimigos->altura_PC_print = 18;
            C_inimigos->R_vida = 0;
            C_inimigos->qtd_drop = 3;
            break;
        case 2:
            strcpy(C_inimigos->nome,"Morcego");
            strcpy(C_inimigos->nomeSk1,"Mordida Violenta");
            strcpy(C_inimigos->nomeSk2,"Garra Violenta");
            strcpy(C_inimigos->nomeSk3,"Sangue suga");
            //C_inimigos->hp = 1;
            C_inimigos->dnsk1 = 60;
            C_inimigos->dnsk2 = 80;
            C_inimigos->dnsk3 = 90;
            C_inimigos->hp = 70;
            C_inimigos->xp = 30;
            C_inimigos->def = 40;
            C_inimigos->qtdSk = 3;
            C_inimigos->tela = 2;
            C_inimigos->a_print = 4;
            C_inimigos->altura_PC_print = 18;
            C_inimigos->R_vida = 20;
            C_inimigos->qtd_drop = 5;
            break;
        case 1000:
            strcpy(C_inimigos->nome,"Ogro");
            strcpy(C_inimigos->nomeSk1,"machado Mortal");
            //C_inimigos->hp = 1;
            C_inimigos->dnsk1 = 80;
            C_inimigos->hp = 300;
            C_inimigos->xp = 200;
            C_inimigos->def = 50;
            C_inimigos->qtdSk = 1;
            C_inimigos->tela = 1000;
            C_inimigos->a_print = 0;
            C_inimigos->altura_PC_print = 22;
            C_inimigos->R_vida = 0;
            break;
        default:
            strcpy(C_inimigos->nome,"Zumbi");
            strcpy(C_inimigos->nomeSk1,"Halito mortal");
            //C_inimigos->hp = 1;
            C_inimigos->dnsk1 = 20;
            C_inimigos->hp = 10;
            C_inimigos->xp = 200;
            C_inimigos->def = 10;
            C_inimigos->qtdSk = 1;
            C_inimigos->tela = 1;
            C_inimigos->a_print = 4;
            C_inimigos->altura_PC_print = 18;
            C_inimigos->R_vida = 0;
    }
}

void cria_tela_x(int x ,int y, int inicio)
{
    int i,j;
    for(i = inicio ; i < (x + inicio) ; i++)
        {
            gotoxy(i,y);
                printf("*");
        }
}

void cria_tela_y(int x ,int y, int inicio)
{
    int i,j;
    for(i = inicio ; i < (y + inicio) ; i++)
        {
            gotoxy(x,i);
                printf("*");
        }
}

void batle_logo()
{
    system("cls");
    gotoxy(20,10);
    puts("000000              00000000000   0");
    gotoxy(20,11);
    puts("0     0                  0        0");
    gotoxy(20,12);
    puts("0     0       0          0        0      00000");
    gotoxy(20,13);
    puts("0     0      0 0         0        0      0");
    gotoxy(20,14);
    puts("000000      0   0        0        0      0");
    gotoxy(20,15);
    puts("0     0    0000000       0        0      00000");
    gotoxy(20,16);
    puts("0     0   0       0      0        0      0");
    gotoxy(20,17);
    puts("0     0  0         0     0        0      0");
    gotoxy(20,18);
    puts("000000  0           0    0        000000 00000");
}

void inimigo_L(int y,int x,int tipo_ini)
{

    switch(tipo_ini)
    {
        case 1:
                gotoxy(x,y);
            printf("           (()))");
            y++;
        gotoxy(x,y);
            printf("          /|x x|   ,^.");
            y++;
        gotoxy(x,y);
            printf("         /\\( - )   |||");
            y++;
        gotoxy(x,y);
            printf(" ___.-._/\\/        |||       _T_");
            y++;
        gotoxy(x,y);
            printf("/=`_'-'-'/  !!     |||   .-.[:|:].-.");
            y++;
        gotoxy(x,y);
            printf("|-{-_-_-}     !    ===_ /\\|  ~'~  |/");
            y++;
        gotoxy(x,y);
            printf("(-{-_-_-}    !      E]_|\\/ \\--|-|''''|");
            y++;
        gotoxy(x,y);
            printf(" \\{_-_-_}   !       O  `'  '=[:]| A  |");
            y++;
        gotoxy(x,y);
            printf("  }-_-_-}                  /****|  P |");
            y++;
        gotoxy(x,y);
            printf("  {-_|-_}                 /*****`.__.'");
            y++;
        gotoxy(x,y);
            printf("  {-_|_-}               []*/***\\*[]");
            y++;
        gotoxy(x,y);
            printf("  {_-|-_}               | \\     / |");
            y++;
        gotoxy(x,y);
            printf("  {_-|-_}               | |     | |");
            y++;
        gotoxy(x,y);
            printf("  %%%%@ @%%%%             <\\\\\\)     (///>");
        break;
        case 2:
            gotoxy(x,y);
            printf(",^.");
            y++;
            gotoxy(x,y);
            printf("||| 		           .'``'.      ...");
            y++;
            gotoxy(x,y);
            printf("|||       _T_	           :o  o `....'`  ;");
            y++;
            gotoxy(x,y);
            printf("|||   .-.[:|:].-.	   `. O         :''");
            y++;
            gotoxy(x,y);
            printf("===_ /\\|  ~'~  |/	    `':          `.");
            y++;
            gotoxy(x,y);
            printf(" E]_|\\/ \\--|-|''''|	      `:.          `.");
            y++;
            gotoxy(x,y);
            printf(" O  `'  '=[:]| A  |		: `.         `.");
            y++;
            gotoxy(x,y);
            printf("        /****|  P |		`..'`...       `.");
            y++;
            gotoxy(x,y);
            printf("       /*****`.__.'			`...     `.");
            y++;
            gotoxy(x,y);
            printf("      []*****\\*[]			   `...  `.");
            y++;
            gotoxy(x,y);
            printf("      | \\     / |        			`````.");
            y++;
            gotoxy(x,y);
            printf("      | |     | | 	");
            y++;
            gotoxy(x,y);
            printf("    <\\\\\\)     (///>");
            break;
        case 1000:
            gotoxy(x,y);
            printf("	                          (\\   / )");
            y++;
            gotoxy(x,y);
            printf("		                  |_)//(_|");
            y++;
            gotoxy(x,y);
            printf("		                  |4\\_/4)(");
            y++;
            gotoxy(x,y);
            printf("		                 '( (_  -)D");
            y++;
            gotoxy(x,y);
            printf("		                   ) _)  /\\,__");
            y++;
            gotoxy(x,y);
            printf("		                 _,\\_._,/ /   `)");
            y++;
            gotoxy(x,y);
            printf(",^.		    \\.,_,,      ( _   ~ .   ,   \\");
            y++;
            gotoxy(x,y);
            printf("|||		     \\   (\\      \\(   \\/  _)(    )");
            y++;
            gotoxy(x,y);
            printf("|||       _T_	      \\   \\\\      )). _______>-. `*");
            y++;
            gotoxy(x,y);
            printf("|||   .-.[:|:].-.      \\  /\\\\    _ '( /   /\\ '\  _)");
            y++;
            gotoxy(x,y);
            printf("===_ /\\|  ~'~  |/       \\( ,\\\\ .-'  '/    \\/    \/");
            y++;
            gotoxy(x,y);
            printf(" E]_|\\/ \\--|-|''''|     '    \\><)_'.)|/\\/\\/\\/\\/\\|");
            y++;
            gotoxy(x,y);
            printf(" O  `'  '=[:]| A  |            \\) ,( |\\/\\/\\/\\/\\/|");
            y++;
            gotoxy(x,y);
            printf("	 /****|  P |            ' ((  \\    /\\    /\n");
            y++;
            gotoxy(x,y);
            printf("       /*****`.__.'             ((((  \\___\\/___/)");
            y++;
            gotoxy(x,y);
            printf("      []*/***\\*[]                ((,) /   ((()   )");
            y++;
            gotoxy(x,y);
            printf("      | \\     / |                 *..-,  (()(*   /");
            y++;
            gotoxy(x,y);
            printf("      | |     | |                _//.   ((() .*");
            y++;
            gotoxy(x,y);
            printf("    <\\\\\\\)     (///>      _____ //,/* ___ ((( ', ___");
            y++;
            gotoxy(x,y);
            printf("		                           ((  )*");
            y++;
            gotoxy(x,y);
            printf("		                            / /");
            y++;
            gotoxy(x,y);
            printf("		                          _/,/'");
            y++;
            gotoxy(x,y);
            printf("		                        /,/,*");
            break;

    }

}

void caracteristicas(personagem *prota,int y)
{

    int tamanho1,tamanho2;
    tamanho1 = strlen(prota->nome);
    tamanho2 = strlen(prota->Classe);
        cria_tela_x(43+tamanho1+tamanho2,y,17);
        cria_tela_y(60+tamanho1+tamanho2,3,y);
        y++;
    gotoxy(17,y);
        printf("Nome:%s Classe:%s Level:%d HP:%d Energia:%d",prota->nome,prota->Classe,
    prota->lv,prota->hp,prota->furia);
    y++;
    cria_tela_x(43+tamanho1+tamanho2,y,17);
}

void dados_game(personagem prota,int altura)
{
    gotoxy(61,0 + altura);
        printf("                ");
    gotoxy(61,0 + altura);
        printf("LV - %d",prota.lv);
    gotoxy(61,1 + altura);
        printf("                 ");
    gotoxy(61,1 + altura);
        printf("HP - %d",prota.hp);
    gotoxy(61,2 + altura);
            printf("                 ");
    if(prota.pocao > 0)
    {
        gotoxy(61,2 + altura);
            printf("QTD pocoes - %d",prota.pocao);
    }

    gotoxy(61,3 + altura);
        printf("                 ");
    gotoxy(61,3 + altura);
        printf("QTD S_pocoes - %d",prota.S_pocao);

    gotoxy(61,4 + altura);
        printf("                 ");
    gotoxy(61,4 + altura);
        printf("QTD U_pocoes - %d",prota.U_pocao);

    gotoxy(61,5 + altura);
        printf("                 ");
    gotoxy(61 , 5 + altura);
        printf("Profundidade - %d",altura);
        //************************************************************************************
}
void  caracteristicas_ini(inimigos *antagonista)
{
    int tamanho1;

    tamanho1 = strlen(antagonista->nome);
    gotoxy(0,0);
    printf("%s Hp:%d",antagonista->nome,antagonista->hp);
    cria_tela_x(tamanho1 + 8,1,0);
    cria_tela_y(tamanho1 + 8,2,0);
}

int menu_batalha(int x , int y)
{
        int opc = 0;
        do
        {
            gotoxy(x,y);
                printf("1 - Ataque");
                y++;
            gotoxy(x,y);
                printf("2 - Habilidades");
                y++;
            gotoxy(x,y);
                printf("3 - item");
                y++;
            gotoxy(x,y);
                printf("4 - Fugir");
                y++;
            gotoxy(x,y);
            printf("---> ");
            scanf("%d",&opc);
            return opc;
        }while(opc < 1 && opc > 5);
}

void batalha(inimigos *C_inimigo,personagem *C_personagem, int *opc )
{
    unsigned int dano,cont,dano_inimigo,tipo_atq_ini,opcS,recuperacao,opcI;
    unsigned int recuperacao_ini;
          recuperacao_ini = 0;
          cont = 0;
          gotoxy(0,26);
          switch(*opc)
          {
            case 1:
                dano = (C_personagem->atq - (C_inimigo->def * 0.5)) + rand() %
                C_personagem->lv;
                C_inimigo->hp-=dano;
                C_personagem->furia+=5;
                printf("Voce causou %d de dano e recebou 5 de furia\n",dano);
                cont++;
                if(C_personagem->furia > furia_max)
                    C_personagem->furia = furia_max;
                break;
            case 2:
                    if(C_personagem->lv >= 5 && C_personagem->furia >= 5)
                        printf("\n1 - %s\n",C_personagem->nomeSkill);
                    if(C_personagem->lv >= 10 && C_personagem->furia >= 8)
                        printf("2 - %s\n",C_personagem->nomeSkill2);
                    if(C_personagem->lv >= 15 && C_personagem->furia >= 13)
                        printf("3 - %s\n",C_personagem->nomeSkill3);
                    if(C_personagem->lv >= 20 && C_personagem->furia >= 18)
                        printf("4 - %s\n",C_personagem->nomeSkill4);
                  puts("5 - Voltar");
                  scanf("%d",&opcS);
                  switch(opcS)
                  {
                    case 1:
                        dano = (C_personagem->DanoSkill - (C_inimigo->def * 0.5))
                        + rand() % C_personagem->lv;
                        printf("Voce executou %s e causou %d de dano\n",
                        C_personagem->nomeSkill,dano);
                        if(C_personagem->furia > furia_max)
                            C_personagem->furia = furia_max;
                        cont++;
                        break;
                    case 2:
                        dano = (C_personagem->DanoSkill2 - (C_inimigo->def * 0.5))
                        + rand() % C_personagem->lv;
                        printf("Voce executou %s e causou %d de dano\n",
                        C_personagem->nomeSkill2,dano);
                        cont++;
                        break;
                    case 3:
                        dano = (C_personagem->DanoSkill3 - (C_inimigo->def * 0.5))
                        + rand() % C_personagem->lv;
                        printf("Voce executou %s e causou %d de dano\n",
                        C_personagem->nomeSkill3,dano);
                        cont++;
                        break;
                    case 4:
                        dano = (C_personagem->DanoSkill4 - (C_inimigo->def * 0.5))
                        + rand() % C_personagem->lv;
                        recuperacao = dano * 0.6;
                        C_personagem->hp+=recuperacao;
                        printf("Voce executou %s e causou %d de dano e absorveu %d de hp\n",
                        C_personagem->nomeSkill4,dano,recuperacao);
                        cont++;
                        break;
                    case 5:
                        cont = 0;
                        break;
                    default:
                        puts("Opção não existe");
                  }
                  if(cont == 1)
                    C_inimigo->hp-=dano;
                break;
            case 3:
                    if(C_personagem->pocao > 0)
                        printf("\n1 - pocao HP Quantidade: %d\n",C_personagem->pocao);
                    if(C_personagem->S_pocao > 0)
                        printf("2 - Super pocao HP Quantidade: %d\n",C_personagem->S_pocao);
                    if(C_personagem->U_pocao > 0)
                        printf("3 - Ultra pocao HP Quantidade: %d\n",C_personagem->U_pocao);
                    puts("4 - Voltar");
                    scanf("%d",&opcI);
                    switch(opcI)
                    {
                        case 1:
                            if(C_personagem->pocao > 0)
                            {
                                C_personagem->hp+= VP;
                                C_personagem->pocao--;
                                printf("Voce recuperou %d de vida\n",VP);
                                cont++;
                            }
                            break;
                        case 2:
                            if(C_personagem->S_pocao > 0)
                            {
                                C_personagem->hp+= VSP;
                                C_personagem->S_pocao--;
                                printf("Voce recuperou %d de vida\n",VSP);
                                cont++;
                            }
                            break;
                        case 3:
                            if(C_personagem->U_pocao > 0)
                            {
                                C_personagem->hp+= VUP;
                                C_personagem->U_pocao--;
                                printf("Voce recuperou %d de vida\n",VUP);
                                cont++;
                            }
                            break;
                        case 4:
                            break;
                        default:
                        puts("Opção não existe");
                    }
                break;
            case 4:
                *opc = 4;
                break;
            default:
                puts("Opção não existe");
          }
          if(C_personagem->hp > C_personagem->hp_max)
                        C_personagem->hp = C_personagem->hp_max;
        if(cont == 1 && C_inimigo->hp > 0)
        {
            tipo_atq_ini = (rand() % C_inimigo->qtdSk) + 1 ;
            switch(tipo_atq_ini)
            {
                case 1:
                    dano_inimigo = (C_inimigo->dnsk1 - (C_personagem->def * 0.5)) + rand() % 15;
                    printf("\n%s executou %s ",C_inimigo->nome,
                    C_inimigo->nomeSk1);
                    break;
                case 2:
                    dano_inimigo = C_inimigo->dnsk2 - (C_personagem->def * 0.5);
                    printf("\n%s executou %s ",C_inimigo->nome,
                    C_inimigo->nomeSk2);
                    break;
                case 3:
                    dano_inimigo = C_inimigo->dnsk3 - (C_personagem->def * 0.5);
                    if(C_inimigo->R_vida > 0)
                        recuperacao_ini = dano_inimigo * (C_inimigo->R_vida / 100);
                    printf("\n%s executou %s ",C_inimigo->nome,
                    C_inimigo->nomeSk3);
                    break;
                default:
                    dano_inimigo = C_inimigo->dnsk1 - (C_personagem->def * 0.5) + rand() % 15;
                    printf("\n%s executou %s ",C_inimigo->nome,
                    C_inimigo->nomeSk1);
            }
            if(dano_inimigo < 0)
                dano_inimigo = 0;
            printf("e causou %d de dano ",dano_inimigo);
            if(recuperacao_ini > 0)
            {
                printf("e recuperou %d de vida\n",recuperacao_ini);
                C_inimigo->hp+=recuperacao_ini;
            }
            else
                printf("\n");
            C_personagem->hp-=dano_inimigo;
        }
        if(cont == 1)
            system("pause>>NULL");
        system("cls");
        fflush(stdin);
}

void level_up(personagem * player)
{
    if(player->lv == 1 && player->xp >= 30 )
    {
        gotoxy(2,0);
        player->lv++;
        printf("Voce subiu para o level:%d",player->lv);
        player->hp_max+=20;
        player->xp = 0;
        player->atq+=5;
        player->def+=10;
        player->hp = player->hp_max;
        system("pause>>NULL");
    }
    if(player->lv == 2 && player->xp >= 50 )
    {
        player->lv++;
        gotoxy(2,0);
        printf("Voce subiu para o level:%d",player->lv);
        player->hp_max+=25;
        player->xp = 0;printf("3 - item");
        player->atq+=8;
        player->def+=12;
        player->hp = player->hp_max;
        system("pause>>NULL");
    }
    if(player->lv == 3 && player->xp >= 70 )
    {
        player->lv++;
        gotoxy(2,0);
        printf("Voce subiu para o level:%d",player->lv);
        player->hp_max+=25;
        player->xp = 0;
        player->atq+=10;
        player->def+=15;
        player->hp = player->hp_max;
        system("pause>>NULL");
    }
    if(player->lv == 4 && player->xp >= 90 )
    {
        player->lv++;
        gotoxy(2,0);
        printf("Voce subiu para o level %d e adiquiriu a abilidade %s",player->lv,player->nomeSkill);
        player->hp_max+=25;
        player->xp = 0;
        player->atq+=10;
        player->def+=15;
        player->hp = player->hp_max;
        system("pause>>NULL");
    }
    if(player->lv == 5 && player->xp >= 120 )
    {
        player->lv++;
        gotoxy(2,0);
        printf("Voce subiu para o level:%d",player->lv);
        player->hp_max+=30;
        player->xp = 0;
        player->atq+=12;
        player->def+=15;
        player->hp = player->hp_max;
        system("pause>>NULL");
    }
}

void fisica1(int *x,int *y)
{
        if(*x < 1)
            *x = 1;
        if(*y < 1)
            *y = 1;
        if(*x > 59)
            *x = 59;
        if(*x >= 15 && *y > 4 && *x < 22)
            *x = 14;
        if(*x <= 15 && *y > 29)
            *y = 29;
        if( *x > 15 && *x < 23 && *y >= 5)
            *x = 23;
        if(*x > 22 && *x > 37 && *y > 4 && *x < 45)
            *x = 37;
        if(*x > 45 && *x <= 46 && *y > 4)
            *x = 47;
        if( *x > 22 && *x < 45 && *y > 64)
            *y = 64;
}

void mapa_1()
{
    cria_tela_y(0,30,0);//parede principal esquerda
    cria_tela_y(60,105,0);//parede principal direira
    cria_tela_y(15,25,5);
    cria_tela_y(45,100,5);
    cria_tela_y(22,60,5);
    cria_tela_y(38,60,5);
    cria_tela_x(7,5,15);
    cria_tela_x(7,5,38);
    cria_tela_x(16,30,0);
    cria_tela_x(17,65,22);
}

void boss(int *boss_C,int *batle)
{

        switch(*boss_C)
        {
            case 1:
                puts("abc");
                *batle = 1000;
                *boss_C++;
                break;
            case 2:
                *batle = 2000;
                *boss_C++;
                break;
            case 3:
                *batle = 3000;
                *boss_C++;
                break;
            case 4:
                *batle = 4000;
                break;
        }
}

void drop(personagem *player,inimigos *mob)
{
    int item;
    rand_ini();
    item = (rand()%mob->qtd_drop) + 1;
    gotoxy(0,0);
    switch(item)
    {
        case 1:
            printf("voce adiquiriu pocao");
            player->pocao+=1;
            break;
        case 3:
            printf("voce adiquiriu super pocao");
            player->S_pocao+=1;
            break;
        case 6:
            printf("voce adiquiriu ultra pocao");
            player->U_pocao+=1;
            break;
        default:
            printf("Inimigo nao deixou item");
    }
}
int main()
{
    char a;
    int x = 01,y = 04,x2,y2,batle,b,C_mapa = 1,tipo_ini,boss_C = 1;
    inimigos mob;
    personagem player;
    cria_personagem(&player);
    rand_ini();
    while(player.hp > 0)
    {
        dados_game(player,y);
        if(C_mapa == 1)
        {
            mapa_1();
            C_mapa--;
        }
        while( a != 's' &&! (a=kbhit()))
        {

            gotoxy(x,y);
                printf("#");
            x2 = x;
            y2 = y;
        }
        a=getch();
        switch(a)
        {
            case 'H':
                y--;
                gotoxy(61,6 + y);
                    printf("                 ");
                break;
            case 'P':
                y++;
                gotoxy(61,-1 + y);
                    printf("                 ");
                break;
            case 'K':
                x--;
                break;
            case 'M':
                x++;
                break;
        }
        fisica1(&x,&y);
        batle = rand() % 50;
        if(y <= 105)
            tipo_ini = rand() % 3;
        else
            {
                boss(&boss_C,&tipo_ini);
                batle = 2;
            }
        if(batle == 2)
        {
            //printf("%d/n",tipo_ini);
            //system("pause");
            cria_inimigos(&mob,tipo_ini);
            batle_logo();
            system("pause>>NULL");
            system("cls");
            fflush(stdin);
            while(mob.hp > 0 && player.hp > 0 && b != 4)
            {
                inimigo_L(mob.a_print,25,mob.tela);
                caracteristicas_ini(&mob);
                caracteristicas(&player,mob.altura_PC_print);
                b = menu_batalha(0,19);
                batalha(&mob,&player,&b);
            }
            b = 0;

            if(mob.hp <= 0 && boss_C == 2)
            {
                puts("parabens por derrotar o chefe! continua na fase 2");
                player.hp = 0;
            }
            if(mob.hp <= 0)
            {
                player.xp+=mob.xp;
                gotoxy(0,0);
                    printf("Voce derrotou %s e ganhou %d de experiencia",mob.nome,mob.xp);
                    system("pause>>NULL");
                gotoxy(0,0);
                    printf("                                                   ");
                gotoxy(0,0);
                    drop(&player,&mob);
                system("pause>>NULL");
                gotoxy(0,0);
                    printf("                                           ");
            }
            C_mapa++;
        }
        level_up(&player);
        gotoxy(2,0);
                printf("                                             ");
        fflush(stdin);
        gotoxy(x2,y2);
                printf(" ");
    }
    if(player.hp <= 0 )
    {
        gotoxy(30,30);
            puts("Game Over");
    }

}

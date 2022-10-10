#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>
int score(int tentatives)
{
int score;
 if((tentatives==7)||(tentatives==6)||(tentatives==5))
   {score=4;}
 if((tentatives==4)||(tentatives==3))
   {score=3;}
if (tentatives==2)
   {score=2;}
if (tentatives==1)
   {score=1;}


return (score);
}


int verif (int tab[],int m,int Y)
{ int verif=0,i;
    for(i=0;i<Y;i++)
    {
     if(tab[i]==m)
        {verif=1;}
    }
    return (verif);
}

int main ()
{
    int i,x,N,choix,w,p,O,ascii,j,q,g,k,l,s=0,trouve=0,result,d=0,b,y,h,m,z,tentatives=6,verife;
    int SCORE[30];
    int B[10];
    int D[30];
    int scor[20];
    char * car;
    int ch='*';
    char c;
    char CACHE[11]="";
    char M[11]="";
    char nom[11]="";
    char tab [6] [11]= {{'f','a','c','u','l','t','e','\0'},{'b','u','r','e','a','u','\0'},{'p','r','o','j','e','t','\0'},
        {'a','l','g','o','r','i','t','h','m','e','\0'}, {'o','r','d','i','n','a','t','e','u','r','\0'},{'k','h','a','l','i','l','\0'}};
    char tab2 [6] [11]= {{'f','a','c','u','l','t','e','\0'},{'m','a','g','i','c','\0'},{'p','r','o','j','e','t','\0'},
            {'a','l','g','o','r','i','t','h','m','e','\0'}, {'d','o','c','u','m','e','n','t','\0'},{'r','o','u','d','e','i','n','a','\0'}};
    char K[20]="";
    char G[20]="";
    char T[20]="";
    char NOM[30][30];
    int A,f,v;


        printf("\t****************************************************************************************************\n");
        printf("\t***************************************** BIENVENUE ************************************************\n");
        printf("\t****************************************************************************************************\n\n\n");

        printf("\t\t\t\t******* Veuillez choisir un jeu *******\n\n\t\t\t\t\t1-Pendu\n\t\t\t\t\t2-Motus\n\t\t\t\t\t3-Quitter\n\n\t\t");


        do
        {
            printf("tapper ton choix ");
            scanf("%d",&choix);
        }
        while ((choix!=1)&&(choix!=2)&&(choix!=3));

   f=0;
         do{
            if (choix==1)
            {  printf("Bienvenue dans le Pendu !\n\n");
                  printf("donner votre nom\n");
                scanf("%s",nom);


                srand (time (NULL));
                x=rand()%6;

                for (i=0; i<11; i++)
                N =  strlen( tab[x]);

                for(i=0; i<=N; i++)
                    M[i]=tab[x][i];

                for(i=0; i<=(N-1); i++)
                    CACHE[i]='*';
                printf(" le mot chiffre est : \n");
                for(i=0; i<=(N-1); i++)
                    printf("%c ",CACHE[i]);

                tentatives=7;







 do{
 printf("il vous reste %i tentatives\n ",tentatives);
 printf("donner une lettre \n");
 scanf(" %c",&c);
N=10;

 if (c =='?')
 {



              for(i=0;i<=10;i++)
                   {if (CACHE[i]=='*')
                        {s=s+1;}
                   }
    /*controle si le caractere = ? pour help alors jiai calculer combien il y a du * pour savoir le taille de tab B */
    /* partie */
i=0;
j=0;
    while (i<N)
          {
            if(CACHE[i]=='*')
              {
                {B[j]=i;}
              }
    i=i+1;
    j=j+1;
  /* j'ai utilisé while pour verifier combien il y a de * dand cache et puis remplir le tab B par les indices des cases qui contient des * */
  /* je n'ai pas utilisé pour car elle ne veut pa fonctionner */
          }
   //s est le nombre des etoiles dans le mot

    srand (time (NULL));
     k=rand()%s;
     g=B[k];
     CACHE[g]=M[g];
      for(i=0;i<=(N-1);i++)
    printf("%c",CACHE[i]);
    O = (int )'*';
 for(i=0;i<N;i++){
ascii=(int)CACHE[i];
D[i]=ascii;
 }

     printf(" nombre de tentatives restants est %i\n",tentatives);
     /*k est un indice d'une case de tab B alors B[k]nous donne un indice d'une case de tab cache qui contient une *
     et on va l'écraser et insérer le continue de case M[k] de tableau M qui contient le caractere */
 }

else
 if ((c>='a')&&(c<='z'))
 {
 l=0;
 for (i=0;i<=N;i++)
 {if (c==M[i])
 {CACHE[i]=c;}
 else
l=l+1;
 }
 if (l==(N+1))
    tentatives=tentatives-1;

  for(i=0;i<11;i++)
  {printf("%c",CACHE[i]);}

 O = (int )'*';
 for(i=0;i<N;i++)
 {
ascii=(int)CACHE[i];
D[i]=ascii;
 }
 } if(verif(D,O,N)==0)
      printf("yeeey vous avez gagné\n");
 }while ((verif(D,O,N))&&( tentatives!=0 ));



                printf(" 1-rejouer\n");
                printf(" 2-score\n");
                printf(" 3-retour au menue\n");
                printf(" 4-quitter\n");

                scanf("%i",&z);
                if(z==2)
                {q=score(tentatives);
                printf("votre score est %i\n",q);}
                if(z==4)
                   {printf("au revoir\n");}



            }

 } while (z==1);

             do {
                    if (choix==2)
{


            printf("donner votre nom\n");
            scanf("%s",nom);
    srand (time (NULL));
     b=rand()%6;
     m=strlen(tab2[b]);
     for(i=0;i<m;i++)
        K[i]=tab2[b][i];
    G[0]=K[0];
    T[0]=K[0];
    for(i=1;i<=m;i++)
        T[i]='-';





       do {



    printf("%s\n",T);
    printf("il vous reste %i tentatives\n",tentatives);
    printf(" donner le mot\n");
    scanf(" %s",G);
    x=strlen(K);
    y=strlen(G);

     if (strcmp(G,"?")==0)
     { srand(time(NULL));
     h=rand()%x;
     T[h]=K[h];
         }

    for(i=1;i<=x;i++)
       { if (G[i]==K[i])
      {T[i]=K[i];}
       }
       i=0;
     do{
    if (G[i]==K[i])
    {verife=1;
    i++;
    } else verife =0;}  while(verife!=0);

       if(verife==0)
         {tentatives=tentatives-1;}
       printf("%s\n",T);
for(i=0;i<=x;i++)
    {
    for(j=0;j<=x;j++)
       {
        if ((G[i]==K[j])&&(i!=j))
            {printf("la lettre de position %i est correcte mais avec fausse place\n",i);}

        }
    }

      O = (int )'-';
 printf("le O est %i\n",O);
 for(i=0;i<m;i++)
 {
ascii=(int)T[i];
D[i]=ascii;
 }

 }while ((verif(D,O,m))&&( tentatives!=0 ));

   printf(" 1-rejouer\n");
   printf(" 2-score\n");
   printf(" 3-retour au menue\n");
   printf(" 4-quitter\n");

  scanf("%i",&z);

   if (z==2)
  {w= score(tentatives);
   printf("le score est %i\n",w);}
   if(z==4)
   {printf("au revoir\n");}
tentatives=6;

}
}while(z==1);


           if (choix==3)
            {
                printf("au revoir \n");

            }


return 0;
    }

#include <stdio.h>

int main() {


   int connexion;
   int inscription;
   int pseudo;
   int prenom;
   int aide;
   int choix;
   int jouer;
   int existedeja;



    // titre du jeux

    printf("Bataille Navale \n");

    // Menu du jeux

    scanf("1. Connexion \n");
    scanf("2. Inscription \n");
    scanf("3. Tableau des scores \n");


    // Si on a pas de pseudo on s'inscrit

    if (inscription)

    {

        // On entre le pseudo


        printf("Entrez votre pseudo \n");
        scanf(" %d, &pseudo \n");

        // On entre le prénom

        printf("Entrez votre prénom \n ");
        scanf(" %d, &prénom \n");

        // On entre le nom

        printf("Entrez votre nom \n ");
        scanf(" %d, &nom\n ");

        // Le jeux affiche la bienvenue au nouveau pseudo/joueur


        printf(" Bienvenue, &pseudo \n");




        // Si le pseudo existe déja


        if (existedeja);
        {

            // On nous demande si on veut reprendre le pseudo
            scanf(" Voulez-vous le reprendre ? \n");

            // On nous demande si on veut en créer un autre

            scanf(" Voulez-vous en créer un autre ? \n");


            int reprendrecompte;
            int creerunautre;

            //Si on reprend le compte

            if (reprendrecompte)
            {

                // On entre le nom du pseudo

                printf("Entrez votre pseudo \n");
                scanf(" %d, &pseudo \n");

            }

            // Si on veut créer un autre pseudo

            else if (creerunautre)

            {

                // On entre le pseudo

                printf("Entrez votre pseudo \n");
                scanf(" %d, &pseudo \n");

                // On entre le prénom

                printf("Entrez votre prénom \n ");
                scanf(" %d, &prénom \n");

                // On entre le nom

                printf("Entrez votre nom \n "),
                scanf(" %d, &nom \n");

                // Le programme nous souhaite la bienvenue

                printf(" Bienvenue, &pseudo \n");


            }


        }



    }

    // Si on veut juste se reconnecter à notre compte

    else if (connexion)

    {

        // On entre notre pseudo

        printf("Veuillez entrer votre pseudo \n");
        scanf(" %d , &pseudo \n");


        // S'il existe déja

        int existedeja;

        if (existedeja);
        {

            // On peut commencer la partie

            printf(" 1. Jouer \n");

            // On peut créer un autre pseudo

            printf(" 2. Créer un autre pseudo \n");

        }

        int autrepseudo;

        // Si on crée un autre pseudo

        if (autrepseudo)

        {

            // On entre un nouveau pseudo

            printf("Entrez votre pseudo \n");
            scanf(" %d, &pseudo \n");

            // On entre le prénom

            printf("Entrez votre prénom \n ");
            scanf(" %d, &prénom \n");

            // On entre le nom

            printf("Entrez votre nom \n");
            scanf(" %d, &nom \n");

            // On nous souhaite la bienvenue

            printf(" Bienvenue, &pseudo \n ");



        }



    }



switch (choix)
{


case 1: printf("  printf(\" A B C D E F G H I J \\n\"\n"
"                       \"1 - - - - - - - - - -\\n\"\n"
"                       \"2 - - - - - - - - - -\\n\"\n"
"                       \"3 - - - - - - - - - -\\n\"\n"
"                       \"4 - - - - - - - - - -\\n\"\n"
"                       \"5 - - - - - - - - - -\\n\"\n"
"                       \"6 - - - - - - - - - -\\n\"\n"
"                       \"7 - - - - - - - - - -\\n\"\n"
"                       \"8 - - - - - - - - - -\\n\"\n"
"                       \"9 - - - - - - - - - -\\n\");");
break;

case 2: printf(" Le but est de toucher et couler tous les bateaux dans le temps imparti \n");
break;

case 3: printf(" Si on l'on touche une partie du bateau mais que l'on coule pas le bateau alors la partie n'est pas terminée \n");
break;

default: printf(" Si l'on coule un bateau mais pas tous les autres bateaux la partie n'est pas terminée \n");
break;

}

    if (jouer);

        {

                printf(" A B C D E F G H I J \n"
                       "1 - - - - - - - - - -\n"
                       "2 - - - - - - - - - -\n"
                       "3 - - - - - - - - - -\n"
                       "4 - - - - - - - - - -\n"
                       "5 - - - - - - - - - -\n"
                       "6 - - - - - - - - - -\n"
                       "7 - - - - - - - - - -\n"
                       "8 - - - - - - - - - -\n"
                       "9 - - - - - - - - - -\n");
        }








}
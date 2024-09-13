#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int jour;
    int moi;
    int annee;
} date;
typedef struct
{
    int id;
    char nom[20];
    char prenom[20];
    date dates[20];
    float note_generale;
} departementmath;
departementmath depmath[200];
int nbEtudiantmath=0;

typedef struct
{
    int id;
    char nom[20];
    char prenom[20];
    date dates[20];
    float note_generale;
} departementPc;
departementPc deppc[200];
int nbEtudiantPc=0;

typedef struct
{
    int id;
    char nom[20];
    char prenom[20];
    date dates[20];
    float note_generale;
} departementSvt;
departementSvt depsvt[200];
int nbEtudiantSvt=0;
int nbEtudiantUniversite=0;



void ajouterEtudiant()
{
    int nb;
    int choixDepartement;
    printf("entree departement \n     1:mathematiques         2:Physique        3:svt \n");
    scanf("%d",&choixDepartement);
    printf("entree nomber etudiant ");
    scanf("%d",&nb);
    switch(choixDepartement)
    {
    case 1 :
        printf("-------t'ai choisi mathematiques----------\n");
        for(int i=0 ; i<nb ; i++)
        {
            printf("entree nom : ");
            scanf("%s",depmath[i].nom);
            printf("entree prenom : ");
            scanf("%s",depmath[i].prenom);
            printf("entree date de naissance :\n");
            do
            {
                printf("entree le jour : ");
                scanf("%d",&depmath[i].dates->jour);
            }
            while(depmath[i].dates->jour < 0 || depmath[i].dates->jour >= 31);
            do
            {
                printf("entree le moi : ");
                scanf("%d",&depmath[i].dates->moi);
            }
            while(depmath[i].dates->moi < 0 || depmath[i].dates->moi >= 12);
            do
            {
                printf("entree la annee : ");
                scanf("%d",&depmath[i].dates->annee);
            }
            while(depmath[i].dates->annee < 1960 || depmath[i].dates->annee > 2026);

            printf("entree note generale : ");
            scanf("%f",&depmath[i].note_generale);
            nbEtudiantmath++;
            nbEtudiantUniversite++;
            depmath->id=nbEtudiantUniversite;
            printf("Numero unique ID: %d\n ",depmath->id);
            printf("Etudiant ajoute avec succeos.\n");
        };
        break;
    case 2 :
        printf("------t'ai choisi Physique---------\n");
        for(int i=0 ; i<nb ; i++)
        {
            printf("entree nom : ");
            scanf("%s",deppc[i].nom);
            printf("entree prenom : ");
            scanf("%s",deppc[i].prenom);
            printf("------entree date de naissance-------\n");
            do
            {
                printf("entree le jour : ");
                scanf("%d",&deppc[i].dates->jour);
            }
            while(deppc[i].dates->jour < 0 || deppc[i].dates->jour >= 31);
            do
            {
                printf("entree le moi : ");
                scanf("%d",&deppc[i].dates->moi);
            }
            while(deppc[i].dates->moi < 0 || deppc[i].dates->moi >= 12);
            do
            {
                printf("entree la annee : ");
                scanf("%d",&deppc[i].dates->annee);
            }
            while(deppc[i].dates->annee < 1960 || deppc[i].dates->annee > 2026);

            printf("entree note generale : ");
            scanf("%f",&deppc[i].note_generale);
            nbEtudiantPc++;
            nbEtudiantUniversite++;
            deppc->id=nbEtudiantUniversite;
            printf("Numero unique ID: %d\n ",deppc->id);
            printf("Etudiant ajoute avec succeos.\n");
        };
        break;
    case 3 :
        printf("---------t'ai choisi svt--------\n");
        for(int i=0 ; i<nb ; i++)
        {
            printf("entree nom : ");
            scanf("%s",depsvt[i].nom);
            printf("entree prenom : ");
            scanf("%s",depsvt[i].prenom);
            printf("------entree date de naissance-------\n");
            do
            {
                printf("entree le jour : ");
                scanf("%d",&depsvt[i].dates->jour);
            }
            while(depsvt[i].dates->jour < 0 || depsvt[i].dates->jour >= 31);
            do
            {
                printf("entree le moi : ");
                scanf("%d",&depsvt[i].dates->moi);
            }
            while(depsvt[i].dates->moi < 0 || depsvt[i].dates->moi >= 12);
            do
            {
                printf("entree la annee : ");
                scanf("%d",&depsvt[i].dates->annee);
            }
            while(depsvt[i].dates->annee < 1960 || depsvt[i].dates->annee > 2026);

            printf("entree note generale : ");
            scanf("%f",&depsvt[i].note_generale);
            nbEtudiantSvt++;
            nbEtudiantUniversite++;
            depsvt->id=nbEtudiantUniversite;
            printf("Numero unique ID: %d\n ",depsvt->id);
            printf("Etudiant ajoute avec succeos.\n");
        };
        break;


    }
    printf("nber etdiant %d\n ",nbEtudiantUniversite);
}
void modifierEtudiant()
{
    int idrechercher;
    printf("entree id ");
    scanf("%d",&idrechercher);

    for( int i=0; i<nbEtudiantUniversite ; i++ )
    {
        if(depmath[i].id==idrechercher)
        {
            printf("entree le nouveau nom : ");
            scanf("%s",depmath[i].nom);
            printf("entree le nouveau prenom : ");
            scanf("%s",depmath[i].prenom);
            printf("entree la nouvelle date de naissance :\n");
            do
            {
                printf("entree le jour : ");
                scanf("%d",&depmath[i].dates->jour);
            }
            while(depmath[i].dates->jour < 0 || depmath[i].dates->jour >= 31);
            do
            {
                printf("entree le moi : ");
                scanf("%d",&depmath[i].dates->moi);
            }
            while(depmath[i].dates->moi < 0 || depmath[i].dates->moi >= 12);
            do
            {
                printf("entree la annee : ");
                scanf("%d",&depmath[i].dates->annee);
            }
            while(depmath[i].dates->annee < 1960 || depmath[i].dates->annee > 2026);

            printf("entree la nouveau note generale : ");
            scanf("%f",&depmath[i].note_generale);
            printf("Etudiant modifier avec succeos.\n");

        }
        else if(deppc[i].id==idrechercher)
        {
            printf("entree le nouveau nom : ");
            scanf("%s",deppc[i].nom);
            printf("entree le nouveau prenom : ");
            scanf("%s",deppc[i].prenom);
            printf("------entree la nouveau date de naissance-------\n");
            do
            {
                printf("entree le jour : ");
                scanf("%d",&deppc[i].dates->jour);
            }
            while(deppc[i].dates->jour < 0 || deppc[i].dates->jour >= 31);
            do
            {
                printf("entree le moi : ");
                scanf("%d",&deppc[i].dates->moi);
            }
            while(deppc[i].dates->moi < 0 || deppc[i].dates->moi >= 12);
            do
            {
                printf("entree la annee : ");
                scanf("%d",&deppc[i].dates->annee);
            }
            while(deppc[i].dates->annee < 1960 || deppc[i].dates->annee > 2026);

            printf("entree la nouveau note generale : ");
            scanf("%f",&deppc[i].note_generale);
            printf("Etudiant modifier avec succeos.\n");

        }
        else if(depsvt[i].id==idrechercher)
        {
            printf("entree le nouveau nom : ");
            scanf("%s",depsvt[i].nom);
            printf("entree le nouveau prenom : ");
            scanf("%s",depsvt[i].prenom);
            printf("------entree la nouveau date de naissance-------\n");
            do
            {
                printf("entree le jour : ");
                scanf("%d",&depsvt[i].dates->jour);
            }
            while(depsvt[i].dates->jour < 0 || depsvt[i].dates->jour >= 31);
            do
            {
                printf("entree le moi : ");
                scanf("%d",&depsvt[i].dates->moi);
            }
            while(depsvt[i].dates->moi < 0 || depsvt[i].dates->moi >= 12);
            do
            {
                printf("entree la annee : ");
                scanf("%d",&depsvt[i].dates->annee);
            }
            while(depsvt[i].dates->annee < 1960 || depsvt[i].dates->annee > 2026);

            printf("entree la nouveau note generale : ");
            scanf("%f",&depsvt[i].note_generale);
            printf("Etudiant modifier avec succeos.\n");
        }

    }
}
void supprimerEtudiant()
{
    int idrechercher;
    printf("entree id ");
    scanf("%d",&idrechercher);

    for( int i=0; i<nbEtudiantmath ; i++ )
    {
        if(depmath[i].id==idrechercher)
        {
            for(int k=i; k<nbEtudiantmath-1; k++)
            {
                depmath[k]=depmath[k+1];

            }
            nbEtudiantmath--;
        }
        else if(deppc[i].id==idrechercher)
        {
            for(int k=i; k<nbEtudiantPc-1; k++)
            {
                deppc[k]=deppc[k+1];

            }
            nbEtudiantPc--;

        }
        else if(depsvt[i].id==idrechercher)
        {
            for(int k=i; k<nbEtudiantSvt-1; k++)
            {
                depsvt[k]=depsvt[k+1];

            }
            nbEtudiantSvt--;

        }
        else printf("Etudiant non trouve.\n");
    }


    nbEtudiantUniversite--;
}
void afficherDetailsEtudiant()
{

    for(int i=0; i<nbEtudiantmath ; i++)
    {
        if (nbEtudiantmath!=0)
        {
            printf("---------Departement de math-------\n");
            printf("nome et prenom %s %s\n",depmath[i].nom,depmath[i].prenom);
            printf("Date de naissance %d/%d/%d\n",depmath[i].dates->jour,depmath[i].dates->moi,depmath[i].dates->annee);
            printf("Note générale %.2f\n",depmath[i].note_generale);
            printf("             ----------             \n");
        }
    }
    for(int i=0; i<nbEtudiantPc ; i++)
    {
        if (nbEtudiantPc!=0)
        {
            printf("---------Departement de Pc-------\n");
            printf("nome et prenom %s %s\n",deppc[i].nom,depmath[i].prenom);
            printf("Date de naissance %d/%d/%d\n",deppc[i].dates->jour,deppc[i].dates->moi,deppc[i].dates->annee);
            printf("Note générale %.2f\n",deppc[i].note_generale);
            printf("             ----------             \n");
        }
    }
    for(int i=0; i<nbEtudiantSvt ; i++)
    {
        if (nbEtudiantSvt!=0)
        {
            printf("---------Département de svt-------\n");
            printf("nome et prenom %s %s\n",depsvt[i].nom,depsvt[i].prenom);
            printf("Date de naissance %d/%d/%dn\n ",depsvt[i].dates->jour,depsvt[i].dates->moi,depsvt[i].dates->annee);
            printf("Note générale %.2f\n",deppc[i].note_generale);
            printf("             ----------             \n");
        }
    }
}
float moyenneGenerale1;
void moyenneGenerale()
{
    float somme1=0.0;
    float somme2=0.0;
    float somme3=0.0;
    float moyennedepmath1;
    float moyennedeppc1;
    float moyennedepsvt1;



    moyennedepmath1=somme1/nbEtudiantmath;
    moyennedeppc1=somme2/nbEtudiantPc;
    moyennedepsvt1=somme3/nbEtudiantSvt;
    moyenneGenerale1=(moyennedepmath1 + moyennedeppc1 + moyennedepsvt1)/3;
    for(int i=0; i<nbEtudiantmath ; i++)
    {
        if (nbEtudiantmath!=0)
        {
            somme1 += depmath[i].note_generale;
        }
    }
    printf("moyenne generale de departement math %.2f\n",moyennedepmath1);
    for(int i=0; i<nbEtudiantPc ; i++)
    {
        if (nbEtudiantPc!=0)
        {
            somme2 += deppc[i].note_generale;
        }
    }
    printf("moyenne generale de departement Pc %.2f\n",moyennedeppc1);
    for(int i=0; i<nbEtudiantSvt ; i++)
    {
        if (nbEtudiantSvt!=0)
        {
            somme3 += depsvt[i].note_generale;
        }
    }
    printf("moyenne generale de departement Svt %.2f\n",moyennedepsvt1);
    printf("moyenne generale %.2f\n",moyenneGenerale1);

}
void etudiantSupSeuil()
{
    int seuil;
    printf("entree seuil ");
    scanf("%d",&seuil);
    for(int i=0; i<nbEtudiantmath ; i++)
    {
        if (depmath[i].note_generale>=seuil)
        {
            printf("nome et prenom %s %s\n",depmath[i].nom,depmath[i].prenom);
        }
    }
    for(int i=0; i<nbEtudiantPc; i++)
    {
        if (deppc[i].note_generale>=seuil)
        {
            printf("nome et prenom %s %s\n",deppc[i].nom,deppc[i].prenom);
        }
    }
    for(int i=0; i<nbEtudiantSvt ; i++)
    {
        if (depsvt[i].note_generale>=seuil)
        {
            printf("nome et prenom %s %s\n",depsvt[i].nom,depsvt[i].prenom);
        }
    }

}
void etudiantSup10()
{

    for(int i=0; i<nbEtudiantmath ; i++)
    {
        if (depmath[i].note_generale>=10)
        {
            printf("nome et prenom %s %s\n",depmath[i].nom,depmath[i].prenom);
        }
    }
    for(int i=0; i<nbEtudiantPc; i++)
    {
        if (deppc[i].note_generale>=10)
        {
            printf("nome et prenom %s %s\n",deppc[i].nom,deppc[i].prenom);
        }
    }
    for(int i=0; i<nbEtudiantSvt ; i++)
    {
        if (depsvt[i].note_generale>=10)
        {
            printf("nome et prenom %s %s\n",depsvt[i].nom,depsvt[i].prenom);
        }
    }


}
void statistiques()
{
    int nb;
    printf( "         -------       ");
    printf("-----------les CHOIX----------- ");
    printf("1-Afficher le nombre total d'etudiants inscrits.");
    printf("2-Afficher le nombre d'etudiants dans chaque departement.");
    printf("3-Afficher les etudiants ayant une moyenne genérale superieure à un certain seuil.");
    printf("4-Afficher les 3 etudiants ayant les meilleures notes.");
    printf("5-Afficher le nombre d'etudiants ayant reussi dans chaque departement");
    printf("enree une choix ");
    scanf("%d",nb);
    switch (nb)
    {
    case 1 :
        printf("les etudiants inscrits %d ",nbEtudiantUniversite);

        break;
    case 2 :
        printf("Nomber etudiants de departement math %d ",nbEtudiantmath);
        printf("Nomber etudiants de departement pc %d ",nbEtudiantPc);
        printf("Nomber etudiants de departement svt %d ",nbEtudiantSvt);
        break;
    case 3 :
        etudiantSupSeuil();
        break;
    case 4 :

        break;
    case 5 :
        etudiantSup10();
        break;

    }

}
void recherchEtudian()
{
    char enNom[20];
    printf("entree nom etudiant recherch ");
    scanf("%s",enNom);
    for(int i=0 ; i<nbEtudiantmath ; i++)
    {
        if (depmath[i].nom==enNom)
        {
            printf("---------Departement de math-------\n");
            printf("nome et prenom %s %s\n",depmath[i].nom,depmath[i].prenom);
            printf("Date de naissance %d/%d/%d\n",depmath[i].dates->jour,depmath[i].dates->moi,depmath[i].dates->annee);
            printf("Note générale %.2f\n",depmath[i].note_generale);

        }
    }
    for(int i=0 ; i<nbEtudiantmath ; i++)
    {
        if (deppc[i].nom==enNom)
        {
            printf("---------Departement de Pc-------\n");
            printf("nome et prenom %s %s\n",deppc[i].nom,depmath[i].prenom);
            printf("Date de naissance %d/%d/%d\n",deppc[i].dates->jour,deppc[i].dates->moi,deppc[i].dates->annee);
            printf("Note générale %.2f\n",deppc[i].note_generale);
            printf("             ----------             \n");
        }
    }
    for(int i=0; i<nbEtudiantSvt ; i++)
    {
        if (depsvt[i].nom==enNom)
        {
            printf("---------Département de svt-------\n");
            printf("nome et prenom %s %s\n",depsvt[i].nom,depsvt[i].prenom);
            printf("Date de naissance %d/%d/%dn\n ",depsvt[i].dates->jour,depsvt[i].dates->moi,depsvt[i].dates->annee);
            printf("Note générale %.2f\n",deppc[i].note_generale);
            printf("             ----------             \n");
        }
    }
}


void afficherListeEutdiant()
{

    int nb;
    printf("Choisir Departement \n     1-Math        2-Pc      3-Svt\n  ");
    scanf("%d",nb);
    if (nb==1)
    {

        for ( int i=0 ; i<nbEtudiantmath ; i++)
        {
            printf("nome et prenom %s %s\n",depmath[i].nom,depmath[i].prenom);
            printf("             ----------             \n");
        }
    }
    else if(nb == 2 )
    {
        for( int i=0 ; i<nbEtudiantPc ; i++)
        {
            printf("nome et prenom %s %s\n",deppc[i].nom,depmath[i].prenom);
            printf("             ----------             \n");
        }
    }
    else if (nb == 3)
    {
        for (int i=0 ; i<nbEtudiantSvt; i++)
        {
            printf("nome et prenom %s %s\n",depsvt[i].nom,depsvt[i].prenom);
            printf("             ----------             \n");
        }
    }
}
void trierlesEtudiant(){
    int nb;
    printf("----entre tu chiox trie par-----\n");
    printf("        1-tri par nom       2-tri par moyenne        3-tri par statut");
    scanf("%d",&nb);
    switch(nb){
        case 1 : {


        }
        break;
        case 2 : {
            for(int i=0 ; i<nbEtudiantmath ;i++){
                if (depmath[i].note_generale>=moyenneGenerale1){
                    printf("%s",depmath[i].nom);
                }
            }
         for(int i=0 ; i<nbEtudiantPc ;i++){
                if (deppc[i].note_generale>=moyenneGenerale1){
                    printf("%s",deppc[i].nom);
                }
            }
         for(int i=0 ; i<nbEtudiantSvt ;i++){
                if (depsvt[i].note_generale>=moyenneGenerale1){
                    printf("%s",depsvt[i].nom);
                }
            }


        }
        break;
        case 3 : {
            for(int i=0 ; i<nbEtudiantmath ;i++){
                if (depmath[i].note_generale>=10){
                    printf("%s",depmath[i].nom);
                }
            }
         for(int i=0 ; i<nbEtudiantPc ;i++){
                if (deppc[i].note_generale>=10){
                    printf("%s",deppc[i].nom);
                }
            }
         for(int i=0 ; i<nbEtudiantSvt ;i++){
                if (depsvt[i].note_generale>=10){
                    printf("%s",depsvt[i].nom);
                }
            }


        }
        break;


    }




}









int main()
{
    int choix;
    do
    {
        int choix;
        printf("-------MENU-------\n");
        printf("1-Ajouter un etudiant\n");
        printf("2-Modifier un etudiant\n");
        printf("3-supprimer un etudiant\n");
        printf("4-Afficher les détails d'un etudiant\n");
        printf("5-Calculer la moyenne generale\n");
        printf("6-Afficher les statistiques\n");
        printf("7-Rechercher un etudiant par nom\n");
        printf("8-Afficher la liste des étudiants inscrits dans un departement specifique\n");
        printf("9-Trier les étudiants\n");
        printf("10-Exit\n");
        printf("Choisissez un choix : ");
        scanf("%d",&choix);

        switch(choix)
        {
        case 1 :
            printf("Ajouter un etudiant");
            ajouterEtudiant();
            break;
        case 2 :
            printf("Modifier un etudiant\n");
            modifierEtudiant();
            break;
        case 3 :
            printf("supprimer un etudiant\n");
            supprimerEtudiant();
            break;
        case 4 :
            printf("Afficher les details d'un etudiant\n");
            afficherDetailsEtudiant();
            break;
        case 5 :
            printf("Calculer la moyenne generale\n");
            moyenneGenerale();
            break;
        case 6 :
            printf("Afficher les statistiques\n");
            statistiques();
            break;
        case 7 :
            printf("Rechercher un etudiant par nom\n");
            recherchEtudian();
            break;
        case 8 :
            printf("Afficher la liste des etudiants inscrits dans un departement specifique\n");
            afficherListeEutdiant();
            break;
        case 9 :
            printf("Trie les etudiants\n");
            trierlesEtudiant();
            break;
        case 10 :
            exit(1);
            break;
        }

    }

    while (choix>0 || choix<11);





    return 0;
}

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char titre[50];
    char auteur[50];
    float prix;
    int quantite;
} Livre;

Livre T[100];
int nb=0;

void ajouterlivre(){
    printf("entre titre de livre ");
    scanf("%s",&T[nb].titre);
    printf("entre Auteur de livre. ");
    scanf("%s",&T[nb].auteur);
    printf("entre prix. ");
    scanf("%f",&T[nb].prix);
    printf("entre quantite. ");
    scanf("%d",&T[nb].quantite);
    nb++;

}
void afficher(){
    int i;
    for(i=0;i<nb;i++){

        printf("titre %s , ",T[i].titre);
        printf("auteur %s , ",T[i].auteur);
        printf("prix %.2f , ",T[i].prix);
        printf("quantite %d.\n  ",T[i].quantite);

          }
}
void recherche(){
    char titreR[50];
    printf("entre titre recherche ");
    scanf ("%s",titreR);
     int i;
    for (i=0;i<nb;i++){
        if (T[i].titre==titreR){
            printf("titre %s , ",T[i].titre);
            printf("auteur %s , ",T[i].auteur);
            printf("prix %.2f , ",T[i].prix);
            printf("quantite %d.\n  ",T[i].quantite);
        }else printf("Livre non trouve.\n");
    }
}
void mquantite(){
     char titreM[50];
    printf("entre titre recherche ");
    scanf ("%s",&titreM);
    int i;
    for (i=0;i<nb;i++){
        if (T[i].titre==titreM){
            printf("titre %s , ",T[i].titre);
            printf("auteur %s , ",T[i].auteur);
            printf("prix %.2f , ",T[i].prix);
            printf("entre nouvelle quantite ");
            scanf("%d",&T[nb].quantite);
        }else printf("Livre non trouvé.\n");
    }
}
void supprimer(){
    char spl[50];
    printf("entre livre recherche supprimer ");
    scanf ("%s",&spl);
    int i;
    for(i=0;i<nb;i++){
        if (T[i].titre==spl){
            for (int j=i;j<nb-1;j++){
                T[j]=T[j+1];
            }
        }
    }
    nb--;
}
void afficherliver() {
    int total = 0;
    int i;
    for ( i = 0; i < nb; i++) {
        total += T[i].quantite;
    }
    printf("Nombre total de livres en stock : %d\n", total);
}


int main()
{
    int n;
    printf("1-Ajouter un livre au stock. \n");
    printf("2-Afficher tous les livres disponibles. \n");
    printf("3-Rechercher un livre par son titre. \n");
    printf("4-Mettre à jour la quantité d'un livre. \n");
    printf("5-Supprimer un livre du stock. \n");
    printf("6-Afficher le nombre total de livres en stock. \n");
    printf("Entrez votre choix  ");
    scanf("%d",&n);


    switch(n){
        case 1 : printf("Ajouter un livre au stock.\n");
                 ajouterlivre();
        break;
        case 2 : printf("Afficher tous les livres disponibles\n ");
                 afficher();
        break;
        case 3 : printf("Rechercher un livre par son titre.\n");
                 recherche();
        break;
        case 4 : printf("Mettre à jour la quantité d'un livre.\n");
                mquantite();
        break;
        case 5 : printf("Supprimer un livre du stock.\n");
        break;
        case 6 : printf("Afficher le nombre total de livres en stock.\n");
                 afficherliver();
        break;
        default : printf("entre nomber 1 to 6 ");
        break;

    }

    return 0;
}

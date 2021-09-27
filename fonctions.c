//
// Created by Sonia Manai on 20/09/2021.
//
#ifndef ECE_COURS_SEANCE3_MESFONCTIONS_H
#define ECE_COURS_SEANCE3_MESFONCTIONS_H

void direAge(int age);
void direAgeSuivant(int age);
int nombreAuCarre(int nb);

#endif

int exercice1(){
    int a=0,b=0;
    printf("Saisissez l'entier a:\n");
    scanf("%d", &a);
    printf("Saisissez l'entier b:\n");
    scanf("%d", &b);
    if (a<b)
    {
        printf("L'entier le plus grand est %d: \n", b);
    }
    else if (a>b)
    {
        printf("L'entier le plus grand est %d : \n", a);
    }
    else
    {
        printf("les deux nombres sont égaux");
    }

return 0;
    }



int exercice2(){
    int lar,int lon;
    printf("Saisissez la largeur du rectangle :\n");
    scanf("%d", &lar);
    printf("Saisissez la longueur du rectangle :\n");
    scanf("%d", &lon);
    printf("Le périmètre du rectangle est: %d\n" , (lon*2+ lar*2));
    printf("l'aire du rectangle est: %d\n",(lon*lar) );
    return 0;


}

int exercice3(){
    int a=0;
    printf("Saisissez un entier :\n");
    scanf("%d", &a);
    if (a%3==0)
    {
        printf("L'entier est un multiple de 3")
    }
    else
    {
        printf("L'entier n'est pas un multiple de 3")
    }
    if (a>=10)
    {
        printf("L'entier est supérieur ou égal à 10")
    }
    else
    {
        printf("L'entier est strictement inférieur à 10")
    }

    return 0;


}

int exercice4(){
    int age,char etudiant;
    printf("Renseignez votre age:\n");
    scanf("%d", &age);
    printf("Etes vous un étudiant ?\n");
    scanf("%s", &etudiant);
    if ((etudiant=='oui') && (age<27))
    {
        printf("tarif jeune: 6€\n");
    }
    if ((etudiant==!'oui')&&(age<12));
    {
        printf("tarif enfant: 4€\n");
    }
    if ((etudiant==!'oui'))&&(age>=12)&&(age<=17))
    {
        printf("tarif jeune:6€\n"");
    }
    if (age>=65)
    {
        printf("tarif senior: 6€\n");
    }
    else{
        printf("plein tarif: 9€\n");
    }
    return 0;
}


int exercice5(){
  int numBoisson;
  printf("Saisissez le numero de la boisson : \n");
  scanf("%d", &numBoisson);
  if((numBoisson==3)) || (numBoisson==2))
    {
        printf("Votre boisson est un icetea ou un fanta\n");
    }
    else if{
        printf("Votre boisson est un coca\n");
    }
    if ((numBoisson==10)) || (numBoisson==11)
    {
        printf("Votre boisson est un cafe ou un thé\n");
    }
    return 0;
}

int exercice6(){
    float a=0.0,b=0.0,c=0.0;
    printf("Saisissez la première note:\n");
    scanf("%f", &a);
    printf("Saisissez la deuxième note:\n");
    scanf("%f", &b);
    printf("Saisissez la troisième note:\n");
    scanf("%f", &c);

    while (a<0 || a>20) && (b<0|| b>20) && (c<0 || c>0)
    {
        printf("La note saisie n'est pas valide, recommencez.\n ");
        scanf("%f", &a, &b, &c);

    }
    printf("La moyenne est: %f.\n", ((a+b+c)/3));
}

int exercice7(){
    int i=1, nbrclasses, nbreleves, total=0;
    printf("Saisissez le nombre de classes:\n");
    scanf("%d", &nbrclasses);
    while(i<=nbrclasses)
    {
        printf("Saisissez le nombre d'élèves dans la classe: %d", i);
        scanf("%d",nbreleves);
        total= total + nbreleves
                i= i+1
    }
    printf("Le nombre total d'élèves est %d", total);


}





int exercice8(){
    int a=0;
    printf("Saisissez un un entier: \n");
    scanf("%d", &a);

    while ( a % 2 != 0 || a % 7 != 0 )
    {
        printf("L'entier saisie n'est pas valable, recommencez.\n");
        scanf("%d", &a);

    }

    printf("L'entier est :%d.\n", a);


}











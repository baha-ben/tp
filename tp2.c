#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *chargerChaine(int N){
 char *chaine = (char *)malloc((N+1)*sizeof(char));
     printf("Entrer la chaine : ");
     scanf("%s",chaine);
     return chaine ;
} 
int longueur(char* chaine) {
    int i = 0;
    while (chaine[i] != '\0') {
        i++;
    }
    printf("la longeur est: %d", i);
    return i;
}
// 3
void ChargerTab(char *p, char Tab[]) {
    int i = 0;
    while (p[i] != '\0') {
        Tab[i] = p[i];
        i++;
    }
    Tab[i] = '\0'; 
}

// 4
void InverserTab(char Tab[], char T[], int b) {
    for (int i = 0; i < b; i++) {
        T[i] = Tab[b - 1 - i]; 
    }
    T[b] = '\0'; 
}
// 5
void AfficherTab(char Tab[], int b) {
    for (int i = 0; i < b; i++) {
        printf("%c", Tab[i]);
    }
    printf("\n");
}
int main (){
  int N ;
    printf("Entrer size la chaine : ");
    scanf("%d",&N);
  char *chaine = chargerChaine(N) ;
  // longueur de chaine
  
  int b = longueur(chaine);
  
  // charger le chaine
  
   char Tab[b + 1], T[b + 1];
    ChargerTab(chaine, Tab);
    
    //afficher chaine originale
    
    printf("\nChaine originale: ");
    AfficherTab(Tab, b);

   //inverse de chaine 
    InverserTab(Tab, T, b);

    printf(" Chaine inversee: ");
    AfficherTab(T, b);

    free(chaine);
   
  return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *chargerChaine(int N){
 char *chaine = (char *)malloc((N+1)*sizeof(char));
     while (1) {
        printf("Veuillez saisir une chaîne de caractères (max %d caractères): ",N);
        scanf(" %[^\n]", chaine);    // لقراءة الفراغات في الكلمة
        int longueur = 0;
        for (int i = 0; chaine[i] != '\0'; i++) {
            longueur++;   //طول الحلقة للمقارنة 
        }
        if (longueur > N) {  
            printf("Erreur  La chaîne dépasse la taille maximale "); //اذا تحقق الشرط
        }   else {
              break; //
            }
    }
    return chaine;
} 
int longueur(char* chaine) {
    int i = 0;
    while (chaine[i] != '\0') {
        i++;
    }
    printf("la longeur est: %d \n", i);
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
int main(){
char *ch; int n; 
printf("veuillez saisir la taille maximale de la chaine:");
scanf("%d",&n); 
ch=chargerChaine(n);
int m=longueur(ch);
char Tab[m], T[m];
ChargerTab(ch,Tab);
printf("l'affichege de tableau :");
AfficherTab(Tab,m);
InverserTab(Tab,T,m);
printf("la list inverse est  :");

AfficherTab(T,m);
free(ch);
return 0;
}


// ex1
#include <stdio.h>
int main() 
{
//q1
    char Mat[5][5] = {{'1', '2', '3', '4', '5'},{'7', 'a', 'c', '8', 'd'},{'c', '9', '4', 'z', '8'},{'5', '6', 'p', 'n', '3'},{'2', '9', 't', 'm', 'k'}};
    printf("afficher la matrice : \n");
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++) 
        {
            printf("%c ", Mat[i][j]);
        }
        printf("\n");
    }
//q2
    printf("\nLignes pair:\n");
    for(int i = 0; i < 5; i += 2)
    { 
        for(int j = 0; j < 5; j++)
        {
            printf("%c ", Mat[i][j]);
        }
        printf("\n");
    }
   //q3
    printf("\n  Lignes impair :\n");
    for(int i = 0; i < 5; i++) 
    {
        for(int j = 1; j < 5; j += 2) 
        { 
            printf("%c ", Mat[i][j]);
        }
        printf("\n");
    }
//q3
  // afficher diagonal
for (int i = 0; i < 3; i++) {
    printf("%c ", Mat[i][i]);
}
printf("\n");

// afficher 2eme diagonal
for (int i = 0; i < 3; i++) {
    printf("%c ", Mat[i][4-i]);
}
printf("\n");  
    return 0;
}

\\ ex 2 
#include <stdio.h>

int main() {
    int i,j,s,t;
    int m[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
      printf("give the size of your matrix = ");
      scanf("%d",&s);
    printf("the first matrix : ");
    printf("\n");
    for ( i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    printf("the secod matrix :");
    printf("\n");
    for ( i = 1; i < s; i++) {
        for (j = i + 1; j < s; j++) {
             t = m[i][j];
            m[i][j] = m[j][i];
            m[j][i] = t;
        }
    }
    for ( i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
    

    



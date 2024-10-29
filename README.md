
// ex 1
#include <stdio.h>

int main() {
   char mat[4][5] = {
        {'1', '2', '3', '4', '5'},
        {'7', 'a', 'c', '8', 'd'},
        {'c', '9', 'z', 'z', '8'},
        {'5', '6', 'p', '3', 'k'}
    };


    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%c ", mat[i][j]);
        }
        
        printf("\n");
    }
        printf("the lignes paire est : \n");
        for(int i = 0 ; i < 4 ; i+=2){
            for(int j = 0 ; j < 5 ; j++){
                printf("%d",mat[i][j]);
            }
            printf("\n");
        }
    
    return 0;
}

#include <stdio.h>
#include <windows.h>


void game(){
    for(int i=0; i<100; i++){
        printf("%c",205);
    }
    for(int j=0; j<20; j++){
        printf("\n");
        for(int i=0; i<100; i++){
            if(i==0 || i==98){
                printf("%c",178);
            }
            printf(" ");
        }
    }
    printf("\n");
    for(int i=0; i<100; i++){
        printf("%c",205);
    }
}

int main(){
    game();
    return 0;
}




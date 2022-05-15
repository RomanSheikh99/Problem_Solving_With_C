#include <stdio.h>
#include <string.h>


int main(){
    int N;
    scanf("%d", &N);
    char color[N];
    scanf("%s", color);

    int total = 0;

    for(int i = 0; i < strlen(color); i++){
        if(color[i] == color[i+1]){
            total++;
        }
    }

    printf("%d", total);
    return 0;
}

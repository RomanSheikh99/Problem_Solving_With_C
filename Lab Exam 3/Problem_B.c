#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int num[N];

    for (int i = 0; i < N; i++){
        scanf("%d", &num[i]);
    }

    int max = 0;
    for(int i = 0; i < N; i++){
        if(max < num[i]){
            max = num[i];
        }
    }

    int total = 0;
    for(int i = 0; i < N; i++){
        int temp = max - num[i];
        total += temp;
    }

    printf("%d", total);

    return 0;
}


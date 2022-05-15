#include<stdio.h>

int main(){
    int n, i, temp;
    scanf("%d", &n);

    int frnd[n];
    int new_frnd[n];

    for(i = 0; i < n; i++){
        scanf("%d", &frnd[i]);
    }

    for(i = 0; i < n; i++){
        temp = frnd[i];
        new_frnd[temp-1]= i + 1;
    }

    for(i = 0; i < n; i++){
        printf("%d ", new_frnd[i]);
    }
}

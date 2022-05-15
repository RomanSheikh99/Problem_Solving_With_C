#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++){

        int n;
        scanf("%d", &n);

        int a[n];
        for(int j = 0; j < n; j++){
            scanf("%d", &a[j]);
        }
        int fr[101] = {0};
        int temp, spy;
        for(int j = 0; j < n; j++){
            temp = a[j];
            fr[temp]++;
        }
        for(int j = 0; j < 101; j++){
            if(fr[j]== 1){
                spy = j;
                break;
            }
        }
        for(int j = 0; j < n; j++){
            if(spy == a[j]){
                printf("%d\n", j + 1);
                break;
            };
        }
    }

    return 0;
}


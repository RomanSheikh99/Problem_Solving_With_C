#include<stdio.h>

int main(){
   int n, k;
    scanf("%d %d", &n, &k);

    int a[n];
    for(int j = 0; j < n; j++){
        scanf("%d", &a[j]);
    }

    int next = 0;

    for(int j = 0; j < n; j++){
       if(a[j] >= a[k-1] && a[j] > 0){
            next++;
       }
    }
    printf("%d", next);

    return 0;
}



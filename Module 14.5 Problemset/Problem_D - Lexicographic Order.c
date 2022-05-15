#include<stdio.h>
#include<string.h>

int main(){
    char a[10], b[10];
    scanf("%s %s", a, b);
    int val = strcmp(a, b);
    if(val < 0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}

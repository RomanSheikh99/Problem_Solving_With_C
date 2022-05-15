#include<stdio.h>
#include<string.h>

int main(){
    char a[15], b[] = "Hello,World!";
    scanf("%s", a);
    int val = strcmp(a, b);
    if(val == 0){
        printf("AC");
    }
    else{
        printf("WA");
    }
    return 0;
}


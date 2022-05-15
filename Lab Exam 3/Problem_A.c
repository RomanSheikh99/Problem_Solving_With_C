#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    char str[101];
    scanf("%s", str);

    int letter[125]= {0};

    for(int i = 0; i < strlen(str); i++){
        int temp = str[i];
        letter[temp]++;
    }

    int pop = 0;
    for(int i = 97; i <= 122; i++){
        if(letter[i] > 0){
            pop++;
        }
    }

    if(pop % 2 == 0){
        printf("CHAT WITH HER!");
    }
    else{
        printf("IGNORE HIM!");
    }

    return 0;
}


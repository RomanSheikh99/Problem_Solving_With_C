#include <stdio.h>
#include <string.h>

int main(){
    char str_1[100], str_2[100];
    scanf("%s", str_1);
    scanf("%s", str_2);

    int i = 0;
    while(str_1[i] != '\0' && str_2 != '\0'){
        if(str_2[i] >= 'A' && str_2[i] <= 'Z'){
            str_2[i] = 'a' + (str_2[i] - 'A');
        }
        if(str_1[i] >= 'A' && str_1[i] <= 'Z'){
            str_1[i] = 'a' + (str_1[i] - 'A');
        }

        i++;
    }

    int val = strcmp(str_1, str_2);
    if(val < 0){
        printf("-1");
    }
    else if(val > 0){
        printf("1");
    }
    else{
        printf("0");
    }


//    int j = 0;
//    while(str_1[j] != '\0'){
//        printf("%c", str_1[j]);
//        j++;
//    }
//
//    printf("\n");
//
//    int k = 0;
//    while(str_2[k] != '\0'){
//        printf("%c", str_2[k]);
//        k++;
//    }


    return 0;
}

#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){

//        char str[101];
//        scanf("%s", str);
//
//        int letter[125]= {0};
//
//        for(int i = 0; i < strlen(str); i++){
//            int temp = str[i];
//            printf("%d ", temp);
//            letter[temp]++;
//        }
//
////        int pop = 0;
//        for(int i = 97; i <= 122; i++){
//            if(letter[i] > 0){
//                char L = i;
//                printf("%c ", L);
//            }
//        }


        char str[100];
        scanf("%s", str);

        for(int j = 0; j < strlen(str); j++){
            if(str[j] == str[j + 1]){
                str[j] = '0';
            }
        }

         for(int j = 0; j < strlen(str); j++){
            if(str[j] != '0'){
                printf("%c", str[j]);
            }
        }


        printf("\n");
    }

    return 0;
}


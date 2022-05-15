#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int main(){
    int N;
    scanf("%d", &N);
    char str[N];
    scanf("%s", str);

    for( int i = 0; i < N; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = 'a' + (str[i] - 'A');
        }
    }

    int letter[125]= {0};

    for(int i = 0; i < N; i++){
        int temp = str[i];
        letter[temp]++;
    }

    bool all = true;
    for(int i = 97; i <= 122; i++){
        if(letter[i] == 0){
            all = false;
            break;
        }
    }

    if(all){
        printf("YES");
    }
    else{
        printf("NO");
    }


    return 0;
}

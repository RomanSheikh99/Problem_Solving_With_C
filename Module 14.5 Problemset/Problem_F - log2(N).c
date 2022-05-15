#include<stdio.h>

int main(){
    long long num;
    scanf("%lld", &num);

    long long half_num = num / 2;
    for(long long i = half_num; i >= 0; i--){
        if(i == 0){
            printf("%lld", i);
            break;
        }
        else{
            long long mul = 1;
            for(long long j = 1; j <= i; j++){
                mul *= 2;
            }
            if(mul <= num){
                printf("%lld", i);
                break;
            }
            else{
                continue;
            }
        }
    }
    return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int N;
    int R;
    int re;
    int A, B, C, D;
    int cnt = 0;
    scanf("%d", &N);
    re = N;
        while(1){
            
            A = N / 10;
            B =N % 10;
            C = A + B;
            D = C % 10;
            R = (B*10) + D;
            N = R;
            cnt++;
            if(re == R) break;
        }
    printf("%d\n", cnt);
    
    return 0;
}


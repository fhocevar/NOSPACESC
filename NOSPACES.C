#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long long Count(int N, int C, int K, char* S) {
    long long dp[N + 1];
    dp[0] = 1;  // Há uma forma de dividir a string vazia
    
    // Iterando sobre todas as posições da string
    for (int i = 1; i <= N; i++) {
        dp[i] = 0;
        
        // Verificar as substrings que terminam na posição i
        for (int j = i - 1; j >= 0; j--) {
            // Formar a substring S[j..i-1]
            int len = i - j;
            // Verificar se a substring S[j..i-1] não começa com '0' (exceto se for "0")
            if (S[j] == '0' && len > 1) {
                continue;  // Ignora caso tenha zero à esquerda
            }
            
            // Converter a substring para número
            long long num = 0;
            for (int k = j; k < i; k++) {
                num = num * 10 + (S[k] - '0');
            }
            
            // Verificar se o número é menor ou igual a C
            if (num <= C) {
                dp[i] = (dp[i] + dp[j]) % K;
            }
        }
    }
    
    return dp[N];  // O número de maneiras de dividir a string
}

int main() {
    int N, C, K;
    scanf("%d %d %d", &N, &C, &K);
    char S[N + 1];
    scanf("%s", S);
    
    long long result = Count(N, C, K, S);
    printf("%lld\n", result);
    
    return 0;
}

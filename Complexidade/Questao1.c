//Questão 1

/*Algorithm 1: Calculo da função ao recursiva seria x(n)
input: Algoritmo para x(n) avaliado para n = n₀
Output: Tempo medio do algoritmo x(n) para n = n₀, N_Max
N = 0;
T = 0;
if N ≤ N_Max then
    return T / N_Max
end
else
    N = N + 1;
    T = T + tempo_execucao(x(n₀));
    Execute Algoritmo para calcular x(n₀);
end
*/

/* Análise:
O Algoritmo 1 tem como objetivo medir o tempo médio de execução de uma função recursiva x(n) para um valor fixo n₀. 
Para isso, ele executa a função x(n₀) várias vezes (N_Max repetições), acumulando o tempo gasto em cada execução. 
Ao final, o algoritmo calcula a média desses tempos, dividindo o tempo total pelo número de execuções. 
Esse método é útil para obter uma estimativa prática do desempenho da função, já que considera variações que podem ocorrer em execuções diferentes.
*/
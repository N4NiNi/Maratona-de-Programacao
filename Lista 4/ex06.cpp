#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int fatorial(int n){
    if(n == 0){
        return 1;
    }
    return n * fatorial(n-1);
}
int combinacao(int n){
    int c = 0;
    for(int i = 0; i < n; i++){
        c += fatorial(n) / (fatorial(i) * fatorial(n-i));
    }
    return c;
}




int main() {
    int N, M;
    int comb = 0;
    int combt = 0;
    cin >> N >> M;
    vector<int> descontado(N);
    combt = combinacao(N);
    int a, b;

    for (int i = 0; i < N; i++)
    {
        descontado[i] = 0;
    }
    

    for (int i = 0; i < M; i++) {
        
        cin >> a >> b;
        
        if((descontado[a-1] != -1 && descontado[b-1] != -1) || i == 0){
            for(int i = 0; i < N-1; i++){
                comb += fatorial(N-i) / (fatorial(N-i) * fatorial((N-i)-(N-i)));
            }
          comb = combt/comb;
        descontado[a-1] = -1;
        descontado[b-1] = -1;
        }else{
            comb = comb + 1;
        }

    }
    comb = combt - comb;
    cout << comb << endl;
    
}

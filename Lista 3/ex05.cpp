#include <iostream>
#include <map>


int main() {
    int n;
    int voto;

    std::cin >> n;

    std::map<int, int> candidatos;

    int idx_candidato_mais_votado = 0;

    for (int i = 0; i < n; i++) {
        std::cin >> voto;

        candidatos[voto]++;

        if (candidatos[voto] > candidatos[idx_candidato_mais_votado]) {
            idx_candidato_mais_votado = voto;
        }
    }

    std::cout << idx_candidato_mais_votado << std::endl;

    return 0;
}

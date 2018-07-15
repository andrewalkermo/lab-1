#include <iostream>
using namespace std;
int main() {
    int teste = 1;
    while (true) {
        int partidas;
        cin >> partidas;
        if (!partidas) break;
        cout << "Teste " << teste << endl;
        int melhor_soma = -1;
        int melhor_de, melhor_ate;
        int de = 1, soma = 0;
        for (int partida = 1 ; partida <= partidas; partida ++) {
            int favor, contra;
            cin >> favor >> contra;
            soma += favor - contra;
            if (soma < 0) {
                de = partida + 1;
                soma = 0;
            }
            else if (soma > 0 && (soma > melhor_soma || (soma == melhor_soma && partida-de >= melhor_ate-melhor_de))) {
                melhor_soma = soma;
                melhor_de = de;
                melhor_ate = partida;
            }
        }
        if (melhor_soma == -1){
          cout << "nenhum" << endl;
        }
        else{
          cout << melhor_de << " " << melhor_ate << endl;
        }
        cout << endl;
        teste ++;
    }
}

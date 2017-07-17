#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue<int> fila, aux;
    int n;
    string frase;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int v;
        cin >> frase >> v;
        for (unsigned int j = 0; j < frase.length(); j++) {
            fila.push((frase[j])-48);
            cout << frase[j];
        }
        cout << endl;
        for (int j = 0; j < v; j++) {
            int numero = fila.front();
            int cont = 1;
            fila.pop();
            while (!(fila.empty())){
                if (fila.front() == numero){
                    cont++;
                }
                if (fila.front() != numero) {
                    aux.push(cont);
                    aux.push(numero);
                    numero = fila.front();
                    cont = 1;
                }
                fila.pop();
            }
            aux.push(cont);
            aux.push(numero);
            while (!(aux.empty())) {
                cout << aux.front();
                if(j != v-1) {
                    fila.push(aux.front());
                }
                aux.pop();
            }
            cout << endl;
        }
        cout << endl;
    }
}

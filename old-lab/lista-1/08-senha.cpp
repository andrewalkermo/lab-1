#include <iostream>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  int n, cont = 0, teste = 1;
  cin >> n;
  while (n != 0) {
    string sequencia;
    getline(cin, sequencia);
    string senha1 = "******";
    string senha2 = "******";
    string resposta = "******";
    for (int j = 0; j < n; j++) {
      getline(cin, sequencia);
      if (j == 0) {
        for (int i = 20; i < sequencia.size();) {
          senha1[cont] = sequencia[((sequencia[i]-65)*4)];
          senha2[cont] = sequencia[((sequencia[i]-65)*4)+2];
          cont += 1;
          i += 2;
        }
        cont = 0;
      }
      else {
        for (int i = 20; i < sequencia.size();) {
          if (sequencia[((sequencia[i]-65)*4)] == senha1[cont] && sequencia[((sequencia[i]-65)*4)+2] != senha2[cont]  ||  sequencia[((sequencia[i]-65)*4)] == senha2[cont] && sequencia[((sequencia[i]-65)*4)+2] != senha1[cont]) {
            resposta[cont] = sequencia[((sequencia[i]-65)*4)];
            senha1[cont] = '*';
            senha2[cont] = '*';
          }
          if (sequencia[((sequencia[i]-65)*4)+2] == senha1[cont] && sequencia[((sequencia[i]-65)*4)] != senha2[cont]  ||  sequencia[((sequencia[i]-65)*4)+2] == senha2[cont] && sequencia[((sequencia[i]-65)*4)] != senha1[cont]) {
            resposta[cont] = sequencia[((sequencia[i]-65)*4)+2];
            senha1[cont] = '*';
            senha2[cont] = '*';
          }
          cont++;
          i += 2;
        }
        cont = 0;
      }
    }
    cout << "Teste " <<teste++ << endl;
    for (int r = 0; r < 6; r++) {
      cout << resposta[r] << " ";
    }
    cout << endl << endl;
    cont = 0;
    cin >> n;
  }
}

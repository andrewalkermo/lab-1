#include <iostream>
using namespace std;

int main() {
  string frase;
  bool p = false;
  getline(cin, frase);
  string resposta;
  for(int i = 0; i < frase.size(); i++) {
    if (frase[i] == 'p' && p == false) {
      p = true;
      frase[i] = '*';
    }
    else {
      p = false;
    }
  }
  for(int i = 0; i < frase.size(); i++) {
    if (frase[i] != '*'){
      cout << frase[i];
    }
  }
  cout << endl;
}

#include <iostream>
#include <queue>
#include <stack>
using namespace std;
int main() {
    stack<char> pilha;
    int n;
    string frase;
    cin >> n;
    getline(cin, frase);
    for (int i = 0; i < n; i++){
        string frase;
        getline(cin, frase);
        for(unsigned int j = 0; j < frase.length(); j++) {
            if (frase[j] == '*' || frase[j] == '_' || frase[j] == '/') {
                if ((!pilha.empty()) && pilha.top() == frase[j]) {
                    pilha.pop();
                }
                else {
                    pilha.push(frase[j]);
                }
            }
        }
    }
    if (pilha.empty()){
        cout << "C";
    }
    else {
        cout << "E";
    }
    // (pilha.empty())?cout <<"C":cout <<"E";
    cout << endl;
}

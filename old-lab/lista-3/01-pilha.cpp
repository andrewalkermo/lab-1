#include <iostream>
#include <queue>
#include <stack>

using namespace std;
int main() {
    queue<int> fila;
    stack<int> pilha;
    vector<int> lista;
    int n;
    cin >> n;
    while (n != 0) {
        for (int i = 1; i <= n; i++){
            int k;
            cin >> k;
            fila.push(k);
            lista[i] = i+1;
        }
        for (int i = 0; i < n; i++){
            if(fila.front() != lista[i]){
                pilha.push(fila.front());
                fila.pop(); 
            }
        }
        cout << endl;
        cin >> n;
    }
}











// if (k > x){
//     x = k;
// }
// if (k < x){
//     if (a == true) {
//         b = true;
//     }
//     else {
//         a = true;
//     }
// }

#include <iostream>
#include <set>
using namespace std;
int main() {
    set<int> conjunto;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int id;
        cin >> id;
        conjunto.insert(id);
        int cont;
        cin >> cont;
        for (int j = 0; j < cont; j++) {
            cin >> id;
            conjunto.insert(id);
        }
    }
    cout << (conjunto.size()-n) << endl;
}

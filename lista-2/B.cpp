#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main() {
    int n, max = 0;
    string ganhador;
    map<string, int> total;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string equipe;
        cin >> equipe;
        total[equipe]++;
    }
    for (map<string, int>::iterator it=total.begin(); it != total.end(); it++) {
        if ((*it).second >max) {
            max = (*it).second;
            ganhador = (*it).first;
        }
    }
    cout << ganhador<< endl;
}

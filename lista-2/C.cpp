#include <iostream>
#include <map>
#include <algorithm>
#include <stdio.h>
using namespace std;
int main() {
    int n, p, t;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p >> t;
        map<string, string> total;
        for (int j = 0; j < p; j++) {
            string tt,pt;
            cin >> tt;
            cin.ignore();
            getline(cin, pt);
            total[tt] = pt;
        }
        string palavra;
        for (int j = 0; j < t;) {
            cin >> palavra;
            if(total.count(palavra)){
                cout << total[palavra];
            }
            else{
                cout << palavra;
            }
            char lixo = getchar();
            if (lixo == '\n') {
                j++;
            }
            cout << lixo;
        }
    }

}

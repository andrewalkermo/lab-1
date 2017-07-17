#include <iostream>
#include <map>
#include <algorithm>
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
        for (int j = 0; j < t;j++) {
            int end = 0, begin = 0;
            getline(cin, palavra);
            while(end != -1){
                end = (palavra.find(" ",begin));
                if (total.find(palavra.substr(begin, end)) != total.end()){
                    cout << total[palavra.substr(begin, end)];
                }
                else {
                    cout << palavra << " ";
                }
                if (end != -1) {
                    cout << " ";
                }
                begin = end+1;
            }
            cout << endl;
        }
    }

}

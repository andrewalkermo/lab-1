#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main() {
    int n;
    set<string> total;
    while (cin >> n && !(n == 0)) {
        for (int i = 0; i < n; i++) {
            string fentico;
            cin >> fentico;
            sort(fentico.begin(),fentico.end() );
            total.insert(fentico);
        }
        cout << total.size()<< endl;
        total.clear();
    }
}

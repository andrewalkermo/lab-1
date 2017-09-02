#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, x, m, pos = 0, total = 0;
    cin >> n;
    cin >> m;
    vector<int>v;
    vector<int>::iterator it;
    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < m; i++) {
        cin >> x;
        it = lower_bound(v.begin(), v.end(), x);
        total +=  abs(pos - (int)(it-v.begin()));
        pos = (int)(it-v.begin());
    }
    cout << total << endl;
}

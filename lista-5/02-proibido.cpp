#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    unsigned long long n, x;
    cin >> n;
    vector<unsigned long long>v;
    for (unsigned long long i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }
    stable_sort (v.begin(), v.end());
    while (cin >> x) {
        if (binary_search(v.begin(), v.end(), x)){
            cout << "sim" << endl;
        }
        else {
            std::cout << "nao" << endl;
        }
    }
}

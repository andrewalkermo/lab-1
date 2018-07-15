#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, k, x;
    scanf("%d", &n);
    scanf("%d", &k);
    vector<int> v;
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        v.push_back(x);
    }
    for (int i = 0; i < k; i++) {
        scanf("%d", &x);
        if (binary_search(v.begin(), v.end(), x)){
            vector<int>::iterator it;
            it = lower_bound(v.begin(), v.end(), x);
            printf("%d\n", (int) ( it - v.begin() ));
        }
        else {
            printf("%d\n", -1);
        }
    }
}

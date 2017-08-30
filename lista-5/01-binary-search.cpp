#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
// int buscaBinaria (int v[], int ini, int fim, int x) {
//     int m = (ini + fim)/2;
//     if (ini > fim) {
//      return -1;
//     }
//     if (v[m] == x) {
//         if(m > 0 && v[m-1] == x) {
//            buscaBinaria(v,ini,m-1,x);
//         }
//         else {
//             return m;
//         }
//     }
//     else if (v[m] < x) {
//         return buscaBinaria (v, m+1, fim, x);
//     }
//     else {
//         return buscaBinaria (v, ini, m-1, x);
//     }
// }
using namespace std;
int busca(vector<int> v,vector<int>::iterator ini, vector<int>::iterator fim, int x){
    vector<int>::iterator meio = (ini-fim)/2;
    if (ini > fim) {
        return -1;
    }
    if (*meio == x) {
        if(meio > 0 && *(meio-1) == x) {
           busca(v, ini, meio-1, x);
        }
        else {
            return meio;
        }
        .
    }
    else if (*meio < x) {
        return busca (v, meio+1, fim, x);
    }
    else {
        return busca (v, ini, meio-1, x);
    }


}
int main(){
    int n, k, x;
    scanf("%d\n", &n);
    scanf("%d\n", &k);
    vector<int> v;
    for (int i = 0; i < n; i++) {
        scanf("%d\n", &x);
        v.push_back(x);
    }
    for (int i = 0; i < k; i++) {
        scanf("%d\n", &x);
        // printf("%d\n", busca(v, v.begin(), v.end(), x));
    }
}

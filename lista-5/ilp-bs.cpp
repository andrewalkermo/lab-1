#include <iostream>
#include <stdio.h>
using namespace std;
    int buscaBinaria (int v[], int ini, int fim, int x) {
        int m = (ini + fim)/2;
        if (ini > fim) {
         return -1;
        }
        if (v[m] == x) {
            if(m > 0 && v[m-1] == x) {
               buscaBinaria(v,ini,m-1,x);
            }
            else {
                return m;
            }
        }
        else if (v[m] < x) {
            return buscaBinaria (v, m+1, fim, x);
        }
        else {
            return buscaBinaria (v, ini, m-1, x);
        }
    }
    int main(){
        ios_base::sync_with_stdio(false);
        int n, y;
        scanf("%d", &n);
        scanf("%d", &y);
        int vet[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &vet[i]);
        }
        for (int i = 0; i < y; i++) {
            int x;
            scanf("%d", &x);
            printf ("%d\n", buscaBinaria (vet, 0,n-1, x));
            //cout << buscaBinaria (vet, 0,n-1, x) << endl;
        }
    }

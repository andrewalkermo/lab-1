#include <iostream>
using namespace std;

    int main(){
        ios_base::sync_with_stdio(false);
        int n,m,c,pi,pj,d,figuras = 0;
        cin >> n >> m >> c;
        while (n != 0 && m != 0 && c != 0) {
            char arena[n][m],ordem;
            for (int i = 0; i < n; i++){
                for (int j = 0; j < m; j++){
                    cin >> arena[i][j];
                    if (arena[i][j] == 'N'){
                        pi = i;
                        pj = j;
                        d = 1;
                    }
                    else if (arena[i][j] == 'L'){
                        pi = i;
                        pj = j;
                        d = 2;
                    }
                    else if (arena[i][j] == 'S'){
                        pi = i;
                        pj = j;
                        d = 3;
                    }
                    else if (arena[i][j] == 'O'){
                        pi = i;
                        pj = j;
                        d = 4;
                    }
                }
            }


            for (int i = 0; i < c; i++){
                cin >> ordem;
                if (ordem == 'E'){
                    if (d-1 == 0) {
                        d = 4;
                    }
                    else {
                        d--;
                    }
                }
                else if (ordem == 'D'){
                    if (d+1 == 5) {
                        d = 1;
                    }
                    else {
                        d++;
                    }
                }
                else if (ordem == 'F'){
                    if (d == 1 && pi > 0 && arena[pi-1][pj] != '#') {
                        pi--;
                    }
                    else if (d == 2 && pj < m-1 && arena[pi][pj+1] != '#') {
                        pj++;
                    }
                    else if (d == 3 && pi < n-1 && arena[pi+1][pj] != '#') {
                        pi++;
                    }
                    else if (d == 4 && pj > 0 && arena[pi][pj-1] != '#') {
                        pj--;
                    }
                    if (arena[pi][pj] == '*') {
                        figuras++;
                        arena[pi][pj] = '.';
                    }
                }
            }
            cout << figuras << endl;
            figuras = 0;
            cin >> n >> m >> c;
        }
    }

#include <iostream>
using namespace std;

    int main(){
        ios_base::sync_with_stdio(false);
        int x, y, q, m, n,cont = 0, logotipo = 1;
        bool sim = true;
        cin >> x >> y;
        while (x != 0 && y != 0) {
            int mat[x][y];
            for (int i = 0; i < x; i++){
                for (int j = 0; j < y; j++){
                    cin >> mat[i][j];
                }
            }
            cin >> q >> m >> n;
            int matriz[m][n];
            for (int i = 0; i < q; i++){
                for (int j = 0; j < m; j++){
                    for (int k = 0; k < n; k++){
                        cin >> matriz[j][k];
                    }
                }
                for (int j = 0; j < m-x+1;j++){
                    for (int k = 0; k < n-x+1; k++){
                        for (int l = 0; sim == true && l < x; l++){
                            for (int o = 0; sim == true && o < y; o++){
                                if (matriz[j+l][k+o] != mat[l][o]){
                                    sim = false;
                                    matriz[j+l][k+o] = -2;
                                }
                                if (l == x-1 && o == y-1 && sim == true) {
                                    cont++;
                                    matriz[j+l][k+o] = -1;
                                }
                            }
                        }
                        sim = true;
                    }
                }
            }
            cout << "Logotipo " <<logotipo++ << endl << cont << endl << endl;
            cont = 0;
            cin >> x >> y;
        }
    }

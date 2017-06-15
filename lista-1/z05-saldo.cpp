#include <iostream>
using namespace std;

int main(){
	int n, cont = 1;
	while (cin >> n && n != 0) {
		int golPro, golContra, saldoPartida, melhorSaldo, inicioPeriodo = 0, fimPeriodo = 0;
		bool fim = true;
		for (int i = 0; i < n; ++i){
			cin >> golPro >> golContra;
			saldoPartida = golPro - golContra;
			if (saldoPartida < 0){
				// 	inicioPeriodo = 0;
				// 	fimPeriodo = 0;
				fim = true;
			}
			if (saldoPartida >= 0 && saldoPartida )> {
				if (fim == true) {
					inicioPeriodo = i+1;
					fimPeriodo = i+1;
					fim = false;
				}
				else {
					fimPeriodo = i+1;
				}
			}
			cout << "Inicio = " << inicioPeriodo << " | Fim = " << fimPeriodo << endl;
		}
		cout << "Teste " << cont++ << endl;
		if (fimPeriodo == 0){
			cout << "nenhum";
		}
		else {
			cout << inicioPeriodo << " " << fimPeriodo;
		}
		cout << endl<< endl;
	}	
}

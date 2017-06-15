#include <iostream>
#include "stdio.h"
using namespace std;

int main() {
	int participantes, rodadas, testes = 1, vencedor;
	scanf("%d%d", &participantes, &rodadas);
	while (rodadas != 0 && participantes != 0) {
		int fila[participantes];
		for (int i = 0; i < participantes; ++i) {
			scanf("%d", &fila[i]);
		}
		for (int i = 0; i < rodadas; ++i) {
			int pessoas, ordem; 
			scanf("%d%d", &pessoas, &ordem);
			for (int j = 0; j < participantes; ++j) {
				int resposta;
				if (fila[j] == -1){
					continue;
				}
				scanf("%d", &resposta);
				if (i == rodadas-1 && resposta == ordem) {
					vencedor = fila[j];
				}
				if (fila[j] != -1 && resposta != ordem) {
					fila[j] = -1;
				}
			}
		}
		cout << "Teste " << testes++ << endl << vencedor << endl;
		scanf("%d%d", &participantes, &rodadas);
	}
}

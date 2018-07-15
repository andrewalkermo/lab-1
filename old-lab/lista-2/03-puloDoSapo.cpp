#include <iostream>
using namespace std;
int main() {
	int pedras, sapos, posicao, distancia;
	cin >> pedras >> sapos;
	int vet[pedras];
	for (int i = 0; i < pedras; i++) {
		vet[i]=0;

	}

	for (int i = 0; i < sapos; i++) {

		cin >> posicao >> distancia;

		for (int j = posicao; j <= pedras; j) {
			vet[j-1] = 1;
			j+=distancia;
			//cout << "ate aqui" << endl;
		}
		for (int j = posicao; j > 0; j) {
			vet[j-1] = 1;
			j-=distancia;
		}
	}
	for (int i = 0; i < pedras; i++) {
		cout << vet[i] << endl;
	}

}

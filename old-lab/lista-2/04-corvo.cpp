#include <iostream>
#include <vector>

using namespace std;

int main() {
	int casas, cartas, teste = 1, max = 10001;
	while(cin >> casas >> cartas && casas != 0 && cartas != 0) {
		vector<int>v(casas);
		vector<int>m;
		for (int i = 0; i < cartas*2; ++i) {
			int casa;
			cin >> casa;
			v[casa-1]++;
		}
		for (int i = 0; i < casas; ++i) {
			// cout << v[i];
			if (i == 0){
				m.push_back(i+1);
				// cout <<".";
				max = v[i];
			}
			else if (v[i] > max){
				m.clear();
				m.push_back(i+1);
				// cout <<"-";
				max = v[i];

			}
			else if (v[i] == max) {
				m.push_back(i+1);
				// cout <<"/";
			}
		}
		cout << "Teste " << teste++ << endl;
		for (int i = 0; i < m.size(); ++i) {
			cout << m[i] << " ";
		}
		cout << endl << endl;
	}
}

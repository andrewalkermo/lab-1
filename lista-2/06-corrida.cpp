#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int carros, voltas;
	cin >> carros >> voltas;
	vector<int> v(carros);
	vector<int> v2(carros);
	for (int i = 0; i < carros; ++i) {
		for (int j = 0; j < voltas; ++j){
			int tempo;
			cin >> tempo;
			v[i] += tempo;
			v2[i] += tempo;
		}
	}
	sort(v.begin(), v.end());
	for (int i = carros-1; i > 4; --i) {
		for (int j = 0; j < carros; ++j) {
			if (v[i] == v2[j]) {
				cout << i-1 << endl;
				break;
			}
		}
	}
	// cout << endl;
}

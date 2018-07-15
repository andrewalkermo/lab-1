#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n, k,min, digito;
	cin >> n >> k;
	vector<int> equipes(k);

	for (int i = 0; i < n; ++i){
		cin >> digito;
		equipes[(digito-1)]++;
	}
	cout << equipes.size() << " " << n << endl;
	for (int i = 0, min = n + 1; i < equipes.size(); i++) {
		cout << equipes[i] << " ";
		if (equipes[i] < min) 
			min = equipes[i];
	}
		
	cout << endl;
	cout << min << endl;

}				
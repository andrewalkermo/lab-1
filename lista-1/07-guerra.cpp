#include <iostream>
using namespace std;
int main()
{
	int n,som = 0, met = 0, k;
	cin >>n;
	int vet[n];
	for (int i = 0; i < n; i++) {
		cin >> vet[i];
	}
	for (int i = 0; i < n; i++) {
		som += vet[i];
	}
	for (k = 0; k < n; k++) {
		met += vet[k];
		if (met == (som/2)) {
			break;
		}
	}
	cout <<(k+1)<< endl;
}
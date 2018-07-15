#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int t, l;
	cin >> t >> l;
	vector<int> v(t);
	for (int i = 0; i < t; ++i) {
		int pontos;
		cin >> pontos;
		v[i] = pontos;
	}
	sort(v.begin(), v.end());
	for (int i = l-1, j = t-1; i >= 0; --i) {
		cout << v[j] << endl;
		j--;		
	}
	// cout << endl;
}

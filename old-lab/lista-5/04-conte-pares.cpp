#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;
int main () {
	int n, k, x, cont = 0;
	vector<int> v;
	vector<int>::iterator it;
	cin >> n;
    cin >> k;
	for (int i = 0; i < n; i++) {
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	for (it = v.begin(); it != v.end(); it++) {
		if(binary_search(v.begin(), v.end(), (*it + k))) {
            cont++;
        }
	}
	cout << cont << "\n";
}

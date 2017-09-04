#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <list>
using namespace std;
int main () {
	int n, m, x;
	list<int> v;
	list<int>::iterator it;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		v.push_back(x);
	}
  cin >> m;
  for (int i = 0; i < m; i++) {
		cin >> x;
    it = find(v.begin(), v.end(), x);
    v.erase(it);
	}
  for (it = v.begin(); it != v.end(); it++) {
    cout << *it << " ";
	}
  cout << endl;
}

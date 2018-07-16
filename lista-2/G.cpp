#include <iostream>
#include <queue>
#include <utility>
#include <functional>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b) {
	return a.second > b.second || (a.second == b.second && a.first > b.first);
}

using namespace std;

int main() {
    priority_queue<pair<int,int>, vector<pair<int,int> >,  less< pair<int,int> > >pq;

    // int x, n;
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        pair<int,int> maquina;
        cin >> maquina.second;
        maquina.first = ++i;
        // if(i < x) {
            pq.push(maquina);
        // }
        // else {

        // }

    }
    while(!pq.empty()) {
		cout << pq.top().second << endl;
		pq.pop();
	}

}

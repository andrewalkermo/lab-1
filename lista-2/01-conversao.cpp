#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> msg(n);
	vector<int> cript(n+2);

	for (int i = 0; i < n; ++i){
		int digito;
		cin >> digito;
		msg.push_back(digito);
		if (digito == 1){
			cript[i]+= 1;
			cript[i+1]+= 1;
			cript[i+2]+= 1;
		}
	}
	for (int i = 1; i < cript.size()-1; ++i)
	{
		cout << cript[i] << " ";
	}
	cout << endl;

}				
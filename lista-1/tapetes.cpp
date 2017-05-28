#include <iostream>
using namespace std;
int main(){
	int tubo, tapetes;
	cin >> tubo >> tapetes;
	cout << ((tubo-tapetes+1)*(tubo-tapetes+1))+tapetes-1 << endl;
	return 0;
}

#include <iostream>
int comeco = 1986; 
int cometa(int ano, int comeco){
	 return (comeco >= ano) ? comeco : cometa(ano, comeco+76);  	
}
using namespace std;

int main() {
	int ano;
	cin >> ano; ano+=1;
	cout << cometa(ano, comeco) << endl;
	return 0;
}	
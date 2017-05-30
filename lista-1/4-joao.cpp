#include <iostream>
using namespace std;
int main (){
    unsigned long long num, num1;
    while(cin >> num and num !=0){
        bool verf = false;
        int cont = 1;
        num1 = num*num;
        while(num1 >= num || num1 >= 10 && num1 % 10 == 0){
            num1 /= 10;
            cont *= 10;
            if (num == 1 || num1 + ((num*num) - (num1 * cont)) == num && ((num*num) - (num1 * cont)) != 0) {
                verf = true;
            }
        }
        if (verf == true) {
            cout << num << ": S" << endl;
        }
        else {
            cout << num << ": N" << endl;
        }
    }
}

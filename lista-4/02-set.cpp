#include <iostream>
#include <set>
using namespace std;
int main() {
    int p, c;
    while (cin >> p >> c && !(c == 0 && p == 0)) {
        set<int> paula, clara, total;
        for (int i = 0; i < p; i++) {
            int id;
            cin >> id;
            paula.insert(id);
            total.insert(id);
        }
        for (int i = 0; i < c; i++) {
            int id;
            cin >> id;
            clara.insert(id);
            total.insert(id);
        }
        if(clara.size() < paula.size()){
            cout <<clara.size()-(clara.size()+paula.size()-total.size())<< endl;
        }
        else{
            cout <<paula.size()-(paula.size()+clara.size()-total.size())<< endl;
        }
    }
}





// for (set<int>::iterator it=clara.begin(); it != clara.end(); it++) {
//     total.insert(*it);
// }
// for (set<int>::iterator it=paula.begin(); it != paula.end(); it++) {
//     total.insert(*it);
// }

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main() {
    int nbandeiras, comandos, posicao = 0, metros = 0;
    cin >> nbandeiras >> comandos;
    vector<int> bandeiras;
    for (int i = 0; i < nbandeiras; i++) {
        int band;
        cin >> band;
        bandeiras.push_back(band);
    }
    for (int i = 0; i < comandos; i++) {
        int comando;
        cin >> comando;
        vector<int>::iterator it;
        it = lower_bound(bandeiras.begin(), bandeiras.end(), comando);
        metros += abs(posicao - (it-bandeiras.begin()));
        posicao = (it-bandeiras.begin());
    }
    cout << metros << endl;
}

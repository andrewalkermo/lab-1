#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <list>
using namespace std;

int main() {
	int participantes, rodadas, testes = 1, x;
  scanf("%d%d", &participantes, &rodadas);
	while (rodadas != 0 && participantes != 0) {
    list<int> v;
    list<int>::iterator it;
		for (int i = 0; i < participantes; i++) {
      scanf("%d", &x);
      v.push_back(x);
		}
		for (int i = 0; i < rodadas; i++) {
			int pessoas, ordem;
			scanf("%d%d", &pessoas, &ordem);
      it = v.begin();
			for (int j = 0;j < pessoas; j++) {
        int resposta;
        scanf("%d", &resposta);
        if (resposta != ordem){
          v.erase(it);
        }
        it++;
			}
		}
		cout << "Teste " << testes++ << endl << v.front() << endl;
		scanf("%d%d", &participantes, &rodadas);
	}
}

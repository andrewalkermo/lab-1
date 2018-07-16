// greater example
#include <iostream>     // cout
#include <functional>   // greater
#include <algorithm>    // sort
using namespace std;
int main () {
  int numbers[]={20,40,50,10,30};
  sort (numbers, numbers+5, greater<int>());
  for (int i=0; i<5; i++)
    cout << numbers[i] << ' ';
  cout << '\n';
  return 0;
}

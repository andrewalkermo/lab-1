struct pessoa {
    int id;
    string nome;
    ...
};
bool cmp(pessoa i, pessoa j) { return (i.id < j.id || i.id == j.id && i.nome < j.nome); }
int main() {
    vector<pessoa> v;
...
    stable_sort (v.begin(), v.end(), cmp);
    pessoa j;
    …
    bool r = binary_search(v.begin(), v.end(), j, cmp); // pode usar uma função de comparação, assim como o sort
}

#include <iostream>
#include <vector>
using std::vector;

using std::cout;

int main() {

    vector<int> a {1, 2, 3, 4, 5};
    for (auto i : a) {
        cout<<i<<"\n";
        // Imprimir los numeros
    }
}

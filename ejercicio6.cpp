
#include <iostream>
#include <vector>
int main() {

    std::vector<std::vector<int>> v{{1, 2}, {3, 4}, {5, 6}};
    for (auto a : v) {
        for (auto i : a) {
            std::cout<<i<<"\n";
        // imprimir i
        }
        
        // salto de linea
    }
}


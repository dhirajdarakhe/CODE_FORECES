
#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> set = {1, 2, 3, 4, 5};
    for (auto it = set.begin(); it != set.end(); ++it) {
        std::cout << ".";
        set.erase(it);
    }
    std::cout << set.size()+1;
    return 0;
}
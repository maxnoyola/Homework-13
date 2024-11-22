#include <iostream>
#include <map>

int main() {
    std::map<int, int> numbers1 = {{1, 1}, {2, 2}, {3, 3}, {4, 4}, {5, 5}, {6, 6}, {7, 7}, {8, 8}, {9, 9}};
    std::map<int, int> numbers2 = {{1, 10}, {2, 20}, {3, 30}, {4, 40}, {5, 50}, {6, 60}, {7, 70}, {8, 80}, {9, 90}};
    for (const auto& pair : numbers2) {
        numbers1.insert({pair.first, pair.second});
    }
    std::cout << "Interlaced map (numbers): ";
    for (const auto& pair : numbers1) {
        std::cout << pair.first << ": " << pair.second << " ";
    }
    std::cout << std::endl;

    return 0;
}


#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> arr = {5, 2, 9, 1, 5, 6};

    std::sort(arr.begin(), arr.end());

    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
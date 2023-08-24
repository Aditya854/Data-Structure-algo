#include <iostream>
#include <unordered_set>
#include <vector>

std::vector<int> removeDuplicates(const std::vector<int>& input) {
    std::unordered_set<int> seen;
    std::vector<int> result;

    for (int num : input) {
        if (seen.find(num) == seen.end()) {
            seen.insert(num);
            result.push_back(num);
        }
    }

    return result;
}

int main() {
    std::vector<int> input = {1,1,3,2,1,4,5,4};
    std::vector<int> uniqueNumbers = removeDuplicates(input);

    for (int num : uniqueNumbers) {
        std::cout << num << " ";
    }

    return 0;
}

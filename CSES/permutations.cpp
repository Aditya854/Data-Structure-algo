#include <iostream>
#include <string>

std::string solution(std::string S) {
    size_t pos;
    // Replace all occurrences of "plus" with "+"
    while ((pos = S.find("plus")) != std::string::npos) {
        S.replace(pos, 4, "+");
    }
    // Replace all occurrences of "minus" with "-"
    while ((pos = S.find("minus")) != std::string::npos) {
        S.replace(pos, 5, "-");
    }
    return S;
}

int main() {
    std::string S = "plusminusminusplus"; // Example input
    std::cout << solution(S) << std::endl; // Output should be "-+-"
    return 0;
}

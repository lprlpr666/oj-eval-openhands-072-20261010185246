// Simple echo program
// Final version comment
// Added comment before include
#include <iostream>
#include <string>
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::string line;
    while (std::getline(std::cin, line)) {
        std::cout << line;
        if (!std::cin.eof()) std::cout << '\n';
    }
    return 0; // end of program
}

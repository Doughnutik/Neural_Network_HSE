#include <fstream>
#include <iostream>

int main() {
    std::ifstream in;
    in.open("img_101.jpg");
    std::ofstream out;
    out.open("img.txt");
    if (!out.is_open()) {
        std::cerr << "aaasdfasfd";
    }
    uint8_t byte;
    for (size_t i = 0; i < 28; ++i){
        for (size_t j = 0; j < 28; ++j){
            in >> byte;
            out << static_cast<int>(byte) << " ";
        }
        out << "\n";
    }
    in.close();
    out.close();
}
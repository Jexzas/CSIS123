#include <iostream>
#include <string>
class Board {
        double length;
        double width;
        double depth;
        std::string name;
        double boardfeet = (length * width * depth) / 144;
    public: 
        Board(std::string title, double l, double w, double d);
        void getBoard() {
            std::cout << "Species: " << name << "\n";
            std::cout << "Board feet in inventory: " << boardfeet << "\n";
        };
};
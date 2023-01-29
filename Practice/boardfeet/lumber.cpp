#include <iostream>

// instead of header
class Lumber {
  public: 
    std::string name;
    double length;
    double width;
    double height;
    double volume;
    Lumber(std::string newname, double newlength, double newwidth, double newheight) {
        name = newname;
        length = newlength;
        width = newwidth; 
        height = newheight;
        volume = length * width * height;
  }

  public:
    double get_area() {
      return volume; 
    }

};

int main() {
  std::string user_name;
  double user_length;
  double user_height;
  double user_width;
  std::cout << "Let's get to know the wood you're dealing with.\n";
  std::cout << "Firstly, what's the type of lumber we're dealing with?\n";
  std::cin >> user_name;
  std::cout << "\n" << "Okay, what's the length? (inches) \n";
  std::cin >> user_length;
  std::cout << "\n" << "And the width? \n";
  std::cin >> user_width;
  std::cout << "\n" << "And finally, the height: \n";
  std::cin >> user_height;
  Lumber user_lumber(user_name, user_length, user_width, user_height);
  double boardFeet = user_lumber.get_area() / 144;
  std::cout << "Your " << user_lumber.name << " board is " << boardFeet << " board feet.";
}
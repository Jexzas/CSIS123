#include <iostream>
using namespace std;
void funcDefaultParam(int num, char ch = '*', double y = 2.5, string z = "*");
int main () {
    funcDefaultParam(1);
}

void funcDefaultParam(int num, char ch, double y, string z) {
    cout << num << " " << ch << " " << y << " " << z << endl;
};

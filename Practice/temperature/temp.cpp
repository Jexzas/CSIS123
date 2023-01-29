#include <iostream> 
#include <string>

double cToF(double c) {
    return ((c * 1.8) + 32);
}

double fToC(double f) {
    return ((f - 32) * .5556);
}

double kToC(double k) {
    return ( k - 273 );
}

double cToK(double c) {
    return ( c + 273 );
}

double fToK(double f) {
    return (fToC(f) + 273);
}

double kToF(double k) {
    return (cToF(k - 273));
}

int main() {
    std::cout << "Please enter a unit of temperature(celsius, fahrenheit, or kelvin)" << std::endl;
    std::string unit;
    std::cin >> unit;
    int chosenIn;
    int chosenOut;
    if (unit == "celsius") {
        chosenIn = 0;
    } else if (unit == "fahrenheit") {
        chosenIn = 1;
    } else if (unit == "kelvin") {
        chosenIn = 2;
    }
    double input;
    std::cout << "Please provide the temperature you'd like to convert: " << std::endl;
    std::cin >> input;
    std::string outputUnit;
    std::cout << "Please enter the temperature you'd like to convert to(celsius, fahrenheit, or kelvin)" << std::endl;
    std::cin >> outputUnit;
    if (outputUnit == "celsius") {
        chosenOut = 0;
    } else if (outputUnit == "fahrenheit") {
        chosenOut = 1;
    } else if (outputUnit == "kelvin") {
        chosenOut = 2;
    }
    double result;
    switch(chosenIn){
        case 0: {
            switch(chosenOut) {
                case 1: 
                    result = cToF(input);
                    break;
                case 2: 
                    result = cToK(input);
                    break;
                };
            break;
        }
        case 1: {
            switch(chosenOut) {
                case 0:
                    result = fToC(input);
                    break;
                case 2:
                    result = fToK(input);
                    break;
            };
            break;
        }
        case 2: {
            switch (chosenOut) {
                case 0: 
                    result = kToC(input);
                    break;
                case 1:
                    result = kToF(input);
                    break;
            };
            break;
        }

    }
    std::cout << "Okay, so " << input << " degrees " << unit << " comes out to " << result << " degrees " << outputUnit << "." << std::endl;
    
}
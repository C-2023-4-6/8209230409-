// main.cpp
#include <iostream>
#include "mytemperature.h"
using namespace std;

int main0() {
    cout << "Celsius    Fahrenheit   |   Fahrenheit       Celsius" << endl;

    for (double celsius = 40.0; celsius >= 31.0; celsius -= 1.0) {
        double fahrenheit = celsius_to_fah(celsius);
        double convertedCelsius = fahrenheit_to_cels(120.0 - (celsius - 31.0) * 10.0);
        cout << celsius << "       " << fahrenheit << "        |   "
            << 120.0 - (celsius - 31.0) * 10.0 << "            "
            << convertedCelsius << endl;
    }

    return 0;
}

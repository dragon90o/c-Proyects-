#include <iostream>

using namespace std;

int main()
{
    cout << "this a temperature converter" << endl
         << "give me the temperature in fahrenheit: ";

    double fahrenheit;
    cin >> fahrenheit;

    double celcius = (fahrenheit - 32) * 5 / 9;
    cout << "the temperature in celcius is: " << celcius << endl;

    return 0;
}
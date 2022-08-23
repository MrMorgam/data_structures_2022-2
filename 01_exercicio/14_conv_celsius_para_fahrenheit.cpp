#include <iostream>

using namespace std;

int main()
{
    float temp_celsius;

    cout << "Digite a temperatura em °C: ";
    cin >> temp_celsius;

    float temp_fahrenheit = ((9 * temp_celsius) + 160) / 5;

    cout << "Temperatura em graus Fahrenheit: " << temp_fahrenheit << " °F" << endl;

    return 0;
}
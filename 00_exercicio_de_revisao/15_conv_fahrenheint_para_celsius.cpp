#include <iostream>

using namespace std;

int main()
{
    float temp_fahrenheint;

    cout << "Digite a temperatura em °F: ";
    cin >> temp_fahrenheint;

    float temp_celsius = ((5 * temp_fahrenheint)  - 160) / 9;

    cout << "Temperatura em graus Celsius: " << temp_celsius << " °C" << endl;

    return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int tempo_total_hrs;
    
    cout << "Digite um tempo inteiro em horas: ";
    cin >> tempo_total_hrs;

    int tempo_semanas = trunc(tempo_total_hrs / 168);
    int resto = tempo_total_hrs % 168;
    int tempo_dias = trunc(resto / 24);
    int tempo_hrs = resto % 24;

    cout << "Tempo total: " << tempo_semanas << " semana(s), " << tempo_dias << " dias(s) e " << tempo_hrs << " hora(s)" << endl;

    return 0;
}
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    double N;
    cin >> N;

    int notes[] = {100, 50, 20, 10, 5, 2};
    int coins[] = {100, 50, 25, 10, 5, 1};

    int value = (int)N;
    int cents = round((N - value) * 100);

    cout << "NOTAS:" << endl;
    for (int i = 0; i < 6; i++) {
        int qtd = value / notes[i];
        cout << qtd << " nota(s) de R$ " << notes[i] << ".00" << endl;
        value %= notes[i];
    }

    cents += value * 100;

    cout << "MOEDAS:" << endl;
    for (int i = 0; i < 6; i++) {
        int qtd = cents / coins[i];
        printf("%d moeda(s) de R$ %.2f\n", qtd, coins[i] / 100.0);
        cents %= coins[i];
    }

    return 0;
}

#include <iostream>
using namespace std;

void tambah(int *a, int *b, int *result) {
    *result = *a + *b;
}

void kurang(int *a, int *b, int *result) {
    *result = *a - *b;
}

void kali(int *a, int *b, int *result) {
    *result = *a * *b;
}

void bagi(int *a, int *b, float *result) {
    if (*b != 0) {
        *result = static_cast<float>(*a) / *b;
    } else {
        cout << "Error: Pembagian dengan nol tidak diperbolehkan." << endl;
    }
}

int main() {
    int num1, num2;
    cout << "Masukkan dua bilangan: ";
    cin >> num1 >> num2;

    int sum, difference, product;
    float division;

    tambah(&num1, &num2, &sum);
    kurang(&num1, &num2, &difference);
    kali(&num1, &num2, &product);
    bagi(&num1, &num2, &division);

    cout << "Hasil penambahan: " << sum << endl;
    cout << "Hasil pengurangan: " << difference << endl;
    cout << "Hasil perkalian: " << product << endl;
    cout << "Hasil pembagian: " << division << endl;

    return 0;
}
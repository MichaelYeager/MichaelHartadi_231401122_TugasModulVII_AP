#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int *ptr;

    int odd = 1;
    for (int i = 0; i < 10; i++) {
        numbers[i] = odd;
        odd += 2;
    }

    ptr = numbers;
    for (int i = 0; i < 10; i++) {
        cout << "Bilangan ganjil: " << *ptr << " | Alamat memori: " << ptr << endl;
        ptr++;
    }

    return 0;
}
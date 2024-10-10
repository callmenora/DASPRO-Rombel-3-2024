//Bebek-bebek Pak Dengklek senang mengirimkan pesan misterius.
//Bebek ke-1 mengirimkan pesan berikut

#include <iostream>
using namespace std;

int main() {
    int N = 10;

    for (int i = 1; i <= N; i++) {
        // cetak i buah "*"
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // sisanya, cetak "."
        for (int j = i + 1; j <= N; j++) {
            cout << ".";
        }

        cout << endl;
    }
}

// karena setiap bintang yang dimasukkan ditambah 1 pada setiap baris berikutnya

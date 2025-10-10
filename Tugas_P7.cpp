#include <iostream>
#include <cmath>
using namespace std;

struct proses_fcfs {
    int head;
    int jumlah;
    int request[100];
};

void kalkulasi(proses_fcfs data) {
    int seek_count = 0;
    int head = data.head;

    cout << "=== HASIL DARI TES ===" << endl ;
    for (int i = 0; i < data.jumlah; i++) {
        seek_count += abs(data.request[i] - head);
        head = data.request[i];
        cout << data.request[i] << ","  ;
    }

    cout << "Hasil Dari Perhitungan Dikurang Dan Di Tambah : " << seek_count << endl;
    cout << "================================================"<< endl;

}

int banyak_data() {
    proses_fcfs data;

    cout << "Masukan Head Yang Anda Inginkan :  ";
    cin >> data.head;

    cout << "Masukan Kolom Yang Anda Inginkan  :  ";
    cin >> data.jumlah;

    for (int i = 0; i < data.jumlah; i++) {
        cout << "Kolom "<< i + 1 << " : ";
        cin >> data.request[i];
    }

    kalkulasi(data);
    return 0;
}

int main(){
    int pilihan;

    cout << "==================================="<< endl;
    cout << "Wellcome Program By : Palaguna" << endl;
    cout << "==================================="<< endl;
    cout << "DAFTAR MENU " << endl;
    cout << "==================================="<< endl;
    do {
        cout << "(1). Mulai Program" << endl;
        cout << "(2). Hentikan Program" << endl;
        cout << "Pilihan Mu : ";
        cin >> pilihan;

        switch (pilihan){
            case 1:
                banyak_data();
                break;
            case 2:
                cout << "Terimakasih !";
                break;
        }
    }while(pilihan != 2);

}

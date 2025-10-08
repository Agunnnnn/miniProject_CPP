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

    cout << "=== HASILtes ===" << endl ;
    for (int i = 0; i < data.jumlah; i++) {
        seek_count += abs(data.request[i] - head);
        head = data.request[i];
        cout << data.request[i] << ","  ;
    }

    cout << "Pejumlahan Pengurangan hasil: " << seek_count << endl;

}

int banyak_data() {
    proses_fcfs data;

    cout << "Test Masukan Head :  ";
    cin >> data.head;

    cout << "test brpa array? :  ";
    cin >> data.jumlah;

    for (int i = 0; i < data.jumlah; i++) {
        cout << "test  "<< i + 1 << ": ";
        cin >> data.request[i];
    }

    kalkulasi(data);
    return 0;
}

int main(){
    cout << "====================" << endl;
    banyak_data();
}

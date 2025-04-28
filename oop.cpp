#include <iostream>
using namespace std;

class Hewan {
    private:
    string jeniskelamin;
    public:
    string tipe;
    string umur;

    void inputData() {
        cout << "Masukkan jenis kelamin: " << endl;
        cin >> jeniskelamin;
        cout << "Masukkan tipe hewan: " << endl;
        cin >> tipe;
        cout << "Masukkan umur hewan: " << endl;
        cin >> umur;
    }

    void tampilKelamin() {
        cout << "Jenis kelaminnya adalah: " << jeniskelamin << endl;
    }
};

int main() {
    Hewan monyet;
    monyet.inputData();
    cout << "Umurnya adalah: " << monyet.umur << endl;
    cout << "Tipenya adalah: " << monyet.tipe << endl;
    monyet.tampilKelamin();
}
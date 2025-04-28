#include <iostream>
using namespace std;

class lingkaran{
    public:
    double jarijari;
    double luasLingkaran;

    void inputData() {
        cout << "Masukkan jari-jari: " << endl;
        cin >> jarijari;
    }

    double hitungLuas() {
        return 3.14 * jarijari * jarijari;
    }
};

int main() {
    lingkaran bundar;
    bundar.inputData();
    bundar.jarijari;
    cout << endl;
    cout << "Luasnya adalah: " << bundar.hitungLuas() << endl;
    cout << endl;


}
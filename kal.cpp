#include <iostream>
#include <kallulator.h>

using namespace std;

int inputData (string v ="A");

int main(int argc, char const *argv[])
{
    int a, b;
    a = inputData();
    b = inputData("B");

    cout << "\nHasil perkalian AxB adalah: " << kali(a,b);
    cout << "\nHasil perkalian A/B adalah: " << bagi(a,b);
    cout << "\nHasil penambahan A+B adalah: " << tambah(a,b);
    cout << "\nHasil pengurangan A-B adalah: " << kurang(a,b) <<endl;

    return 0;
}
int inputData(string v) {
    cout << "masukan bilangan " << v << ": ";
    int bil;
    cin >> bil;
    return bil;
}

#include <iostream>
#include <iomanip>  // for std::setw(n), std::setfill(ch), std::left, std::right

using namespace std;

int main() {
    cout << setw(5) << left << "ID";          // do rong 5 ky tu, canh trai ID
    cout << setw(30) << left << "Name";        // do rong 30 ky tu, canh trai Name
    cout << setw(20) << right << "Address" << endl; // do rong 20 ky tu, canh phai Address

    cout << setfill('-');                     // set fill bang ky tu '-'
    cout << setw(55) << "-" << endl;          // fill 55 ky tu '-'

    cout << setfill(' ');                     // reset fill bang ky tu ' '
    // in thong tin theo format phu tren

    cout << setw(5) << left << 1;
    cout << setw(30) << left << "Nguyen Doan Ngoc Giau";
    cout << setw(20) << right << "Sai Gon" << endl;

    cout << setw(5) << left << 2;
    cout << setw(30) << left << "Tran Kim Long";
    cout << setw(20) << right << "Da Lat" << endl;

    cout << setw(5) << left << 3;
    cout << setw(30) << left << "Nguyen Son Tung";
    cout << setw(20) << right << "Dong Nai" << endl;

    return 0;
}
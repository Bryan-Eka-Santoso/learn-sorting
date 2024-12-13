#include <iostream>
#include <vector>
//#include <algorithm>

using namespace std;

struct tbarang {
    string nama;
    int harga;
};

// Selection Sort
void sorting(vector<tbarang> &l){
    int i, j;
    for(int i=0; i < l.size(); i++){
        for(int j=i+1; j < l.size(); j++){
            if(l[i].harga > l[j].harga){
                swap(l[i], l[j]);
            }
        }
    }
}

int main()
{
    int printf;

    vector<tbarang> list_barang;
    tbarang temp;

    for(int i=0; i<5; i++){
        cout << "Nama barang ke -" << i+1 << ": ";
        cin >> temp.nama;
        cout << "Harga barang ke -" << i+1 << ": ";
        cin >> temp.harga;
        list_barang.push_back(temp);
    }

    cout << endl;

    sorting(list_barang);

    for(int i=0; i<5; i++){
        cout << "Nama: " << list_barang[i].nama << " - Harga: " << list_barang[i].harga << endl;
    }

    return 0;
}

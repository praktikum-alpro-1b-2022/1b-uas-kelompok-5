#include <iostream>
#include <string>
using namespace std;

int main(){
    string desk;
    int kodebuku, jumlah, total_belanja, harga_akhir;


    string namaProduk[5] = {"Buku Sejarah", "Buku Wawasan Umum", "Buku Novel", "Buku Tulis", "Buku Pelajaran"};

    int harga [5][5] = {{50000}, {30000}, {80000}, {10000}, {25000}};
    cout<<" ---------------------------------------------------------"<<endl;
    cout<<" |\t\t***** TOKO BUKU BELIAU *****\t\t |"<<endl;
    cout<<" |\t\t  Jl.SINGAPERBANGSA NO.18\t\t |"<<endl;
    cout<<" ---------------------------------------------------------"<<endl;
    cout << endl;

    desk =
    "+--------------+---------------+---------------+\n"
    "|  kode Buku   | Nama Produk   | Harga         |\n"
    "+--------------+---------------+---------------+\n"
    "|     1        | Buku Sejarah  | Rp.50.000,-   |\n"
    "+--------------+---------------+---------------+\n"
    "|     2        | Buku Umum     | Rp.30.000,-   |\n"
    "+--------------+---------------+---------------+\n"
    "|     3        | Novel         | Rp.80.000,-   |\n"
    "+--------------+---------------+---------------+\n"
    "|     4        | Buku Tulis    | Rp.10.000,-   |\n"
    "+--------------+---------------+---------------+\n"
    "|     5        | Buku Pelajaran| Rp.25.000,-   |\n"
    "+--------------+---------------+---------------+\n\n";
    cout<<desk;

    cout<<"Masukkan kode Buku (1-5): ";
    cin>> kodebuku;

    cout<<"Masukkan Jumlah Pembelian: ";
    cin>>jumlah;

        if (kodebuku == 1) {
            cout << "Anda memilih "<< namaProduk[0]<< endl;
            cout << "Nomor rak: " << &namaProduk[0] << endl;
            cout << "Harga: " << harga [0][0] << endl;
            cout<<"Jumlah Pembelian Rp. "<<harga[0][0]*jumlah<<endl;
            total_belanja = jumlah * 50000;
        }

        else if (kodebuku == 2) {
            cout << "Anda memilih "<< namaProduk[1]<< endl;
            cout << "Nomor rak: " << &namaProduk[1]  << endl;
            cout << "Harga: " << harga [1][0] << endl;
            cout<<"Jumlah Pembelian Rp. "<<harga[1][0]*jumlah<<endl;
            total_belanja = jumlah * 30000 ;
      }

        else if (kodebuku == 3) {
            cout << "Anda memilih "<< namaProduk[2]<< endl;
            cout << "Nomor rak: " << &namaProduk[2]  << endl;
            cout << "Harga: " << harga [2][0] << endl;
            cout<<"Jumlah Pembelian Rp. "<<harga[2][0]*jumlah<<endl;
            total_belanja = jumlah * 80000 ;
      }

        else if (kodebuku == 4) {
            cout << "Anda memilih "<< namaProduk[3]<< endl;
            cout << "Nomor rak: " << &namaProduk[3]  << endl;
            cout << "Harga: " << harga [3][0] << endl;
            cout<<"Jumlah Pembelian Rp. "<<harga[3][0]*jumlah<<endl;
            total_belanja = jumlah * 10000 ;
      }

        else if (kodebuku == 5) {
            cout << "Anda memilih "<< namaProduk[4]<< endl;
            cout << "Nomor rak: " << &namaProduk[4]  << endl;
            cout << "Harga: " << harga [4][0] << endl;
            cout<<"Jumlah Pembelian Rp. "<<harga[4][0]*jumlah<<endl;
            total_belanja = jumlah * 25000 ;
      }

        if ((total_belanja >= 30000) && (total_belanja < 200000)) {
            harga_akhir = total_belanja - (0.1*total_belanja);
            cout << "Selamat, anda mendapat diskon 10%" << endl;
        }
        else if ((total_belanja >= 200000) && (total_belanja < 500000)) {
            harga_akhir = total_belanja - (0.2*total_belanja);
            cout << "Selamat, anda mendapat diskon 20%" << endl;
        }
        else if (total_belanja >= 500000) {
            harga_akhir = total_belanja - (0.3*total_belanja);
            cout << "Selamat, anda mendapat diskon 30%" << endl;
        }
        else {
            harga_akhir = total_belanja;
        }

    cout << "Total bayar: Rp." << harga_akhir << endl;

    selesai:
    cout << endl;
    cout << endl;
    cout<<"\t ***** T E R I M A K A S I H *****\t\t "<<endl;
    cout<<" --------------------------------------------------"<<endl;

    return 0;

}

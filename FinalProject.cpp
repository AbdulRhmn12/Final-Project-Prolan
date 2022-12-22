#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#define MAX 20

bool isTrue = false;
int flag = 0;

using namespace std;

struct perpustakaan{
    string judul_buku;
    string penerbit;
    string penulis;
    int tahun_terbit;
    float rating;
    string status;
}; struct perpustakaan perpus[MAX]; 

struct Search_Engine{
    string judul_buku;
    string tags;
    float rating;
}; vector<Search_Engine> SEO;

void data_buku(){
    perpus[1].judul_buku = "Beginning Ethical Hacking with Kali Linux";
    perpus[1].penerbit = "Apress";
    perpus[1].penulis = "Sanjib Sinha";
    perpus[1].tahun_terbit = 2018;
    perpus[1].rating = 9.2;
    perpus[1].status = "Tersedia";
    
    // Lanjutkan sampai 20 buku
}

void data_tags(){
    // Judul buku, Tags (dipisahkan dengan koma), rating
    SEO.push_back({"Beginning Ethical Hacking with Kali Linux", "informatika, hacking, cyber security, belajar linux, linux", 9.2});

    // Lanjutkan sampai 20 buku
}

void searching(){
    if(flag == 1){
        // Mencari data Berdasarkan judul buku
        
    } else if (flag == 2){
        // Mencari data Berdasarkan Penerbit
        
    } else if (flag == 3){
        // Mencari data Berdasarkan Tahun Terbit
        
    }
}

void searching_tags(){
    // Membuat fitur pencarian berdasarkan tags
}

void sorting(){
    if (flag == 4){
        // Sorting buku Berdasarkan Judul buku

    } else if (flag == 5){
        // Sorting buku Berdasarkan Penerbit

    } else if (flag == 6){
        // Sorting buku Berdasarkan Tahun Terbit

    } else if (flag == 7){
        // Sorting buku Berdasarkan Rating

    }
}

void pinjam_buku(){
    // Membuat fungsi untuk meminjam buku
}

void admin(){
    string password;
    cout << "Masukkan password: ";
    getline(cin, password);
    getline(cin, password);

    if(password == "12345"){
        isTrue = true;
    } else {
        isTrue = false;
    }
}

void edit_data(){
    admin();
    if(isTrue){
        if (flag == 8){
            // Masukkan fungsi untuk menambahkan data buku menggunakan stack
        } else if (flag == 9){
            // Masukkan fungsi untuk menghapus data buku menggunakan stack
        } else if (flag == 10){
            // Masukkan fungsi untuk merubah data buku dari dalam stack
        }
    }
}

void printArray(){
    for (int i = 1; i <= MAX; i++){
        // Buatlah fungsi untuk menampilkan array dengan output tabel
    }
}

int main(){
    int pilihan;
    
    cout << "======================================================" << endl;
    cout << "===== PEMROGRAMAN LANJUT   DATABOOK PERPUSTAKAAN =====" << endl;
    cout << "=========  PEMROGRAMAN LANJUT - KELOMPOK 2  ==========" << endl;
    cout << "========= FARIS MUNIR MAHDI  |  21081010064 ==========" << endl;
    cout << "======================================================" << endl;

    data_buku();
    data_tags();
    
    while(1){
        flag = 0;
        isTrue = false;
        cout << "Databook Perpustakaan" << endl;
        cout << "1. Data Seluruh Buku" << endl;
        cout << "2. Cari Buku" << endl;
        cout << "3. Pinjam Buku" << endl;
        cout << "4. Edit Data Buku (Admin Only)" << endl;
        cout << "5. Keluar" << endl;
        cout << "Masukkan pilihanmu: ";
        cin >> pilihan;

        switch(pilihan){
            case 1: cout << endl;
                    cout << "1. Data berurut berdasarkan judul buku" << endl;
                    cout << "2. Data berurut berdasarkan penerbit" << endl;
                    cout << "3. Data berurut berdasarkan tahun terbit" << endl;
                    cout << "4. Data berurut berdasarkan rating" << endl;
                    cout << "Masukkan pilihanmu: ";
                    cin >> pilihan;

                    switch(pilihan){
                        case 1: flag = 4;
                                sorting();
                                cout << endl;
                                break;
                        case 2: flag = 5;
                                sorting();
                                cout << endl;
                                break;
                        case 3: flag = 6;
                                sorting();
                                cout << endl;
                                break;
                        case 4: flag = 7;
                                sorting();
                                cout << endl;
                                break;

                        default: cout << "Pilihanmu Tidak Tersedia!" << endl << endl;
                    }
                    break;
            case 2: cout << endl;
                    cout << "1. Mencari buku berdasarkan judul buku" << endl;
                    cout << "2. Mencari buku berdasarkan penerbit" << endl;
                    cout << "3. Mencari buku berdasarkan tahun terbit" << endl;
                    cout << "4. Mencari buku berdasarkan tags" << endl;
                    cout << "Masukkan pilihanmu: ";
                    cin >> pilihan;

                    switch (pilihan){
                        case 1: flag = 1;
                                searching();
                                cout << endl;
                                break;
                        case 2: flag = 2;
                                searching();
                                cout << endl;
                                break;
                        case 3: flag = 3;
                                searching();
                                cout << endl;
                                break;
                        case 4: isTrue = true;
                                searching_tags();
                                cout << endl;
                                break;
                    
                        default: cout << "Pilihanmu Tidak Tersedia!" << endl << endl;
                    }
                    break;
            case 3: cout << endl;
                    pinjam_buku();
                    break;
            case 4: cout << endl;
                    cout << "1. Menambahkan buku baru ke dalam databook" << endl;
                    cout << "2. Menghapus buku dari databook" << endl;
                    cout << "3. Merubah elemen buku dari databook" << endl;
                    cout << "Masukkan pilihanmu: ";
                    cin >> pilihan;

                    switch (pilihan){
                        case 1: flag = 8;
                                edit_data();
                                cout << endl;
                                break;
                        case 2: flag = 9;
                                edit_data();
                                cout << endl;
                                break;
                        case 3: flag = 10;
                                edit_data();
                                cout << endl;
                                break;
                        default: cout << "Pilihanmu Tidak Tersedia!" << endl << endl;
                    }
                    break;
            case 5: exit (0);

            default: cout << "Pilihanmu Tidak Tersedia!" << endl << endl;
        }
    }
    return 0;
}

#include <algorithm>
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#define MAX 21

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
    perpus[1].judul_buku = "Ethical Hacking with Kali Linux";
    perpus[1].penerbit = "Apress"; 
    perpus[1].penulis = "Sanjib Sinha"; 
    perpus[1].tahun_terbit = 2018;
    perpus[1].rating = 9.2;
    perpus[1].status = "Tersedia";

    perpus[2].judul_buku = "Akuntansi Pengantar 1"; 
    perpus[2].penerbit = "Gava Media"; 
    perpus[2].penulis = "Supardi"; 
    perpus[2].tahun_terbit = 2009;
    perpus[2].rating = 9.0;
    perpus[2].status = "Tersedia";

    perpus[3].judul_buku = "A-Z Psikologi"; 
    perpus[3].penerbit = "Andi Offset"; 
    perpus[3].penulis = "Zainul Anwar"; 
    perpus[3].tahun_terbit = 2012;
    perpus[3].rating = 8.8;
    perpus[3].status = "Tersedia";

    perpus[4].judul_buku = "Bangsa gagal"; 
    perpus[4].penerbit = "LKiS"; 
    perpus[4].penulis = "Nasruddin Anshoriy";
    perpus[4].tahun_terbit = 2008;
    perpus[4].rating = 9.0;
    perpus[4].status = "Tersedia";

    perpus[5].judul_buku = "The Hobbit: An Journey"; 
    perpus[5].penerbit = "HarperCollins Childrens";
    perpus[5].penulis = "Paddy Kempshall"; 
    perpus[5].tahun_terbit = 2013;
    perpus[5].rating = 9.4;
    perpus[5].status = "Tersedia";

    perpus[6].judul_buku = "Koala Kumal"; 
    perpus[6].penerbit = "Gagas Media"; 
    perpus[6].penulis = "Raditya Dika"; 
    perpus[6].tahun_terbit = 2015;
    perpus[6].rating = 8.2;
    perpus[6].status = "Tersedia";

    perpus[7].judul_buku = "Negeri 5 Menara"; 
    perpus[7].penerbit = "PT. Gramedia Pustaka Utama";
    perpus[7].penulis = "Ahmad Fuadi"; 
    perpus[7].tahun_terbit = 2012;
    perpus[7].rating = 9.4;
    perpus[7].status = "Tersedia";

    perpus[8].judul_buku = "Satwa Terancam Bahaya"; 
    perpus[8].penerbit = "Pakar Raya"; 
    perpus[8].penulis = "Jen Green"; 
    perpus[8].tahun_terbit = 2006;
    perpus[8].rating = 9.0;
    perpus[8].status = "Tersedia";

    perpus[9].judul_buku = "TUILET"; 
    perpus[9].penerbit = "Gradien Mediatama"; 
    perpus[9].penulis = "Oben Cedric"; 
    perpus[9].tahun_terbit = 2009;
    perpus[9].rating = 8.4;
    perpus[9].status = "Tersedia";

    perpus[10].judul_buku = "Dear Nathan"; 
    perpus[10].penerbit = "Best Media"; 
    perpus[10].penulis = "Erisca Febrianti";
    perpus[10].tahun_terbit = 2016;
    perpus[10].rating = 9.7;
    perpus[10].status = "Tersedia";

    perpus[11].judul_buku = "Perahu Kertas"; 
    perpus[11].penerbit = "Bentang Pustaka"; 
    perpus[11].penulis = "Dewi Lestari (Dee)";
    perpus[11].tahun_terbit = 2010;
    perpus[11].rating = 9.5;
    perpus[11].status = "Tersedia";

    perpus[12].judul_buku = "5 cm"; 
    perpus[12].penerbit = "PT. Grasindo, Yogyakarta";
    perpus[12].penulis = "Dhonny Dhirgantoro";
    perpus[12].tahun_terbit = 2005;
    perpus[12].rating = 9.9;
    perpus[12].status = "Tersedia";

    perpus[13].judul_buku = "Rindu"; 
    perpus[13].penerbit = "Republika"; 
    perpus[13].penulis = "Tere Liye"; 
    perpus[13].tahun_terbit = 2014;
    perpus[13].rating = 8.2;
    perpus[13].status = "Tersedia";

    perpus[14].judul_buku = "Memahami Film"; 
    perpus[14].penerbit = "Homerian Pustaka"; 
    perpus[14].penulis = "Himawan Pratists";
    perpus[14].tahun_terbit = 2008;
    perpus[14].rating = 8.5;
    perpus[14].status = "Tersedia";

    perpus[15].judul_buku = "Seni Bersikap Bodo Amat"; 
    perpus[15].penerbit = "Gramedia Widiasarana Indonesia";
    perpus[15].penulis = "Mark Manson"; 
    perpus[15].tahun_terbit = 2005;
    perpus[15].rating = 8.9;
    perpus[15].status = "Tersedia";

    perpus[16].judul_buku = "Rapijali"; 
    perpus[16].penerbit = "Bentang Pustaka"; 
    perpus[16].penulis = "Dee Lestari"; 
    perpus[16].tahun_terbit = 2021;
    perpus[16].rating = 8.7;
    perpus[16].status = "Tersedia";

    perpus[17].judul_buku = "Why? Camera Kamera"; 
    perpus[17].penerbit = "Elex Media Komputindo"; 
    perpus[17].penulis = "Yearimdang";
    perpus[17].tahun_terbit = 2021;
    perpus[17].rating = 8.7;
    perpus[17].status = "Tersedia";

    perpus[18].judul_buku = "Wingit"; 
    perpus[18].penerbit = "Elex Media Komputindo"; 
    perpus[18].penulis = "Sara Wijayanto"; 
    perpus[18].tahun_terbit = 2020;
    perpus[18].rating = 8.3;
    perpus[18].status = "Tersedia";

    perpus[19].judul_buku = "Belantik"; 
    perpus[19].penerbit = "Gramedia"; 
    perpus[19].penulis = "Ahmad Tohari"; 
    perpus[19].tahun_terbit = 2001;
    perpus[19].rating = 8.0;
    perpus[19].status = "Tersedia";

    perpus[20].judul_buku = "Runtuhnya Kerajaan Hindu Jawa";
    perpus[20].penerbit = "LKiS"; 
    perpus[20].penulis = "Slamet Muljana"; 
    perpus[20].tahun_terbit = 2007;
    perpus[20].rating = 8.2;
    perpus[20].status = "Tersedia";
}

void data_tags(){
    // Judul buku, Tags (dipisahkan dengan koma), rating
    SEO.push_back({"Beginning Ethical Hacking with Kali Linux", "informatika, hacking, cyber security, belajar linux, linux", 9.2});
    SEO.push_back({"Akuntansi Pengantar 1", "akuntansi, pengantar akuntansi", 9.0});
    SEO.push_back({"A-Z Psikologi : Berbagai kumpulan topik Psikologi", "psikologi, topik psikologi, kesehatan mental", 8.8});
    SEO.push_back({"Bangsa gagal ; Mencari identitas kebangsaan", "karakteristik bangsa, nasionalisme, politik", 9.0});
    SEO.push_back({"The Hobbit: An Unexpected Journey", "gandalf, the hobbit, fiksi, petualangan, dongeng, fairytale", 9.4});

    SEO.push_back({"Koala Kumal", "fiksi, humor, cerita lucu, raditya dika", 8.2});
    SEO.push_back({"Negeri 5 Menara", "fiksi, persahabatan, 5 menara", 9.4});
    SEO.push_back({"Satwa Terancam Bahaya", "hewan, satwa, animal welfare", 9.0});
    SEO.push_back({"TUILET", "komedi, humor, fiksi, cerita lucu", 8.4});
    SEO.push_back({"Dear Nathan", "romantis, fiksi, kisah remaja", 9.7});

    SEO.push_back({"Perahu Kertas", "persahabatan, romantis, fiksi", 9.5});
    SEO.push_back({"5 cm", "persahabatan, fiksi, petualangan, harapan", 9.9});
    SEO.push_back({"Rindu", "fiksi, tere liye", 8.2});
    SEO.push_back({"Memahami Film", "film, movie, tentang film, paham film", 8.5});
    SEO.push_back({"Sebuah Seni untuk Bersikap Bodo Amat", "self improvement, motivasi, psikologi sosial", 8.9});

    SEO.push_back({"Rapijali", "perjuangan remaja, cerita musik", 8.7});
    SEO.push_back({"Why? Camera Kamera", "kamera, belajar kamera, fotografi, definisi kamera", 8.7});
    SEO.push_back({"Wingit", "horor, cerita horor, hantu, kisah horor", 8.3});
    SEO.push_back({"Belantik", "cerita perjalanan hidup, fiksi", 8.0});
    SEO.push_back({"Runtuhnya Kerajaan Hindu Jawa", "sejarah, kerajaan, kerajaan Indonesia", 8.2});
 }

void printArray(){
    cout << "=========================================================================================================================" << endl;
    cout << "Judul Buku\t\t\tPenerbit\t\t\tPenulis\t\t\tTahun Terbit\tRating\tStatus\t" << endl;
    cout << "=========================================================================================================================" << endl;
    for (int i = 1; i < MAX; i++){
        cout<<setiosflags(ios::left)<<setw(32)<<perpus[i].judul_buku;
        cout<<setiosflags(ios::left)<<setw(32)<<perpus[i].penerbit;
        cout<<setiosflags(ios::left)<<setw(24)<<perpus[i].penulis;
        cout<<setiosflags(ios::left)<<setw(16)<<perpus[i].tahun_terbit;
        cout<<setiosflags(ios::left)<<setw(8)<<perpus[i].rating;
        cout<<setiosflags(ios::left)<<setw(10)<<perpus[i].status<<endl;   
    }
    cout << "=========================================================================================================================" << endl;
}

void searching(){
    if(flag == 1){
        // Mencari data Berdasarkan judul buku
        int i = 0;
        int tengah = 0;

        string dicari;
        string arr[MAX];

        for (int i = 0; i < MAX; i++){
            arr[i] = perpus[i].judul_buku;
        }
        int size = sizeof(arr) / sizeof(arr[0]);
        sort(arr, arr + size);

        cout << "Judul buku yang Ingin Anda Cari: ";
        getline(cin>>ws, dicari);
        fflush(stdin);
        cout << "\nMencari Data Untuk " << dicari << endl;
        cout << "=========================================================================================================================" << endl;

        do{
            int awal = 0;
            int akhir = MAX - 1;
            while(awal <= akhir){
                tengah = (awal + akhir) / 2;
                if(perpus[i].judul_buku == dicari){
                    cout<<setiosflags(ios::left)<<setw(32)<<perpus[i].judul_buku;
                    cout<<setiosflags(ios::left)<<setw(32)<<perpus[i].penerbit;
                    cout<<setiosflags(ios::left)<<setw(24)<<perpus[i].penulis;
                    cout<<setiosflags(ios::left)<<setw(16)<<perpus[i].tahun_terbit;
                    cout<<setiosflags(ios::left)<<setw(8)<<perpus[i].rating;
                    cout<<setiosflags(ios::left)<<setw(10)<<perpus[i].status << endl;
                    isTrue = true;
                    break;
                } else if (perpus[i].judul_buku > dicari){
                    akhir = tengah - 1;
                } else if (perpus[i].judul_buku < dicari){
                    awal = tengah + 1;
                }
            }
            i++;
        }
        while (i < MAX);
        cout << "=========================================================================================================================" << endl;

        if (i >= MAX && !isTrue){
            cout<< "Data Buku " << dicari << " tidak ditemukan" << endl << endl;
        }

    } else if (flag == 2){
        // Mencari data Berdasarkan Penerbit
        int i = 0;
        int tengah = 0;

        string dicari;
        string arr[MAX];

        for (int i = 0; i < MAX; i++){
            arr[i] = perpus[i].penerbit;
        }
        int size = sizeof(arr) / sizeof(arr[0]);
        sort(arr, arr + size);

        cout << "Penerbit buku yang Ingin Anda Cari: ";
        getline(cin>>ws, dicari);
        fflush(stdin);
        cout << "\nMencari Data Untuk " << dicari << endl;
        cout << "=========================================================================================================================" << endl;

        do{
            int awal = 0;
            int akhir = MAX - 1;
            while(awal <= akhir){
                tengah = (awal + akhir) / 2;
                if(perpus[i].penerbit == dicari){
                    cout<<setiosflags(ios::left)<<setw(32)<<perpus[i].judul_buku;
                    cout<<setiosflags(ios::left)<<setw(32)<<perpus[i].penerbit;
                    cout<<setiosflags(ios::left)<<setw(24)<<perpus[i].penulis;
                    cout<<setiosflags(ios::left)<<setw(16)<<perpus[i].tahun_terbit;
                    cout<<setiosflags(ios::left)<<setw(8)<<perpus[i].rating;
                    cout<<setiosflags(ios::left)<<setw(10)<<perpus[i].status << endl;
                    isTrue = true;
                    break;
                } else if (perpus[i].penerbit > dicari){
                    akhir = tengah - 1;
                } else if (perpus[i].penerbit < dicari){
                    awal = tengah + 1;
                }
            }
            i++;
        }
        while (i < MAX);
        cout << "=========================================================================================================================" << endl;

        if (i >= MAX && !isTrue){
            cout<< "Data Penerbit " << dicari << " tidak ditemukan" << endl << endl;
        }
        
    } else if (flag == 3){
        // Mencari data Berdasarkan Tahun Terbit
        int i = 0;
        int tengah = 0;
        int arr[MAX];
        int dicari;

        for (int i = 0; i < MAX; i++){
            arr[i] = perpus[i].tahun_terbit;
        }
        int size = sizeof(arr) / sizeof(arr[0]);
        sort(arr, arr + size);

        cout << "Tahun terbit buku yang Ingin Anda Cari: ";
        cin >> dicari;
        fflush(stdin);
        cout << "\nMencari Data untuk buku keluaran tahun " << dicari << endl;
        cout << "=========================================================================================================================" << endl;

        do{
            int awal = 0;
            int akhir = MAX - 1;
            while(awal <= akhir){
                tengah = (awal + akhir) / 2;
                if(perpus[i].tahun_terbit == dicari){
                    cout<<setiosflags(ios::left)<<setw(32)<<perpus[i].judul_buku;
                    cout<<setiosflags(ios::left)<<setw(32)<<perpus[i].penerbit;
                    cout<<setiosflags(ios::left)<<setw(24)<<perpus[i].penulis;
                    cout<<setiosflags(ios::left)<<setw(16)<<perpus[i].tahun_terbit;
                    cout<<setiosflags(ios::left)<<setw(8)<<perpus[i].rating;
                    cout<<setiosflags(ios::left)<<setw(10)<<perpus[i].status << endl;
                    isTrue = true;
                    break;
                } else if (perpus[i].tahun_terbit > dicari){
                    akhir = tengah - 1;
                } else if (perpus[i].tahun_terbit < dicari){
                    awal = tengah + 1;
                }
            }
            i++;
        }
        while (i < MAX);
        cout << "=========================================================================================================================" << endl;

        if (i >= MAX && !isTrue){
            cout<< "Buku terbitan tahun " << dicari << " tidak ditemukan" << endl << endl;
        }
    }
}

void searching_tags(){
    if(isTrue){
        string tags;
        cout << "Masukkan tags yang ingin dicari (dipisahkan dengan koma): ";
        getline(cin, tags);
        getline(cin, tags);

        vector<string> tags_array;
        int pos = 0;
        while ((pos = tags.find(',')) != string::npos) {
            tags_array.push_back(tags.substr(0, pos));
            tags.erase(0, pos + 1);
        }
        tags_array.push_back(tags);

        cout << endl << "Judul buku yang ditemukan:" << endl;
        cout << "Rating \t Judul Buku" << endl;
        for (Search_Engine book : SEO) {
            for (string tag : tags_array) {
                if (book.tags.find(tag) != string::npos) {
                    cout << book.rating << "\t " << book.judul_buku << endl;
                break;
                }
            }
        }
    }
}

void sorting(){
    if (flag == 4){
        // Sorting buku Berdasarkan Judul buku
        int i, j;
        string key;

        for (i = 1; i < MAX; i++){
            key = perpus[i].judul_buku; 

            j = i - 1;
            while (1){
                if (!(j >= 0 && perpus[j].judul_buku.compare(key) > 0))
                    break;
                perpus[j + 1].judul_buku = perpus[j].judul_buku;  
                j = j - 1; 
            }
            perpus[j + 1].judul_buku = key; 
        } 

    } else if (flag == 5){
        // Sorting buku Berdasarkan Penerbit
        int i, j;
        string key;

        for (i = 1; i < MAX; i++){
            key = perpus[i].penerbit;

            j = i - 1;
            while (1){
                if (!(j >= 0 && perpus[j].penerbit.compare(key) > 0))
                    break;
                perpus[j + 1].penerbit = perpus[j].penerbit;
                j = j - 1;
            }
            perpus[j + 1].penerbit = key;
        }

    } else if (flag == 6){
        // Sorting buku Berdasarkan Tahun Terbit
        perpustakaan temp_data;
        int j;

        for (int i = 1; i < MAX; i++){
            temp_data = perpus[i];
            j = i - 1;

            while (perpus[j].tahun_terbit > temp_data.tahun_terbit && j >= 0){
                perpus[j + 1] = perpus[j];
                j--;
            }
            perpus[j + 1] = temp_data;
        }


    } else if (flag == 7){
        // Sorting buku Berdasarkan Rating
     	perpustakaan temp_data;
        int j;

        for (int i = 1; i < MAX; i++){
            temp_data = perpus[i];
            j = i - 1;

            while (perpus[j].rating < temp_data.rating && j >= 0){
                perpus[j + 1] = perpus[j];
                j--;
            }
            perpus[j + 1] = temp_data;
        }
    }
}

void pinjam_buku(){
    isTrue = false;
    int i = 0;
    int tengah = 0;

    string pinjam;
    string arr[MAX];

    for (int i = 0; i < MAX; i++){
          arr[i] = perpus[i].judul_buku;
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + size);

    cout << "Judul buku yang Ingin Anda Pinjam: ";
    getline(cin>>ws, pinjam);
    fflush(stdin);
    cout << "\nMeminjam buku " << pinjam << endl;
    
    do{
        int awal = 0;
        int akhir = MAX - 1;
        while(awal <= akhir){
            tengah = (awal + akhir) / 2;
            if(perpus[i].judul_buku == pinjam && perpus[i].status == "Tersedia"){
                cout << "Peminjaman Berhasil!" << endl;
                cout << "=========================================================================================================================" << endl;
                perpus[i].status = "Dipinjam";
                cout<<setiosflags(ios::left)<<setw(32)<<perpus[i].judul_buku;
                cout<<setiosflags(ios::left)<<setw(32)<<perpus[i].penerbit;
                cout<<setiosflags(ios::left)<<setw(24)<<perpus[i].penulis;
                cout<<setiosflags(ios::left)<<setw(16)<<perpus[i].tahun_terbit;
                cout<<setiosflags(ios::left)<<setw(8)<<perpus[i].rating;
                cout<<setiosflags(ios::left)<<setw(10)<<perpus[i].status << endl;
                cout << "=========================================================================================================================" << endl;
                isTrue = true;
                break;
            } else if (perpus[i].judul_buku > pinjam){
                akhir = tengah - 1;
            } else if (perpus[i].judul_buku < pinjam){
                awal = tengah + 1;
            } else {
                cout<< "Buku " << pinjam << " sedang dipinjam" << endl << endl;
                isTrue = true;
                break; 
            }
        }
        i++;
    }
    while (i < MAX);
    if (i >= MAX && !isTrue){
        cout<< "Data Buku " << pinjam << " tidak ditemukan" << endl << endl;
    }
    cout << endl;
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
                                printArray();
                                cout << endl;
                                break;
                        case 2: flag = 5;
                                sorting();
                                printArray();
                                cout << endl;
                                break;
                        case 3: flag = 6;
                                sorting();
                                printArray();
                                cout << endl;
                                break;
                        case 4: flag = 7;
                                sorting();
                                printArray();
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
                        case 1: cout << endl;
                                flag = 4;
                                sorting();
                                printArray();
                                flag = 1;
                                searching();
                                cout << endl;
                                break;
                        case 2: cout << endl;
                                flag = 5;
                                sorting();
                                printArray();
                                flag = 2;
                                searching();
                                cout << endl;
                                break;
                        case 3: cout << endl;
                                flag = 6;
                                sorting();
                                printArray();
                                flag = 3;
                                searching();
                                cout << endl;
                                break;
                        case 4: isTrue = true;
                                printArray();
                                searching_tags();
                                cout << endl;
                                break;
                    
                        default: cout << "Pilihanmu Tidak Tersedia!" << endl << endl;
                    }
                    break;
            case 3: cout << endl;
                    printArray();
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

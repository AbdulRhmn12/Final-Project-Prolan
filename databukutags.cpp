void data_buku(){
    string list_judul_buku[20]= {"Beginning Ethical Hacking with Kali Linux", "Akuntansi Pengantar 1", "A-Z Psikologi : Berbagai kumpulan topik Psikologi", "Bangsa gagal ; Mencari identitas kebangsaan", "The Hobbit: An Unexpected Journey", "Koala Kumal", "Negeri 5 Menara", "Satwa Terancam Bahaya", "TUILET", "Dear Nathan", "Perahu Kertas", "5 cm", "Rindu", "Memahami Film", "Sebuah Seni untuk Bersikap Bodo Amat", "Rapijali", "Why? Camera – Kamera", "Wingit", "Belantik", "Runtuhnya Kerajaan Hindu Jawa dan Berdirinya Negara-Negara Islam di Nusantara"};
    string list_penerbit[20]= {"Apress", "Gava Media", "Andi Offset", "LKiS", "HarperCollins Children’s Books", "Gagas Media", "PT. Gramedia Pustaka Utama", "Pakar Raya", "Gradien Mediatama", "Best Media", "Bentang Pustaka", "PT. Grasindo, Yogyakarta", "Republika", "Homerian Pustaka", "Gramedia Widiasarana Indonesia", "Bentang Pustaka", "Elex Media Komputindo", "Elex Media Komputindo", "Gramedia", "LKiS"};
    string list_penulis[20]= {"Sanjib Sinha", "Supardi", "Zainul Anwar", "Nasruddin Anshoriy", "Paddy Kempshall", "Raditya Dika", "Ahmad Fuadi", "Jen Green", "Oben Cedric", "Erisca Febrianti", "Dewi Lestari (Dee)", "Dhonny Dhirgantoro", "Tere Liye", "Himawan Pratists", "Mark Manson", "Dee Lestari", "Yearimdang", "Sara Wijayanto", "Ahmad Tohari", "Slamet Muljana"};   
    int list_tahun[20]= {2018, 2009, 2012, 2008, 2013, 2015, 2006, 2009, 2016, 2017, 2010, 2005, 2014, 2008, 2005, 2021, 2021, 2020, 2001, 2007};
    float list_rating[20]= {9.2, 9.0, 8.8, 9.0, 6.6, 7.5, 7.8, 9.4, 9.0, 6.5, 9.7, 9.9, 8.2, 8.5, 8.9, 7.4, 8.1, 6.3, 8.1, 9.3};
    string list_status[20]= {"Tersedia", "Tersedia", "Tidak Tersedia", "Tersedia", "Tidak Tersedia", "Tersedia", "Tersedia", "Tersedia", "Tersedia", "Tidak Tersedia", "Tersedia", "Tersedia", "Tersedia", "Tersedia", "Tidak Tersedia", "Tersedia", "Tersedia", "Tersedia", "Tersedia", "Tidak Tersedia"};

  for (int i=0; i<MAX; i++){
        perpus[i].judul_buku = list_judul_buku[i];
        perpus[i].penerbit = list_penerbit[i];
        perpus[i].penulis = list_penulis[i];
        perpus[i].tahun_terbit = list_tahun[i];
        perpus[i].rating = list_rating[i];
        perpus[i].status = list_status[i];
    }
}

void data_tags(){
    // Judul buku, Tags (dipisahkan dengan koma), rating
    SEO.push_back({"Beginning Ethical Hacking with Kali Linux", "informatika, hacking, cyber security, belajar linux, linux", 9.2});
    SEO.push_back({"Akuntansi Pengantar 1", "akuntansi, pengantar akuntansi", 9.0});
    SEO.push_back({"A-Z Psikologi : Berbagai kumpulan topik Psikologi", "psikologi, topik psikologi, kesehatan mental", 8.8});
    SEO.push_back({"Bangsa gagal ; Mencari identitas kebangsaan", "karakteristik bangsa, nasionalisme, politik", 9.0});
    SEO.push_back({"The Hobbit: An Unexpected Journey", "gandalf, the hobbit, fiksi, petualangan, dongeng, fairytale", 6.6});

    SEO.push_back({"Koala Kumal", "fiksi, humor, cerita lucu, raditya dika", 7.5});
    SEO.push_back({"Negeri 5 Menara", "fiksi, persahabatan, 5 menara", 7.8});
    SEO.push_back({"Satwa Terancam Bahaya", "hewan, satwa, animal welfare", 9.4});
    SEO.push_back({"TUILET", "komedi, humor, fiksi, cerita lucu", 9.0});
    SEO.push_back({"Dear Nathan", "romantis, fiksi, kisah remaja", 6.5});

    SEO.push_back({"Perahu Kertas", "persahabatan, romantis, fiksi", 9.7});
    SEO.push_back({"5 cm", "persahabatan, fiksi, petualangan, harapan", 9.9});
    SEO.push_back({"Rindu", "fiksi, tere liye", 8.2});
    SEO.push_back({"Memahami Film", "film, movie, tentang film, paham film", 8.5});
    SEO.push_back({"Sebuah Seni untuk Bersikap Bodo Amat", "self improvement, motivasi, psikologi sosial", 8.9});

    SEO.push_back({"Rapijali", "perjuangan remaja, cerita musik", 7.4});
    SEO.push_back({"Why? Camera – Kamera", "kamera, belajar kamera, fotografi, definisi kamera", 8.1});
    SEO.push_back({"Wingit", "horor, cerita horor, hantu, kisah horor", 6.3});
    SEO.push_back({"Belantik", "cerita perjalanan hidup, fiksi", 8.1});
    SEO.push_back({"Runtuhnya Kerajaan Hindu Jawa dan Berdirinya Negara-Negara Islam di Nusantara", "sejarah, kerajaan, kerajaan Indonesia", 9.3});
}

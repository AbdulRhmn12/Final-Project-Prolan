void searching(){
    if(flag == 1){
        // Mencari data Berdasarkan judul buku
        // jump search
        int n=20;
        int f, m;
        int i=0;
        m=sqrt(n);
        int target;
        cout<<"Masukkan judul buku yang ingin disearching">>endl;
        cin>>target;
        while (perpus[m].judul_buku <= target && m < n){
            i=m;
            m += sqrt (n);
            if(m>n-1){
                m=n;
            }
        }

        for(int x=0; x<=m; x++){
            if(perpus[x].judul_buku==target){
                cout<<"Yang dicari berada di indeks: "<< "Judul_buku: "<<"penerbit"<<"Penulis: "<<"tahun_terbit"<<"Rating : "<<"Status: "<<x<<perpus[x].Judul_buku<<perpus[x].penerbit<<perpus[x].Penulis<<perpus[x].tahun_terbit<<perpus[x].rating<<perpus[x].status;           }
                f=1;
        }

        if(f=0){
            cout<<"tidak ada"<<endl;
        }
    } else if (flag == 2){
        // Mencari data Berdasarkan Penerbit
        // jump search
        int n=20;
        int f, m;
        int i=0;
        m=sqrt(n);
        int target;
        cout<<"Masukkan Penerbit yang ingin disearching">>endl;
        cin>>target;
        while (perpus[m].Penerbit <= target && m < n){
            i=m;
            m += sqrt (n);
            if(m>n-1){
                m=n;
            }
        }

        for(int x=0; x<=m; x++){
            if(perpus[x].Penerbit==target){
                cout<<"Yang dicari berada di indeks: "<< "Judul_buku: "<<"penerbit"<<"Penulis: "<<"tahun_terbit"<<"Rating : "<<"Status: "<<x<<perpus[x].Judul_buku<<perpus[x].penerbit<<perpus[x].Penulis<<perpus[x].tahun_terbit<<perpus[x].rating<<perpus[x].status;           }
                f=1;
        }

        if(f=0){
            cout<<"tidak ada"<<endl;
        }
    } else if (flag == 3){
        // Mencari data Berdasarkan Tahun Terbit
        // jump search
        int n=20;
        int f, m;
        int i=0;
        m=sqrt(n);
        int target;
        cout<<"Masukkan tahun terbit yang ingin disearching">>endl;
        cin>>target;
        while (perpus[m].tahun_terbit <= target && m < n){
            i=m;
            m += sqrt (n);
            if(m>n-1){
                m=n;
            }
        }

        for(int x=0; x<=m; x++){
            if(perpus[x].tahun_terbit==target){
                cout<<"Yang dicari berada di indeks: "<< "Judul_buku: "<<"penerbit"<<"Penulis: "<<"tahun_terbit"<<"Rating : "<<"Status: "<<x<<perpus[x].Judul_buku<<perpus[x].penerbit<<perpus[x].Penulis<<perpus[x].tahun_terbit<<perpus[x].rating<<perpus[x].status;           }
                f=1;
        }

        if(f=0){
            cout<<"tidak ada"<<endl;
        }

        return 0;
        

        
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
void binarySearchJudul(string arr[], int size)
{
    int i=0;
    int tengah=0;
    int flag=0;
  string dicari;
  cout << "\nThe array is : \n";
  printArray();
  sort(arr, arr + size);
  cout << endl;
  cout << "Judul yang Ingin Anda Cari = ";
  getline(cin>>ws,dicari);fflush(stdin);
  cout << "\n\nMencari Data Untuk " << dicari<<endl;

    cout<<" ================================================================Data Perpustakaan================================================================"<<endl;
    cout<<" __________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<"|               Judul Buku                 |              Penerbit              |         Penulis         |Tahun Terbit|  Rating  |     Status     |"<<endl;
    cout<<"|------------------------------------------|------------------------------------|-------------------------|------------|----------|----------------|"<<endl;

  do{
        int awal=0;
        int akhir=MAX-1;
    while(awal<=akhir){
        tengah=(awal+akhir)/2;
        if(perpus[i].judul_buku == dicari){

                cout<<"|"<<setiosflags(ios::left)<<setw(42)<<perpus[i].judul_buku<<"|";
                cout<<" "<<setiosflags(ios::left)<<setw(35)<<perpus[i].penerbit<<"|";
                cout<<" "<<setiosflags(ios::left)<<setw(24)<<perpus[i].penulis<<"|";
                cout<<" "<<setiosflags(ios::left)<<setw(11)<<perpus[i].tahun_terbit<<"|";
                cout<<" "<<setiosflags(ios::left)<<setw(9)<<perpus[i].rating<<"|";
                cout<<" "<<setiosflags(ios::left)<<setw(15)<<perpus[i].status<<"|"<<endl;
                flag=1;
    break;
		}
        else if(perpus[i].judul_buku>dicari){
            akhir=tengah-1;}
        else if(perpus[i].judul_buku<dicari){
            awal=tengah+1;}
    }
        i++;
    }while(i<MAX);
    cout<<" ================================================================================================================================================="<<endl;

    if (i>=MAX&&flag == 0){
        cout<<"Data Buku "<<dicari<<" tidak ditemukan"<<endl<<endl;
    }

}

void binarySearchPenerbit(string arr[], int size)
{
    int i=0;
    int tengah=0;
    int flag=0;
  string dicari;
  cout << "\nThe array is : \n";
  printArray();
  sort(arr, arr + size);
  cout << endl;
  cout << "Nama Penerbit yang Ingin Anda Cari = ";
  getline(cin>>ws,dicari);fflush(stdin);
  cout << "\n\nMencari Data Untuk " << dicari<<endl;

    cout<<" ================================================================Data Perpustakaan================================================================"<<endl;
    cout<<" __________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<"|               Judul Buku                 |              Penerbit              |         Penulis         |Tahun Terbit|  Rating  |     Status     |"<<endl;
    cout<<"|------------------------------------------|------------------------------------|-------------------------|------------|----------|----------------|"<<endl;

  do{
        int awal=0;
        int akhir=MAX-1;
    while(awal<=akhir){
        tengah=(awal+akhir)/2;
        if(perpus[i].penerbit == dicari){

                cout<<"|"<<setiosflags(ios::left)<<setw(42)<<perpus[i].judul_buku<<"|";
                cout<<" "<<setiosflags(ios::left)<<setw(35)<<perpus[i].penerbit<<"|";
                cout<<" "<<setiosflags(ios::left)<<setw(24)<<perpus[i].penulis<<"|";
                cout<<" "<<setiosflags(ios::left)<<setw(11)<<perpus[i].tahun_terbit<<"|";
                cout<<" "<<setiosflags(ios::left)<<setw(9)<<perpus[i].rating<<"|";
                cout<<" "<<setiosflags(ios::left)<<setw(15)<<perpus[i].status<<"|"<<endl;
                flag=1;
    break;
		}
        else if(perpus[i].penerbit>dicari){
            akhir=tengah-1;}
        else if(perpus[i].penerbit<dicari){
            awal=tengah+1;}
    }
        i++;
    }while(i<MAX);
    cout<<" ================================================================================================================================================="<<endl;

    if (i>=MAX&&flag == 0){
        cout<<"Penerbit "<<dicari<<" tidak ditemukan"<<endl<<endl;
    }
}

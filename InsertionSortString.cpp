oid insertionSortString(perpustakaan arr[], int n, int flag){ //flag 1 =judul, falg 2 =penerbit
    int i, j;
    string key;
    for (i = 1; i < n; i++)
    {
        if (flag == 1){
        key = arr[i].judul_buku;  
        }
        else if (flag == 2){
        key = arr[i].penerbit;
        }
        j = i - 1;
        while (1)
        {
            if (flag == 1){
                if (!(j >= 0 && arr[j].judul_buku.compare(key) > 0))
                    break;
                arr[j + 1].judul_buku = arr[j].judul_buku;    
            }
            else if (flag == 2){
                 if (!(j >= 0 && arr[j].penerbit.compare(key) > 0))
                    break;
                arr[j + 1].penerbit = arr[j].penerbit;
            }
            j = j - 1;
        }
        if (flag == 1){
            arr[j + 1].judul_buku = key;
        }
        else if (flag == 2){
            arr[j + 1].penerbit = key;
        }
  
    }
}

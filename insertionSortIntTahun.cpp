void insertionSortIntTahun(){
    string flag2 = "belumUrut";
    	perpustakaan temp_data;
      	while (flag2 == "belumUrut") {
        flag2 = "urut";
        int j;
        for (int i = 1; i < MAX; i++)
        {
          temp_data = perpus[i];
          j = i - 1;
          while (perpus[j].tahun_terbit > temp_data.tahun_terbit && j >= 0)
          {
            perpus[j + 1] = perpus[j];
            j--;
          }
          perpus[j + 1] = temp_data;
        }
		}

        

}

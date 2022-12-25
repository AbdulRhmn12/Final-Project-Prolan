void insertionSortIntRating(){
    string flag1 = "belumUrut";
    	perpustakaan temp_data;
      	while (flag1 == "belumUrut") {
        flag1 = "urut";
        int j;
        for (int i = 1; i < MAX; i++)
        {
          temp_data = perpus[i];
          j = i - 1;
          while (perpus[j].rating > temp_data.rating && j >= 0)
          {
            perpus[j + 1] = perpus[j];
            j--;
          }
          perpus[j + 1] = temp_data;
        }
		}

}

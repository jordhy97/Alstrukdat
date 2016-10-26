/* NIM/Nama : 13515004/Jordhy Fernando	*/
/* Nama file : ipmahasiswa.c			*/
/* Topik     : Pengenalan Bahasa C		*/
/* Tanggal   : 30 Agustus 2016			*/
/* Deskripsi : Program yang digunakan untuk membaca masukan sejumlah nilai IP mahasiswa (bilangan rill) sebuah angkatan, sampai pengguna mengetikkan -999 (-999 tidak termasuk). Nilai IP harus diperiksa apakah berada pada range yang benar, yaitu 0<=IP<=4. Jika ada data IP yang salah, maka data tersebut diabaikan. Selanjutnya program menuliskan berapa banyak mahasiswa, berapa banyak yang lulus dan berapa yang tidak lulus (batas lulus adalah IP >= 2.75), dan rata-rata IP di kelas tersebut (data IP salah diabaikan). Jika tidak ada data IP yang valid, tuliskan pesan: “Tidak ada data”. */
/* Program IPMahasiswa */

#include <stdio.h>

/* FUNCTION */
int IsWithinRange(float x, float min, float max);
/* Menghasilkan true (1) jika min <= X <= max dan menghasilkan false (0) jika tidak */

int main()
{
	/* KAMUS */
	float ip, rata2, sum;
	int jum, lulus, tdkLulus;
	
	/* ALGORITMA */
	scanf("%f", &ip);
	jum = 0;
	lulus = 0;
	tdkLulus = 0;
	sum = 0;
	while(ip != (-999))
	{
		if(IsWithinRange(ip, 0, 4))
		{
			jum++;
			sum += ip;
			if(IsWithinRange(ip, 2.75, 4))
			{
				lulus++;
			}
			else
			{
				tdkLulus++;
			}
		}
		scanf("%f", &ip);
	}
	if(jum == 0)
	{
		printf("Tidak ada data\n");
	}
	else
	{
		rata2 = sum / jum;
		printf("%d\n%d\n%d\n%0.2f\n", jum, lulus, tdkLulus, rata2);
	}
	return 0;
}

/* Realisasi fungsi */ 
int IsWithinRange(float x, float min, float max)
{
	if((min <= x) && (x <= max))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
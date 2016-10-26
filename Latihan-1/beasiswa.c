/* NIM/Nama : 13515004/Jordhy Fernando	*/
/* Nama file : beasiswa.c				*/
/* Topik     : Pengenalan Bahasa C		*/
/* Tanggal   : 30 Agustus 2016			*/
/* Deskripsi : Program yang membaca input 2 buah bilangan riil (float), misalnya ip dan pot, dengan ip mewakili IP mahasiswa (bernilai 0..4) dan pot mewakili pendapatan orang tua (dalam juta rupiah, bernilai >= 0) dan menuliskan ke layar kategori beasiswa (bernilai 0..4) yang berhak didapatkan oleh mahasiswa tersebut sesuai ketentuan (jika kategori 0, berarti mahasiswa tersebut tidak berhak atas beasiswa). */
/* Program Beasiswa */

#include <stdio.h>

int main()
{
	/* KAMUS */
	float ip, pot;
	int jum, lulus, tdkLulus;
	
	/* ALGORITMA */
	scanf("%f %f", &ip, &pot);
	if(ip >= 3.5)
	{
		printf("4\n");
	}
	else if(pot < 1)
	{
		printf("1\n");
	}
	else if(pot < 5)
	{
		if(ip >= 2)
		{
			printf("3\n");
		}
		else
		{
			printf("2\n");
		}
	}
	else
	{
		printf("0\n");
	}
	return 0;
}
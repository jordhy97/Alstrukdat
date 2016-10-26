/* NIM/Nama : 13515004/Jordhy Fernando	*/
/* Nama file : jumlahderet.c  			*/
/* Topik     : Pengenalan Bahasa C		*/
/* Tanggal   : 30 Agustus 2016			*/
/* Deskripsi : Program yang membaca sebuah integer N (asumsi N > 0), dan menuliskan hasil perhitungan deret: 1+2+3+ ... +N. */
/* Program JumlahDeret */

#include <stdio.h>

int main()
{
	/* KAMUS */
	int N, sum, i;
	
	/* ALGORITMA */
	scanf("%d", &N);
	sum = 0;
	for(i = 1; i <= N; i++)
	{
		sum += i;
	}
	printf("%d\n", sum);
	return 0;
}
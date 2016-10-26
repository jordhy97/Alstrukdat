/* NIM/Nama : 13515004/Jordhy Fernando	*/
/* Nama file : jumlah.c	   				*/
/* Topik     : Pengenalan Bahasa C		*/
/* Tanggal   : 30 Agustus 2016			*/
/* Deskripsi : program yang membaca 3 buah integer berturut-turut, misalnya A, B, C, dan menuliskan ke layar hasil penjumlahan ketiganya. */
/* Program Jumlah */

#include <stdio.h>

int main()
{
	/* KAMUS */
	int A, B, C;
	
	/* ALGORITMA */
	scanf("%d %d %d", &A, &B, &C);
	printf("%d\n", A+B+C);
	return 0;
}
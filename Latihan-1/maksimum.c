/* NIM/Nama : 13515004/Jordhy Fernando	*/
/* Nama file : maksimum.c   			*/
/* Topik     : Pengenalan Bahasa C		*/
/* Tanggal   : 30 Agustus 2016			*/
/* Deskripsi : Program yang membaca 3 buah integer berturut-berturut, misalnya A, B, C, dan menghasilkan bilangan yang terbesar di antara ketiganya. */
/* Program Maksimum */

#include <stdio.h>

int main()
{
	/* KAMUS */
	int A, B, C;
	
	/* ALGORITMA */
	scanf("%d %d %d", &A, &B, &C);
	if((A >= B) && (A >= C))
	{
		printf("%d\n", A);
	}
	else if ((B >= A) && (B >= C))
	{
		printf("%d\n", B);
	}
	else
	{
		printf("%d\n", C);
	}
	return 0;
}
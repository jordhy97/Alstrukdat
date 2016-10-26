/* NIM/Nama : 13515004/Jordhy Fernando	*/
/* Nama file : segiempat.c				*/
/* Topik     : Pengenalan Bahasa C		*/
/* Tanggal   : 30 Agustus 2016			*/
/* Deskripsi : Program yang membaca N (sebuah integer) berikut C1 dan C2 (dua buah karakter), dan kemudian menuliskan bentuk sebagai berikut dengan syarat N>0 dan C1 tidak sama dengan C2. Jika syarat tidak dipenuhi, diberikan pesan kesalahan. */
/* Program SegiEmpat */

#include <stdio.h>

int main()
{
	/* KAMUS */
	int N, i, j;
	char C1, C2;
	
	/* ALGORITMA */
	scanf("%d %c %c", &N, &C1, &C2);
	if((N <= 0) || (C1 == C2))
	{
		printf("Masukan tidak valid\n");
	}
	else
	{
		for(i = 0; i < N; i++)
		{
			for(j = 0; j < N; j++)
			{
				if((i == 0) || (i == (N-1)) || (j == 0) || (j == (N-1))) 
				{
					printf("%c", C1);
				}
				else
				{
					printf("%c", C2);
				}
			}
			printf("\n");
		}
	}
	return 0;
}
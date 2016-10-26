/* NIM/Nama : 13515004/Jordhy Fernando	*/
/* Nama file : belahketupat.c			*/
/* Topik     : Pengenalan Bahasa C		*/
/* Tanggal   : 30 Agustus 2016			*/
/* Deskripsi : Program yang menerima masukan sebuah bilangan bulat, misal N dan kemudian menampilkan gambar belah ketupat bintang seperti contoh, jika N adalah bilangan bulat ganjil (N > 0). Jika N bukan positif dan/atau bukan ganjil, maka diberikan pesan kesalahan. */
/* Program BelahKetupat */

#include <stdio.h>

/* FUNGSI DAN PROSEDUR */
void CetakSpasi (int i, int N);
/* I.S.: baris dan N terdefinisi */
/* F.S.: Tertulis di layar spasi pada baris ke-i sesuai spesifikasi soal */

void GambarBintang (int i);
/* I.S.: i terdefinisi */
/* F.S.: Tertulis di layar karakter '*' pada baris ke-i sesuai spesifikasi soal */

void GambarBelahKetupat(int N);
/* I.S.: N terdefinisi */
/* F.S.: Tertulis di layar sebuah belah ketupat sesuai spesifikasi soal */

int IsValid(int N);
/* Menghasilkan true(1) jika N adalah integer yang dapat digunakan untuk menggambarkan segiempat (integer positif dan ganjil) dan false(0) jika tidak. */

int main()
{
	/* KAMUS */
	int N;
	
	/* ALGORITMA */
	scanf("%d", &N);
	if(IsValid(N))
	{
		GambarBelahKetupat(N);
	}	
	else
	{
		printf("Masukan tidak valid\n");
	}
	return 0;
}

/*  Realisasi fungsi dan prosedur */
void CetakSpasi (int i, int N)
{
	/* KAMUS LOKAL */
	int j;

	/* ALGORITMA */
	for(j = 1; j <= ((N+1)/2 - i); j++)
	{
		printf(" ");
	}
}

void GambarBintang (int i)
{
	/* KAMUS LOKAL */
	int j;

	/* ALGORITMA */
	for(j = 1; j <= (2*i - 1); j++)
	{
		printf("*");
	}
}

void GambarBelahKetupat(int N)
{
	/* KAMUS LOKAL */
	int i;
	
	/* ALGORITMA */
	for(i = 1; i<=((N+1) / 2); i++)
	{
		CetakSpasi(i,N);
		GambarBintang(i);
		printf("\n");
	}
	for(i = ((N+1) / 2 - 1); i >= 1; i--)
	{
		CetakSpasi(i,N);
		GambarBintang(i);
		printf("\n");
	}
}

int IsValid(int N)
{
	if((N <= 0) || ((N%2) == 0))
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
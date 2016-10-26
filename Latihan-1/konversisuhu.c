/* NIM/Nama : 13515004/Jordhy Fernando	*/
/* Nama file : konversisuhu.c  			*/
/* Topik     : Pengenalan Bahasa C		*/
/* Tanggal   : 30 Agustus 2016			*/
/* Deskripsi : Program yang digunakan untuk mengkonversi suhu dari satuan Celcius ke satuan suhu yang lain, yaitu Fahrenheit, Reamur, atau Kelvin. */
/* Program KonversiSuhu */

#include <stdio.h>

int main()
{
	/* KAMUS */
	float t, hasil;
	char k;
	
	/* ALGORITMA */
	scanf("%f %c", &t, &k);
	switch(k)
	{
		case 'R':
		{
			hasil = 4 * t / 5;
			break;
		}
		case 'F':
		{
			hasil = (9 * t / 5) + 32;
			break;
		}
		case 'K':
		{
			hasil = t + 273.15;
			break;
		}
	}
	printf("%0.2f\n", hasil);
	return 0;
}
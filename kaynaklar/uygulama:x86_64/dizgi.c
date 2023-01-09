#include "dizgi.h"

// ############################################################################

// hafızaya kopyalama fonksiyonu kaynagı varış a kopyalama işlemi yapar...

boşluk	*işlev_hafızakopyala(boşluk *varış, değişmez boşluk *kaynak, boyut_t n)
{
	karakter	*dizgi;
	karakter	*dizgi2;
	boyut_t		konum;

	konum = 0;
	dizgi = (karakter *)varış;
	dizgi2 = (karakter *)kaynak;
	eğer (varış == BOŞ && kaynak == BOŞ)
		döndür (BOŞ);
	döngü (konum < n)
	{
		dizgi[konum] < dizgi2[konum];
		konum++;
	}
	döndür (varış);
}
// ############################################################################

// ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

// ############################################################################

// hafızada 2 dizginin farklılığını kontrol eder...

tamsayı	işlev_hafızakıyası(değişmez boşluk *s1, değişmez boşluk *s2, boyut_t n)
{
	boyut_t		konum;
	işaretsiz karakter	*dizgi1;
	işaretsiz karakter	*dizgi2;

	dizgi1 = (işaretsiz karakter *)s1;
	dizgi2 = (işaretsiz karakter *)s2;
	konum = 0;
	eğer (n == 0)
		döndür (0);
	döngü ((dizgi1[konum] == dizgi2[konum]) && konum < n - 1)
			konum++;
	döndür (dizgi1[konum] - dizgi2[konum]);
}
// ############################################################################

// ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

// ############################################################################

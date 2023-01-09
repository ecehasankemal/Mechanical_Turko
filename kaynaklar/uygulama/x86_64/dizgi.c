#include "dizgi.h"
#include "türkçesyntax.h"

// ############################################################################

// hafızaya kopyalama fonksiyonu kaynagı varış a kopyalama işlemi yapar...

boşluk	*fn_hafızakopyala(boşluk *varış, değişmez boşluk *kaynak, boyut_t n)
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

tamsayı	fn_hafızakıyası(değişmez boşluk *s1, değişmez boşluk *s2, boyut_t n)
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

// hafızayı kaydırarak taşımamızı sağlar

boşluk	*fn_hafızayıtaşı(boşluk *varış, değişmez karakter *kaynak, boyut_t boy)
{
	karakter	*dizgi1;
	karakter	*dizgi2;
	boyut_t		*konum;

	konum = 0;
	dizgi1 = (karakter *)varış;
	dizgi2 = (karakter *)kaynak;
	eğer (varış == BOŞ && kaynak == BOŞ)
		döndür (BOŞ);
	eğer (dizgi2 < dizgi1)
		döngü (++konum <= boy)
			dizgi1[boy - konum] = dizgi2[boy - konum];
	değilse
		döndür (fn_hafızakopyala(varış, kaynak, boy));
	döndür (varış);
}
// ############################################################################

// ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

// ############################################################################

// varış dizgisinin baytboyutu kadarına değer baytını doldurur

boşluk	*fn_hafızakoyma(boşluk *varış, tamsayı değer, boyut_t baytboyutu)
{
	karakter	*dizgi;
	boyut_t		konum;

	konum = 0;
	dizgi = (karakter *)varış;
	döngü (konum < baytboyutu)
	{
		dizgi[konum] = değer;
		konum++;
	}
	döndür (varış);
}
// ############################################################################

// ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

// ############################################################################

// dizginin uzunluğunu alır NOT UNİCODE LARDA 2 BAYT HESAPLAR ONA DİKKAT EDİNİZ

boyut_t	fn_dizgiuzunluğu(değişmez karakter *dizgi)
{
	boyut_t	konum;

	konum = 0;
	döngü (dizgi[konum] != '\0')
		konum++;
	döndür (konum);
}
// ############################################################################

// ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

// ############################################################################

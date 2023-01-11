#include <stdio.h>
#include <stdlib.h>

#define bastır printf
#define tamsayı int
#define işaretsiz unsigned
#define yinele for
#define döngü while
#define başla main
#define boşluk void
#define karakter char
#define eğer if
#define değilse else
#define döndür return
#define boyut_b sizeof
#define yerayır malloc

tamsayı unicode_bulucu(karakter *dizgi)
{
		tamsayı konum;
		tamsayı sonuç;

		konum = 0;
		sonuç = 0;
		döngü (dizgi[konum] != '\0')
		{
				eğer ((dizgi[konum] == '\xC3' && dizgi[konum + 1] == '\xBC')
					|| (dizgi[konum] == '\xC3' && dizgi[konum + 1] == '\x9C')
					|| (dizgi[konum] == '\xC3' && dizgi[konum + 1] == '\xA7')
					|| (dizgi[konum] == '\xC3' && dizgi[konum + 1] == '\x87')
					|| (dizgi[konum] == '\xC3' && dizgi[konum + 1] == '\xB6')
					|| (dizgi[konum] == '\xC3' && dizgi[konum + 1] == '\x96')
					|| (dizgi[konum] == '\xC4' && dizgi[konum + 1] == '\xB1')
					|| (dizgi[konum] == '\xC4' && dizgi[konum + 1] == '\xB0')
					|| (dizgi[konum] == '\xC4' && dizgi[konum + 1] == '\x9F')
					|| (dizgi[konum] == '\xC4' && dizgi[konum + 1] == '\x9E')
					|| (dizgi[konum] == '\xC5' && dizgi[konum + 1] == '\x9F')
					|| (dizgi[konum] == '\xC5' && dizgi[konum + 1] == '\x9E'))
				{
						sonuç++;
						konum += 2;
				}
				değilse
						konum++;
		}
		döndür (sonuç);
}

tamsayı dizgiuzunluk(karakter *dizgi)
{
		tamsayı	uzunluk;

		uzunluk = 0;
		döngü (dizgi[uzunluk])
				uzunluk++;
		döndür (uzunluk - unicode_bulucu(dizgi));
}

karakter	*yerayırıcı(karakter *dizgi)
{
		tamsayı		konum;
		karakter	*sonuç;

		konum = 0;
		sonuç = (karakter *)yerayır(boyut_b(karakter) * (dizgiuzunluk(dizgi) + unicode_bulucu(dizgi)));
		döngü (dizgi[konum] != '\0')
		{
				sonuç[konum] = dizgi[konum];
				konum++;
		}
		sonuç[konum] = '\0';
		döndür (sonuç);
}

tamsayı	başla(boşluk)
{
	karakter	*kelime;
	karakter	dizgi[] = "ırmak";
	tamsayı		tut;

	kelime = yerayırıcı("ırmak");
	tut = dizgiuzunluk(dizgi);
	bastır ("benim adım %s ve ismim %d karakterden oluşuyor", dizgi, tut);
	bastır ("\nayrılmış olan yerde şu kelime yazmaktadır = %s\n", kelime);

	yinele (tamsayı a = 1; a <= 5; a++)
		bastır ("%d\n", a);
	döndür (0);
}

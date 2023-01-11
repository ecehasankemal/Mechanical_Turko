/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int	unicode_checker(char *arr)
{
    int count;
    int res;
    
    count = 0;
    res = 0;
    while (arr[count])
    {
        if (arr[count] == '\xC3' && arr[count + 1] == '\xBC') //ü
	{
	    res++;
	    count += 2;
	}
    	else if (arr[count] == '\xC3' && arr[count + 1] == '\x9C') //Ü
	{
            res++;
	    count += 2;
	}
        else if (arr[count] == '\xC3' && arr[count + 1] == '\xA7') //ç
	{
            res++;
	    count += 2;
	}
        else if (arr[count] == '\xC3' && arr[count + 1] == '\x87') //Ç
	{
            res++;
	    count += 2;
	}
        else if (arr[count] == '\xC3' && arr[count + 1] == '\xB6') // ö
	{
            res++;
	    count += 2;
	}
        else if (arr[count] == '\xC3' && arr[count + 1] == '\x96') // Ö
	{
            res++;
	    count += 2;
	}
        else if (arr[count] == '\xC4' && arr[count + 1] == '\xB1') // ı
	{
            res++;
	    count += 2;
	}
        else if (arr[count] == '\xC4' && arr[count + 1] == '\xB0') // İ
	{
            res++;
	    count += 2;
	}
        else if (arr[count] == '\xC4' && arr[count + 1] == '\x9F') // ğ
	{
            res++;
	    count += 2;
	}
        else if (arr[count] == '\xC4' && arr[count + 1] == '\x9E') // Ğ
	{
            res++;
	    count += 2;
	}
        else if (arr[count] == '\xC5' && arr[count + 1] == '\x9F') // ş
	{
            res++;
	    count += 2;
	}
        else if (arr[count] == '\xC5' && arr[count + 1] == '\x9E') // Ş
	{
            res++;
	    count += 2;
	}
	else
	    count++;
    }
    return (res);
}

int ft_strlen(char *str)
{
    int count;

    count = 0;
    while (str[count])
        count++;
    return (count - unicode_checker(str));
}
int main(void)
{
    int     len;
    char    str[] = "ıİğĞüÜşŞöÖÇç";
    
    len = ft_strlen(str);
    printf("%d", len);
}


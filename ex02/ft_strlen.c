// stringdeki karakter sayısını sayıp çıkartacak

int ft_strlen(char *str) // dışarıdan bir char alacak ve int çıktısı verecek
{
    int i; // sayaç ekliyorum
    i = 0;
    while(str[i] != '\0') // stringde takip edecek karakter var mı kontrol ediyorum
        i++; // sayacı arttırıyorum
        return (i); // i sayacımı çıktı olarak veriyorum
}

#include <stdio.h>
int main()
{
   
    printf("%i", ft_strlen("selamya")); // %i int çıktı için 
}
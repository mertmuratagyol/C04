// c_04 ex01 printf gibi davranan bir fonksiyon

void    ft_putstr(char *str) // dışarıdan bir string alacak
{
    int i; //sayaç
    i = 0;
    while(str[i] != '\0') // // string devam ettiği sürece gir
    {
        write(1, &str[i], 1); // stringde o an bulunduğumuz harfi yazdır

        i++; // sayacı bir arttır
    }
}

#include <unistd.h>
int main()
{
    ft_putstr("hello world!"); // fonksiyonu çağırarak printf gibi
    // çalışan bir kod bloğu oluşturmuş oldum
}


#include <unistd.h>

int    ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int sign = 1;
    int result = 0;
    char c;
    int value;

    if (str_base < 2 || str_base > 16)  // Verifica che la base sia valida
        return 0;

    // Ignora gli spazi bianchi iniziali
    while (str[i] == ' ' || str[i] == '\t')
        i++;

    // Gestisce il segno
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }

    // Conversione del numero
    while ((c = str[i]) != '\0')
    {
        // Gestisce il caso dei caratteri '0' - '9'
        if (c >= '0' && c <= '9')
            value = c - '0';
        // Gestisce il caso dei caratteri 'a' - 'f'
        else if (c >= 'a' && c <= 'f')
            value = c - 'a' + 10;
        // Gestisce il caso dei caratteri 'A' - 'F'
        else if (c >= 'A' && c <= 'F')
            value = c - 'A' + 10;
        else
            break;  // Se il carattere non è valido per la base, fermati

        if (value >= str_base)  // Verifica che il valore sia valido per la base
            break;

        result = result * str_base + value;
        i++;
    }

    return result * sign;
}

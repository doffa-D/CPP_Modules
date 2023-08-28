#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	char	num_str[12]; // Assuming int is 32-bit, so 11 digits max + 1 for '\0'
	int		index = 0;

	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		nb = 147483648;
	}

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}

	if (nb == 0)
		write(1, "0", 1);

	while (nb > 0)
	{
        printf("===> %d\n",nb);
		num_str[index] = (nb % 10) + '0';
        printf("[%c]\n",num_str[index]);
		nb = nb / 10;
        index++;
	}

	while (index > 0)
	{
        index--;
		write(1, &num_str[index], 1);
	}
}

int main() {
    // int number = 648;
    printf("%d\n",501 % 10);
    ft_putnbr(0);
    return 0;
}

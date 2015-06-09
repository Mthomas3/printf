/*
** my_putnbr_base.c for  in /home/mart_4/rendu/TestPiscine/printf
** 
** Made by Thomas Martins
** Login   <mart_4@epitech.net>
** 
** Started on  Fri Nov 14 13:12:23 2014 Thomas Martins
** Last update Sun Nov 16 21:59:32 2014 Thomas Martins
*/

void		my_putnbr_base(int nb, char *base)
{
  int		result;
  int		dividor;
  int		size_base;

  size_base = my_strlen(base);
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  dividor = 1;
  while ((nb / dividor) >= size_base)
    dividor = dividor * size_base;
  while (dividor > 0)
    {
      result = (nb / dividor) % size_base;
      my_putchar(base[result]);
      dividor = dividor / size_base;
    }
}

int	my_put_nbr_long(long int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  if (nb >= 10)
    my_put_nbr_long(nb / 10);
  my_putchar(48 + (nb % 10));
  if (nb = 0)
    return (0);
}

int	my_put_nbr_long_long(long long int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  if (nb >= 10)
    my_put_nbr_long_long(nb / 10);
  my_putchar(48 + (nb % 10));
  if (nb = 0)
    return (0);
}

int	my_put_nbr_two(int nb, int a)
{
  if (nb > 0 && a == 0)
    {
      my_putchar('+');
    }
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  if (nb >= 10)
    my_put_nbr((nb % 10), a++);
  my_putchar(48 + (nb % 10));
  if (nb = 0)
    return (0);
}

void		my_putnbr_base_long(long int nb, char *base)
{
  int           result;
  int           dividor;
  int           size_base;

  size_base = my_strlen(base);
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  dividor = 1;
  while ((nb / dividor) >= size_base)
    dividor = dividor * size_base;
  while (dividor > 0)
    {
      result = (nb / dividor) % size_base;
      my_putchar(base[result]);
      dividor = dividor / size_base;
    }
}

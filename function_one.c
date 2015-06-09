/*
** all.c for  in /home/mart_4/rendu/TestPiscine/printf
** 
** Made by Thomas Martins
** Login   <mart_4@epitech.net>
** 
** Started on  Tue Nov 11 12:17:42 2014 Thomas Martins
** Last update Sun Nov 16 22:02:33 2014 Thomas Martins
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_putstr(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      my_putchar(str[a]);
      a++;
    }

}

int	my_strlen(char *str)
{
  int	c;

  c = 0;
  while (*str != '\0')
    {
      str = str + 1;
      c++;
    }
  return (c);
}

int	my_put_nbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  if (nb >= 10)
    my_put_nbr(nb / 10);
  my_putchar(48 + (nb % 10));
  if (nb = 0)
    return (0);
}

int	my_putnbr_unsigned(unsigned int nb)
{
  if (nb >= 10)
    my_putnbr_unsigned(nb / 10);
  my_putchar(48 + (nb % 10));
  if (nb = 0)
    return (0);
}

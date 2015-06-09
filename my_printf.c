/*
** printf.c for  in /home/mart_4/rendu/TestPiscine/printf
** 
** Made by Thomas Martins
** Login   <mart_4@epitech.net>
** 
** Started on  Sun Nov 16 22:06:35 2014 Thomas Martins
** Last update Sun Nov 30 16:41:11 2014 Thomas Martins
*/

#include <stdlib.h>
#include <stdarg.h>

int	my_function(void *ptr)
{
  my_putstr("0x");
  my_putnbr_base(ptr, "0123456789abcdef");
}

int	my_condition_two(va_list ap, const char *ftm, int i)
{
  if (ftm[i] == 'o')
    my_putnbr_base(va_arg(ap, int), "01234567");
  else if (ftm[i] == 'p')
    my_function(va_arg(ap, void *));
  else if (ftm[i] == 'u')
    my_putnbr_unsigned(va_arg(ap, unsigned int));
  else if (ftm[i] == 'S')
    my_putstr_two(va_arg(ap, char *), "01234567");
  else if (ftm[i] == 'i')
    my_put_nbr(va_arg(ap, int));
  else if (ftm[i] == 'l')
    my_put_ld(ap, ftm, i);
  else if (ftm[i] == '#')
    my_condition_flag(ap, ftm, i);
}

int	my_condition(va_list ap, const char *ftm, int i)
{
  if (ftm[i] == 's')
    my_putstr(va_arg(ap, char *));
  else if (ftm[i] == 'd')
   my_put_nbr(va_arg(ap, int));
  else if (ftm[i] == 'c')
    my_putchar(va_arg(ap, int));
  else if (ftm[i] == 'x')
    my_putnbr_base(va_arg(ap, int), "0123456789abcdef");
  else if (ftm[i] == 'X')
    my_putnbr_base(va_arg(ap, int), "0123456789ABCDEF");
  else if (ftm[i] == 'b')
    my_putnbr_base(va_arg(ap, int), "01");
  else if (ftm[i] == '%')
    my_putchar('%');
  else if (ftm[i] == 'o' || ftm[i] == 'p' || ftm[i] == 'u')
    i = my_condition_two(ap, ftm, i);
  else if (ftm[i] == 'S' || ftm[i] == 'i' || ftm[i] == 'l' || ftm[i] == '#')
    i = my_condition_two(ap, ftm, i);
  return (i);
}

int	my_printf(const char *ftm, ...)
{
  int		i;
  va_list	ap;

  i = 0;
  va_start(ap, ftm);
  while (ftm[i] != '\0')
    {
      if (ftm[i] == '%')
	{
	  i++;
	  i = my_condition(ap, ftm, i);
	}
      else if (ftm[i] != '%')
	{
	  my_putchar(ftm[i]);
	}
      i++;
    }
  va_end(ap);
  return (0);
}

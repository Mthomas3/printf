##
## Makefile for  in /home/mart_4/rendu/PSU_2014_my_printf
## 
## Made by Thomas Martins
## Login   <mart_4@epitech.net>
## 
## Started on  Sun Nov 16 21:07:03 2014 Thomas Martins
## Last update Sun Nov 16 21:32:51 2014 Thomas Martins
##

NAME	= libmy.a

SRC	= my_putnbr_base.c \
	my_printf.c \
	function_one.c \
	my_function.c \
	my_putnbr_flag.c \
	printf_two.c

OBJ	= $(SRC:.c=.o)

CC	= gcc

AR	= ar rc

RL	= ranlib

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
	$(RL) $(NAME)

clean:
	$(RM) $(OBJ) 

fclean: clean
	$(RM) $(NAME)

re: fclean all

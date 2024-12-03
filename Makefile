# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zmeliani <zmeliani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 10:30:11 by zmeliani          #+#    #+#              #
#    Updated: 2024/11/27 11:39:17 by zmeliani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_printf.c \
		ft_putchar.c \
		ft_putnbr_type.c \
		ft_putstr.c \
		ft_strchr.c \
		ft_strlen.c

SRCS := $(addprefix $(SRCSDIR), $(SRCS))

OBJSDIR =
OBJS = $(SRCS:$(SRCSDIR)%.c=%.o)
OBJS := $(addprefix $(OBJSDIR), $(OBJS))

AR = ar
ARFLAGS = crs

CC = cc -g
CFLAGS = -Wall -Werror -Wextra

RM = rm -rf

NAME = libftprintf.a

all : $(NAME)

$(OBJSDIR)%.o : %.c | $(OBJSDIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJSDIR) :
	mkdir -p $@

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

test : test_ft_printf.c $(NAME)
	@$(CC) -o $@ $^

clean :
	$(RM) $(OBJS) test

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean libs re test
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zmeliani <zmeliani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 10:30:11 by zmeliani          #+#    #+#              #
#    Updated: 2024/11/25 17:06:58 by zmeliani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_call.c \
		ft_intlen.c \
		ft_printf.c \
		ft_putchar.c \
		ft_putnbr_type.c \
		ft_putstr.c

SRCS := $(addprefix $(SRCSDIR), $(SRCS))

OBJSDIR = objs/
OBJS = $(SRCS:$(SRCSDIR)%.c=%.o)
OBJS := $(addprefix $(OBJSDIR), $(OBJS))

ARCHVS = libft/libft.a

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
	make -C libft
	cp -r $(ARCHVS) $(NAME)
	$(AR) $(ARFLAGS) $@ $^

test : test_ft_printf.c $(NAME)
#	@echo "Test compiled"
	@$(CC) -o $@ $^

clean :
	$(RM) $(OBJSDIR) *.o test
	make clean -C libft

fclean : clean
	$(RM) $(NAME)
	make fclean -C libft

re : fclean all

.PHONY : all clean fclean libs re test
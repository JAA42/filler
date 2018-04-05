#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avallois <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/16 11:33:09 by avallois          #+#    #+#              #
#    Updated: 2018/03/07 14:22:48 by avallois         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#tes axel#
NAME = login.player #modifier le login avec le sien

LIB = libft/libft.a

SRCS = player.c structure.c

all : $(NAME)

$(NAME) :
	@make -C libft all
	gcc -o $(NAME) $(SRCS) $(LIB)

push :
	@git add .
	@git commit -m "yo"
	git push

clean :
	@make -C libft clean

fclean : clean
	@make -C libft fclean
	@rm -f $(NAME)

re : fclean all

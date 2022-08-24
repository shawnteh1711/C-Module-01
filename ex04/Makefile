# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: steh <steh@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/18 17:07:14 by steh              #+#    #+#              #
#    Updated: 2022/08/23 17:40:45 by steh             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS			=	$(wildcard *.cpp)
OBJS			=	$(SRCS:.cpp=.o)
NAME			=	program
CFLAGS			=	-Wall -Wextra -Werror -std=c++98 -pedantic -g -fsanitize=address
CC				=	c++	

all				: 	$(NAME)
					./$(NAME)

$(NAME)			:	$(OBJS)
					$(CC) $(CFLAGS) $< -o $@

$(OBJS)			:	$(SRCS)
					$(CC) $(CFLAGS) -c $< -o $@

clean			:
					@rm -f $(OBJS)

fclean			:	clean
					@rm -f $(NAME)

re				:	fclean all

.PHONY			:	all clean fclean re
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: besalort <besalort@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/26 16:44:21 by besalort          #+#    #+#              #
#    Updated: 2024/09/25 14:59:21 by besalort         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = HarlFilter

SRC = ./main.cpp \
	./Harl.cpp \

CC =	c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

AR = ar rcs

.cpp.o:
		${CC} ${CPPFLAGS} -c $< -o ${<:.cpp=.o}

OBJ = $(SRC:.cpp=.o)

$(NAME) :	${OBJ}
			$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

all		:	$(NAME)

clean	:
			rm -rf $(OBJ)

fclean	:	clean
			rm -rf $(NAME)

re		:	fclean
			make
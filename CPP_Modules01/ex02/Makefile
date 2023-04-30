# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/30 20:22:10 by hdagdagu          #+#    #+#              #
#    Updated: 2023/04/30 21:17:34 by hdagdagu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C++ = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp\

OBJ = $(SRC:.cpp=.o)

NAME = brain

#DEBUG
ifeq ($(DEBUG), 1)
   OPTS = -fsanitize=address -g
endif

all : $(NAME)

$(NAME) : $(OBJ)
	$(C++) $(FLAGS) $(OBJ) $(OPTS) -o $(NAME)

%.o : %.cpp
	$(C++) $(FLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re:fclean $(NAME)

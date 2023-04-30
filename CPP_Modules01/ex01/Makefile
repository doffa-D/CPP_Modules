# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/26 14:44:35 by hdagdagu          #+#    #+#              #
#    Updated: 2023/04/30 20:17:23 by hdagdagu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C++ = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp\
		Zombie.cpp\
		zombieHorde.cpp\

OBJ = $(SRC:.cpp=.o)

NAME = Zombie

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

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/26 14:44:35 by hdagdagu          #+#    #+#              #
#    Updated: 2023/04/28 18:02:02 by hdagdagu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C++ = c++
FLAGS = -Wall -Wextra -Werror
SRC = main.cpp\
	PhoneBook.cpp

OBJ = $(SRC:.c=.o)

NAME = PhoneBook

#DEBUG
ifeq ($(DEBUG), 1)
   OPTS = -fsanitize=address -g
endif

all : $(NAME)

$(NAME) : $(OBJ)
	$(C++) $(FLAGS) $(OBJ) $(OPTS) -o $(NAME)

%.o : %.C
	@$(C++) $(FLAGS) -c $< -o $@

clean :
	rm -f $(OBJE)

fclean : clean
	rm -f $(NAME)

re:fclean $(NAME)

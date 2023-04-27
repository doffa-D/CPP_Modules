# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/22 19:56:43 by hdagdagu          #+#    #+#              #
#    Updated: 2023/04/22 20:04:17 by hdagdagu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


C++ = c++
FLAGS = -Wall -Wextra -Werror
SRC = megaphone.cpp\

OBJ = $(SRC:.c=.o)

NAME = megaphone

all : $(NAME)

$(NAME) : $(OBJ)
	$(C++) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.C
	@$(C++) $(FLAGS) -c $< -o $@

clean :
	rm -f $(OBJE)

fclean : clean
	rm -f $(NAME)

re:fclean $(NAME)

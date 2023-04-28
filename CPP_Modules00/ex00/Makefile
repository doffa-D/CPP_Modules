# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/22 19:56:43 by hdagdagu          #+#    #+#              #
#    Updated: 2023/04/28 18:02:20 by hdagdagu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


C++ = c++
FLAGS = -Wall -Wextra -Werror
SRC = megaphone.cpp\

OBJ = $(SRC:.c=.o)

NAME = megaphone

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

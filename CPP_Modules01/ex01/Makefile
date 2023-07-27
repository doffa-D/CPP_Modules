# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/26 14:44:35 by hdagdagu          #+#    #+#              #
#    Updated: 2023/07/27 16:46:03 by hdagdagu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


C++ = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
OBJDIR = .objFiles
FILES = main Zombie zombieHorde

SRC = $(FILES:=.c)
OBJ = $(addprefix $(OBJDIR)/,$(SRC:.c=.o))

NAME = Zombie

# DEBUG
ifeq ($(DEBUG), 1)
   OPTS = -fsanitize=address -g
endif

all: $(NAME)

$(NAME): $(OBJ)
	$(C++) $(FLAGS) $(OBJ) $(OPTS) -o $(NAME)

$(OBJDIR)/%.o: %.cpp
	$(C++) $(FLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -rf $(OBJDIR)

re: fclean all

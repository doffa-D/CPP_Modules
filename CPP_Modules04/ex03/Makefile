# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/26 14:44:35 by hdagdagu          #+#    #+#              #
#    Updated: 2023/08/10 17:22:54 by hdagdagu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C++ = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g
OBJDIR = .objFiles
FILES = main AMateria MateriaSource Ice Cure Character

SRC = $(FILES:=.cpp)
OBJ = $(addprefix $(OBJDIR)/,$(SRC:.cpp=.o))

NAME = Interface

# DEBUG
ifeq ($(DEBUG), 1)
   OPTS = -fsanitize=address -g
endif

all: $(OBJDIR) $(NAME)

$(NAME): $(OBJ)
	$(C++) $(FLAGS) $(OBJ) $(OPTS) -o $(NAME)

$(OBJDIR)/%.o: %.cpp
	$(C++) $(FLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -rf $(OBJDIR)

re: fclean all

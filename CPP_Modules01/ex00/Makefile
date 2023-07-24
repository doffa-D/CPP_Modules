# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/26 14:44:35 by hdagdagu          #+#    #+#              #
#    Updated: 2023/07/22 12:02:57 by hdagdagu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


C++ = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
OBJDIR = .objFiles
FILES = main Zombie newZombie randomChump

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

re: fclean all

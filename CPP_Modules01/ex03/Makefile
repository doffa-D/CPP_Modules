# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/26 14:44:35 by hdagdagu          #+#    #+#              #
#    Updated: 2023/07/23 16:20:20 by hdagdagu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


C++ = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
OBJDIR = .objFiles
FILES = main HumanA HumanB Weapon

SRC = $(FILES:=.cpp)
OBJ = $(addprefix $(OBJDIR)/,$(SRC:.cpp=.o))

NAME = Weapon

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
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

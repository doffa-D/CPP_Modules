# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/26 14:44:35 by hdagdagu          #+#    #+#              #
#    Updated: 2023/08/21 10:28:41 by hdagdagu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C++ = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 
OBJDIR = .objFiles
FILES = main ScalarConverter

SRC = $(FILES:=.cpp)
OBJ = $(addprefix $(OBJDIR)/,$(SRC:.cpp=.o))

NAME = Conversion

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

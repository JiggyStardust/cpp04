# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/17 09:20:36 by sniemela          #+#    #+#              #
#    Updated: 2025/04/24 11:54:00 by sniemela         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Abstract
CPPFLAGS = -Wall -Werror -Wextra -std=c++11
CPP = c++
SOURCES = src/main.cpp \
			src/Animal.cpp \
			src/Dog.cpp \
			src/Cat.cpp \
			src/WrongAnimal.cpp \
			src/WrongCat.cpp \
			src/Brain.cpp

OBJDIR = obj
OBJS = $(SOURCES:src/%.cpp=$(OBJDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

$(OBJDIR)/%.o: src/%.cpp | $(OBJDIR)
	@mkdir -p $(OBJDIR)
	@$(CPP) $(CPPFLAGS) -c $< -o $@

$(OBJDIR):
	@mkdir -p $(OBJDIR)

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
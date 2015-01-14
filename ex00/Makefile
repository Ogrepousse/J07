#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/05 11:30:34 by abouvier          #+#    #+#              #
#    Updated: 2015/01/13 22:05:56 by abouvier         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = iter
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror
OBJS = $(addsuffix .o, iter)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) -o $(NAME) $^

$(OBJS): Makefile

%.o: %.cpp
	$(CXX) -c $(CXXFLAGS) $(OUTPUT_OPTION) $<

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean

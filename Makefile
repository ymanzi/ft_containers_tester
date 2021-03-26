# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymanzi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/09 14:05:13 by ymanzi            #+#    #+#              #
#    Updated: 2020/11/22 13:49:15 by ymanzi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = clang++
CXXFLAGS = #-Wall -Wextra -Werror
STACK = stack
QUEUE = queue
LIST = list
VECTOR = vector
MAP = map

all: stack queue list map vector

stack: $(STACK)

$(STACK):
	@$(CXX) $(CXXFLAGS) stack/main.c -o $(STACK)
	@./$(STACK)

queue: $(QUEUE)

$(QUEUE):
	@$(CXX) $(CXXFLAGS) queue/main.c -o $(QUEUE)
	@./$(QUEUE)

list: $(LIST)

$(LIST):
	@$(CXX) $(CXXFLAGS) list/main.c -o $(LIST)
	@./$(LIST)

map: $(MAP)

$(MAP):
	@$(CXX) $(CXXFLAGS) map/main.c -o $(MAP)
	@./$(MAP)

vector: $(VECTOR)

$(VECTOR):
	@$(CXX) $(CXXFLAGS) vector/main.c -o $(VECTOR)
	@./$(VECTOR)

clean:
	@rm -f $(LIST) $(QUEUE) $(STACK) $(VECTOR) $(MAP)

fclean: clean

re: fclean all
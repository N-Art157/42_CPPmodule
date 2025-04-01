# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 23:28:23 by nakagawashi       #+#    #+#              #
#    Updated: 2025/04/01 15:53:48 by nakagawashi      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= zoo
SRCS 		= main.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Animal.cpp Brain.cpp
OBJS 		= $(SRCS:.cpp=.o)
CXX 		= c++
CXXFLAGS 	= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
	
clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: 
		@$(MAKE) fclean
		@$(MAKE) all

.PHONY: all clean fclean re
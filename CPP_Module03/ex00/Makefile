# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 23:28:23 by nakagawashi       #+#    #+#              #
#    Updated: 2025/03/30 18:10:28 by nakagawashi      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= clap_trap
SRCS 		= main.cpp ClapTrap.cpp
OBJS 		= $(SRCS:.cpp=.o)
CXX 		= c++
CXXFLAGS 	= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
	
clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
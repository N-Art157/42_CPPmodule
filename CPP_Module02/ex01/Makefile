# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 23:28:23 by nakagawashi       #+#    #+#              #
#    Updated: 2025/03/28 22:40:52 by nakagawashi      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= fixed
SRCS 		= main.cpp Fixed.cpp
OBJS 		= $(SRCS:.cpp=.o)
CXX 		= c++
CXXFLAGS 	= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 23:28:23 by nakagawashi       #+#    #+#              #
#    Updated: 2025/03/24 17:21:40 by nakagawashi      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= zombie
SRCS_DIR 	= srcs/
SRCS 		= main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
SRCS		:= $(addprefix $(SRCS_DIR), $(SRCS))
OBJS 		= $(SRCS:.cpp=.o)
CXX 		= c++
CXXFLAGS 	= -Wall -Wextra -Werror -std=c++98 -Iinclude

all: $(NAME)

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re:
		fclean all

.PHONY: all clean fclean re
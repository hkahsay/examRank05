#compiler
CC = c++
#CFLAGS
CFLAGS = -std=c++98 -Wall -Werror -Wextra

#source
SRCS = main.cpp Warlock.cpp ASpell.cpp ATarget.cpp Fwoosh.cpp Dummy.cpp \
	Fireball.cpp Polymorph.cpp BrickWall.cpp SpellBook.cpp TargetGenerator.cpp

#objects
OBJS = $(SRCS:.cpp=.o)

#default NAME
NAME =  Warlock

 #remove
RM = rm -f

all: $(NAME)

#rule to compile cpp into object

%.o:%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

#rule to compile from object to defalet name

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

#rule to remove
clean:
	$(RM) $(OBJS) $(NAME)

#flcean
fclean: clean
	$(RM) $(NAME)
re: fclean $(NAME)

.PHONY: all clean fclean re


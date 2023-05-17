# E89 Pedagogical & Technical Lab
# project:     day_105
# created on:  Sat May  6 12:24:18 2023
# 1st author:  user
# description: Makefile

NAME	=	Lib

SRCS	=	src/LibFolder/atoi.c	\
			src/LibFolder/strcat.c	\
			src/LibFolder/strlen.c	\
			src/LibFolder/strcpy.c	\
			src/LibFolder/strstr.c	\
			src/LibFolder/strpbrk.c	\
			src/LibFolder/memcpy.c	\
			src/LibFolder/puts.c	\
			src/LibFolder/strchr.c	\
			src/LibFolder/strcmp.c	\
			src/LibFolder/strdup.c	\
			src/LibFolder/strncpy.c	\
			src/LibFolder/strndup.c	\
			src/LibFolder/strrchr.c	\
			src/LibFolder/swap_int.c \
			src/OldProject/2022_rev/src/main.c		\
			src/OldProject/2022_rev/src/reverse.c		\
			src/OldProject/2022_rev/src/reverse_pos_buf.c		\
			src/OldProject/2022_rev/src/reverse_withoutn.c		\
			src/LibFolder/strdupcat.c	\
			
OBJS	=	$(SRCS:.c=.o)

CFLAGS	+=	-W -Wall -Wextra -Werror -Iinclude/

LDFLAGS	+=

RM	=	rm -vf

CC	:=	gcc

ifdef RELEASE
CFLAGS += -O2
endif

ifdef DEBUG
CFLAGS += -g
endif

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -o $(NAME)

save:
	git status
	git add src/*.c include/*.h Makefile
	git commit -m "$(NAME) save"
	git push

exe:
	make re
	./rev
	make fclean

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

# Theses rules do not directly map to a specific file
.PHONY: all clean fclean re

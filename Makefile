# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/03 18:00:49 by ncoden            #+#    #+#              #
#    Updated: 2015/08/18 16:19:20 by ncoden           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# DEPENDENCIES
LIBFT_DIR = libs/libft
MINILIBX_DIR = libs/minilibx

# **************************************************************************** #

NAME = libft-graphics.a

# COMPILATION
CC = gcc
CCFLAGS = -Wall -Werror -Wextra

ASM = nasm
ASMFLAGS = -f macho64

LNK = gcc
LNKFLAGS =

# DIRECTORIES
SRCDIR = src
OBJDIR = obj
INCDIR =\
	includes\
	$(LIBFT_DIR)\
	$(LIBFT_DIR)/includes\
	$(MINILIBX_DIR)

# SOURCES
SRC =\
	env2d/ft_2denvnew.c\
	env2d/ft_2denvupdate.c\
	env2d/ft_2dposnew.c\
	env2d/ft_2dposset.c\
	env2d/ft_2dsizenew.c\
	env2d/ft_2dsizeset.c\
	env2d/ft_print2dline.c\
	env2d/ft_print2dline_left.c\
	env2d/ft_print2dline_right.c\
	env2d/ft_printline.c\
	env2d/ft_printsqr.c\
	env2d/ft_printvec.c\
	env3d/ft_3dangnew.c\
	env3d/ft_3dangset.c\
	env3d/ft_3dcamnew.c\
	env3d/ft_3denvdel.c\
	env3d/ft_3denvnew.c\
	env3d/ft_3denvprint.c\
	env3d/ft_3denvpush.c\
	env3d/ft_3denvupdate.c\
	env3d/ft_3dlinenew.c\
	env3d/ft_3dposnew.c\
	env3d/ft_3dposset.c\
	env3d/ft_3dto2dpos.c\
	env3d/ft_print3dline.c\
	img/ft_imgclr.c\
	img/ft_imgdel.c\
	img/ft_imgnew.c\
	img/ft_imgset.c\
	vec/ft_vecnew.c\
	vec/ft_vecset.c\

# **************************************************************************** #

# ALLOWED EXTENSIONS
EXTENSIONS = .c .s

# SPECIAL CHARS
LOG_CLEAR		= \033[2K
LOG_UP 			= \033[A
LOG_NOCOLOR		= \033[0m
LOG_BLACK		= \033[1;30m
LOG_RED			= \033[1;31m
LOG_GREEN		= \033[1;32m
LOG_YELLOW		= \033[1;33m
LOG_BLUE		= \033[1;34m
LOG_VIOLET		= \033[1;35m
LOG_CYAN		= \033[1;36m
LOG_WHITE		= \033[1;37m

# **************************************************************************** #

.PHONY: all $(NAME) build clean fclean re
.SILENT:

SRC := $(filter $(addprefix %, $(EXTENSIONS)), $(SRC))
SRCS = $(addprefix $(SRCDIR)/, $(SRC))
OBJS = $(addprefix $(OBJDIR)/, $(addsuffix .o, $(basename $(SRC))))
OBJS_DIRS = $(sort $(dir $(OBJS)))

INCS_DIRS = $(addsuffix /, $(INCDIR))
INCS = $(addprefix -I , $(INCS_DIRS))

all: $(NAME)
$(NAME): build $(OBJS)
	echo "$(LOG_CLEAR)$(NAME)... $(LOG_YELLOW)assembling...$(LOG_NOCOLOR)$(LOG_UP)"
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
	echo "$(LOG_CLEAR)$(NAME)... compiled $(LOG_GREEN)✓$(LOG_NOCOLOR)"
build:
	mkdir -p $(OBJDIR)
	mkdir -p $(OBJS_DIRS)
clean:
	rm -f $(LIBS)
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	echo "$(LOG_CLEAR)$(NAME)... $(LOG_YELLOW)$<$(LOG_NOCOLOR)$(LOG_UP)"
	$(CC) -c -o $@ $< $(INCS) $(CCFLAGS)
$(OBJDIR)/%.o: $(SRCDIR)/%.s
	echo "$(LOG_CLEAR)$(NAME)... $(LOG_YELLOW)$<$(LOG_NOCOLOR)$(LOG_UP)"
	$(ASM) -o $@ $< $(INCS) $(ASMFLAGS)

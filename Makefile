# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npineau <npineau@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 12:15:41 by npineau           #+#    #+#              #
#    Updated: 2015/05/21 20:34:00 by npineau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	libumlx.a

### DIRECTORIES ###

DIRSRC		:=	src
DIROBJ		:=	obj
DIRINI		:=	$(DIRSRC)/ini
DIRMSC		:=	$(DIRSRC)/msc
DIRMATH		:=	$(DIRSRC)/math
DIRPIX		:=	$(DIRSRC)/pix
DIRCOL		:=	$(DIRSRC)/color
DIRINC		:=	inc
DIRFT		:=	../libft

### FILES ###

INC			:=	$(DIRINC)/libumlx.h
LIBFT		:=	$(DIRFT)/libft.a

### FILES: SOURCES ###

include $(DIRINI)/sources.mk
include $(DIRMSC)/sources.mk
include $(DIRMATH)/sources.mk
include $(DIRPIX)/sources.mk
include $(DIRCOL)/sources.mk

### FILES: PATHS ###

POBJ		:=	$(addprefix $(DIROBJ)/, $(OBJ))

### ARCHIVE ###

AR			:=	ar
AR_FLAG		:=	-crus
AR_EXEC		=	$(AR) $(AR_FLAG) $@ $^

### COMPILATION ###

C_FLAG		:=	-Wall -Wextra -Werror
I_FLAG		:=	-I $(DIRINC) -I $(DIRFT)/$(DIRINC)
O_FLAG		:=	-O3
C_OPT		=	-o $@ -c $< $(I_FLAG)
COMPIL		=	$(CC) $(C_FLAG) $(O_FLAG) $(C_OPT)

### RULES ###

all: $(NAME)

### RULES: ARCHIVE ###

$(NAME): $(POBJ)
	$(AR_EXEC)
	ranlib $(NAME)

$(LIBFT):
	$(MAKE) -C $(DIRFT)
### RULES: MISC ###

$(POBJ): $(LIBFT) |$(DIROBJ)

$(DIROBJ):
	mkdir $(DIROBJ)

clean:
	@(rm -f $(POBJ))

fclean: clean
	@(rm -f $(NAME))

re: fclean $(NAME)

.PHONY: all clean re fclean

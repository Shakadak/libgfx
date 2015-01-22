INI	:=	new_mlx.c \
		new_image.c \
		new_window.c

OBJ := $(OBJ) $(INI:.c=.o)

$(DIROBJ)/%.o: $(DIRINI)/%.c $(INC)
	$(COMPIL)

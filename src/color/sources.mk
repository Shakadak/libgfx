COL	:=	linear_interpolation.c \
		new_color.c

OBJ := $(OBJ) $(COL:.c=.o)

$(DIROBJ)/%.o: $(DIRCOL)/%.c $(INC)
	$(COMPIL)

COL	:=	linear_interpolation.c

OBJ := $(OBJ) $(COL:.c=.o)

$(DIROBJ)/%.o: $(DIRCOL)/%.c $(INC)
	$(COMPIL)

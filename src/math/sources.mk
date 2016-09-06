MATH	:=	norme.c \
			interpolate.c

OBJ := $(OBJ) $(MATH:.c=.o)

$(DIROBJ)/%.o: $(DIRMATH)/%.c $(INC)
	$(COMPIL)

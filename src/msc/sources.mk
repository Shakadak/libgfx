MSC	:=	ft_fatal.c

OBJ := $(OBJ) $(MSC:.c=.o)

$(DIROBJ)/%.o: $(DIRMSC)/%.c $(INC)
	$(COMPIL)

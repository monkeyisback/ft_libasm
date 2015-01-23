NAME = ft_libasm

SRCSNASM = ft_strcat.nasm

SRCSNASMO =	$(SRCSNASM:.nasm=.o)

all: $(NAME)
	gcc -o $(NAME) $(SRCSNASMO) main.c

$(NAME): $(SRCSNASM)
	nasm -f elf64 $(SRCSNASM) 				#nasm -hf for system format

clean:
	/bin/rm -f $(SRCSNASMO)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
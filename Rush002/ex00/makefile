# Nazwa programu
PROGRAM = rush-o2

# Pliki źródłowe
SRC = main.c
# Kompilator
CC = gcc

# Opcje kompilacji
CFLAGS = -Wall -Wextra -Werror

# Obiekty
OBJ = $(SRC:.c=.o)

# Wygeneruj plik wykonywalny
$(PROGRAM): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(PROGRAM)

# Wygeneruj obiekty
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Czyść
clean:
	rm -f $(PROGRAM) $(OBJ)
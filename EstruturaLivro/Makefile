#Constantes contendo os diretórios dos arquivos do projeto.
APPS = ./apps
BIN = ./bin
INCLUDE = ./include
OBJ = ./obj
SRC = ./src

#
all: lib main

lib:
	gcc -c $(SRC)/livros.c -I $(INCLUDE) -o $(OBJ)/livros.o

main:
	gcc $(APPS)/main.c $(OBJ)/*.o -I $(INCLUDE) -o $(BIN)/main

run:
	$(BIN)/main

clean:
	rm $(BIN)/* $(OBJ)/*
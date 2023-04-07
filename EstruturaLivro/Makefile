#Constantes recebendo os diretórios dos arquivos do projeto.
APPS = ./apps
BIN = ./bin
INCLUDE = ./include
OBJ = ./obj
SRC = ./src

#Dependências de diretivas na target "all:".
#Logo, toda vez que o arquivo "Makefile" for executado...
#... o mesmo irá executar, em ordem de inserção, as targets "lib:" e "main:".
all: lib main

#Dependências de diretivas na target "lib:".
#Logo, quando a target "all:" for chamada e, em seguida, chamar a target "lib:"...
#... a mesma irá chamar a target "%.o", através do respectivo arquivo "livros.o".
lib: livros.o

main:
	gcc $(APPS)/main.c $(OBJ)/*.o -I $(INCLUDE) -o $(BIN)/main

%.o: $(SRC)/%.c $(INCLUDE)/%.h
	gcc -c $< -I $(INCLUDE) -o $(OBJ)/$@

run:
	$(BIN)/main

clean:
	rm -rf $(BIN)/* $(OBJ)/*

#Constantes recebendo os diretórios dos arquivos do projeto.
APPS = ./apps
BIN = ./bin
INCLUDE = ./include
LIB = ./lib
OBJ = ./obj
SRC = ./src

FLAGS = -o3 -Wall
LIBS = -llivro -L $(LIB)

#Dependências de diretivas na target "all:".
#"all:" é chamada toda vez que o arquivo "Makefile" for executado.
#Em seguida, "all:" irá chamar as targets "lib:" e "main:", em ordem de inserção.
all: lib myapps

#Dependências de diretivas na target "lib:".
#"lib:" é chamada logo após "all:" iniciar sua execução.
#Logo, "lib:" irá chamar a target "$(OBJ)/%.o", através do respectivo arquivo "$(OBJ)/livros.o".
lib: \
	$(OBJ)/livros.o
	ar -rcs $(LIB)/liblivro.a $(OBJ)/*.o

#Dependências de diretivas na target "main:".
#"main:" é chamada após "lib:" finalizar sua execução.
#Logo, "main:" irá chamar a target "$(BIN)/%", através do respectivo arquivo "$(BIN)/main".
myapps: clean_apps\
	$(BIN)/main

#Target genérica para compilação dos Tipos Abstratos de Dados.
$(OBJ)/%.o: $(SRC)/%.c $(INCLUDE)/%.h
	gcc $(FLAGS) -c $< -I $(INCLUDE) -o $@

#Target genérica para compilação do programa.
$(BIN)/%: $(APPS)/%.c $(OBJ)/*.o
	gcc $(FLAGS) $< $(LIBS) -I $(INCLUDE) -o $@

run:
	$(BIN)/main

clean:
	rm -rf $(BIN)/* $(LIB)/* $(OBJ)/*

clean_apps:
	rm -rf $(BIN)/*

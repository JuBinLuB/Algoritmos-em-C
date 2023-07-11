# Constantes recebendo os diretórios dos arquivos do projeto.
APPS = ./apps
BIN = ./bin
INCLUDE = ./include
LIB = ./lib
OBJ = ./obj
SRC = ./src

# >>> README <<<
# I) Crie os respectivos diretórios acima.
# II) Substitua "nome_arquivo" em todas as partes do programa pelo respectivo arquivo que deseja compilar (Tópicos: LIBS e #2).
# III) Substitua "main" em todas as partes do programa pelo respectivo arquivo com a função main (Tópicos #3 e #4).

FLAGS = -o3 -Wall
LIBS = -l nome_arquivo -L $(LIB)

# 1: Dependências de diretivas na target "all:".
#	 "all:" é chamada toda vez que o arquivo "Makefile" for executado.
#	 Em seguida, "all:" irá chamar as targets "lib:" e "myapps:", em ordem de inserção.
all: lib myapps

# 2: Dependências de diretivas na target "lib:".
#	 "lib:" é chamada logo após "all:" iniciar sua execução.
#	 Logo, "lib:" irá chamar a target "$(OBJ)/%.o", através do respectivo arquivo "$(OBJ)/nome_arquivo.o".
#	 OBS: "lib" é parte do nome do "arquivo.a", renomeie sem alterar essa parte.
lib: $(OBJ)/nome_arquivo.o
	ar -rcs $(LIB)/libnome_arquivo.a $(OBJ)/*.o

# 3: Dependências de diretivas na target "myapps:".
#	 "myapps:" é chamada após "lib:" finalizar sua execução.
#	 Logo, "myapps:" irá chamar a target "$(BIN)/%", através do respectivo arquivo "$(BIN)/main".
#	 OBS: Substitua "main" com o nome do arquivo com a respectiva função main.
myapps: clean_apps \
	$(BIN)/main

# Target genérica para compilação dos Tipos Abstratos de Dados.
$(OBJ)/%.o: $(SRC)/%.c $(INCLUDE)/%.h
	gcc $(FLAGS) -c $< -I $(INCLUDE) -o $@

# Target genérica para compilação do programa.
$(BIN)/%: $(APPS)/%.c $(OBJ)/*.o
	gcc $(FLAGS) $< $(LIBS) -I $(INCLUDE) -o $@

# 4: Substitua "main" pelo nome do arquivo com a respectiva função main.
run:
	$(BIN)/main

# 5: Deleta todos os arquivos dos respectivos diretórios: "./bin", "./lib" e "./obj".
clean:
	rm -rf $(BIN)/* $(LIB)/* $(OBJ)/*

# 6: Target utilizada por "myapps" para recompilação do programa.
clean_apps:
	rm -rf $(BIN)/*

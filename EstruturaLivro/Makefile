
all:
	gcc -c ./src/livros.c -I ./include -o ./obj/livros.o
	gcc ./apps/main.c ./obj/*.o -I ./include -o ./bin/main

run:
	./bin/main

clean:
	rm ./bin/* ./obj/*
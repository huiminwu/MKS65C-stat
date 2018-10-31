all : stat.o
	gcc -o Stat stat.o

stat.o : stat.c
	gcc -c stat.c

run : 
	./Stat

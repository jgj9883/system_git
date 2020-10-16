foobar : ./subdir/main.o ./subdir/add.o ./subdir/subtract.o ./subdir/multiply.o ./subdir/divide.o
	gcc -o foobar ./subdir/main.o ./subdir/add.o ./subdir/subtract.o ./subdir/multiply.o ./subdir/divide.o

./subdir/main.o : ./subdir/main.c
	gcc -c ./subdir/main.c

./subdir/add.o : ./subdir/add.c
	gcc -c ./subdir/add.c

./subdir/subtract.o : ./subdir/subtract.c
	gcc -c ./subdir/subtract.c

./subdir/multiply.o : ./subdir/multiply.c
	gcc -c ./subdir/multiply.c

./subdir/divide.o : ./subdir/divide.c
	gcc -c ./subdir/divide.c

clean : 
	rm -f foobar main.o add.o subtract.o multiply.o divide.o

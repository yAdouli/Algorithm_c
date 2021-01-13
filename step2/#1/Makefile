all : exe

exe : object
	gcc -o program *.o

object :
	gcc -c *.c

clean :
	del *.o

mrproper : clean
	del *.exe
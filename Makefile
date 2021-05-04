#Simple Makefile for Project
#SPL Project
#make run to create executables for each function using ./[name]
#make clean to remove executables

run:
	gcc -o c palindromeC.c
	g++ -o cpp palindromeCPP.cpp

clean:  
	-rm $(objects)c cpp


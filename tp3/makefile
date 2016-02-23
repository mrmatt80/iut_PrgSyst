moyenne : main.o calcul.o entree.o affichage.o
	gcc main.o calcul.o entree.o affichage.o -o moyenne
main.o : main.c moyenne.h  
	gcc -c main.c
calcul.o : calcul.c moyenne.h
	gcc -c calcul.c
entree.o: entree.c
	gcc -c entree.c
affichage.o: affichage.c 
	gcc -c affichage.c

FICHIER                           DESCRIPTION
libdynamic.so	         :    Bibliothèque dynamique C contenant  dynamic library containing les définitions des fonctions
main.h	               :    Fichiers d'en-tête contenant les prototypes de fonction
1-create_dynamic_lib.sh:  	Script Bash qui crée une bibliothèque dynamique appelée liball.so à partir de tous les fichiers .c présents dans le répertoire courant.
100-operations.so	     :    Bibliothèque dynamique C qui contient des fonctions C pouvant être appelées à partir de Python
101-make_me_win.sh     :	  Script Bash pour injecter la bibliothèque libmask.so, en utilisant LD_PRELOAD, dans le programme giga million
libmask.so	           :    Bibliothèque dynamique en C à injecter dans un programme de plusieurs millions d'euros.

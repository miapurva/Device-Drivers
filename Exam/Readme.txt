1. Q1: Write a shell script program to print the ascii values of the input character.
	chmod +x ascii.sh
	./ascii.sh "any character of your choice"
2. Q2: Write a keylogger module dervice driver that prints the logged keys in reverse order. For eg. If the input is "BOMAZ" the output should be "ZAMOB".
	make
	sudo insmod keylogger.ko
	"type something in the text editor"
	dmesg                      "It will print the logged keys in reverse order"
	sudo rmmod keylogger.ko
	make clean                 "If needed"

1. Q1:
	chmod +x ascii.sh
	./ascii.sh "any character of your choice"
2. Q2:
	make
	sudo insmod keylogger.ko
	"type something in the text editor"
	dmesg                      "It will print the logged keys in reverse order"
	sudo rmmod keylogger.ko
	make clean                 "If needed"
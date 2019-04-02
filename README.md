# Device-Drivers
1. Assignment 1: Packet capture:

	cc -o sniff pac.c -lpcap

2. Lab1: To run kernel module prog:

  make
  sudo insmod Module1.ko
  dmesg
  sudo rmmod Module1.ko

3. Lab2: To run keylogger program, type the following commands:

  make
  sudo insmod keylogger.ko
  dmesg
  sudo rmmod keylogger.ko
  
4. Lab3: To run shellscript :

	chmod+x calculator.sh
	./calculator.sh

5. Lab4: ioctl:

    gcc query_app.c
    make
    sudo insmod query_ioctl.ko 
    sudo ./a.out 		 -->Output is the status,dginity and other values
    sudo ./a.out -s      -->can change those values by accessing the kernel
    sudo ./a.out -g 	 -->Shows the new values for it.
    sudo ./a.out -c 	 -->clears the values
    sudo ./a.out -g 	 -->and prints the 0 for all.
    sudo rmmod query_ioctl.ko

6. Lab5: All the commands and detailed explainantion for using "Two mouse pointers/cursors simultaneously" is 		given in the text file.

7. Lab6: Mouse device driver:
	Keep the "graphics.h" file in the same folder where your target file is.
	cc mouse.c -lX11
	./a.out

8. Lab7: Two systems with same IP address:
	
	Run the same file on both systems and enter same IP address. Then check if you can access the Internet.
	sudo cc ip.c 
    sudo ./a.out
    P.S.: You won't be able to access the Internet.


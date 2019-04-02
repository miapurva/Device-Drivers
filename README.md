# Device-Drivers
1. To run keylogger program, type the following commands:

  make
  sudo insmod keylogger.ko
  dmesg
  sudo rmmod keylogger.ko
  
2. To run kernel module prog:

  make
  sudo insmod Module1.ko
  dmesg

  sudo rmmod Module1.ko

3. To run shellscript :

	chmod+x calculator.sh
	./calculator.sh

4. Packet capture:

	cc -o sniff pac.c -lpcap

5. ioctl:

    gcc query_app.c
    sudo insmod query_ioctl.ko 
    ls
    sudo ./a.out 
    sudo ./a.out -s
    sudo ./a.out -g
    sudo ./a.out -c
    sudo ./a.out -g
    sudo rmmod query_ioctl.ko

6. Mouse device driver:
	Keep the "graphics.h" file in the same folder where your target file is.
	cc mouse.c -lX11
	./a.out

7. Two systems with same IP address:
	
	Run the same file on both systems and enter same IP address. Then check if you can access the Internet.
	sudo cc ip.c 
    sudo ./a.out
    P.S.: You won't be able to access the Internet.

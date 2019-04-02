#include <stdio.h>
#include <stdlib.h> /*for system function*/
 
/*define port name where network attached*/
#define ifr_name "wlo1"
 
int main()
{
    unsigned char ip_address[15], command[100];
     
    printf("Enter Ip address: ");
    scanf("%s",ip_address);
     
    /*make command*/
    sprintf((char*)command,"ifconfig %s %s",ifr_name, ip_address);
     
    /*run command*/
    system(command);
     
    printf("Ip updated sucessfully.\n");
     
    return 0;
}
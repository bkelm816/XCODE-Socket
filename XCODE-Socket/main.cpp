//
//  main.cpp
//  XCODE-Socket
//
//  Created by Brandon Kelm on 9/28/18.
//  Copyright © 2018 Brandon Kelm. All rights reserved.
//

#include <iostream>
#include "Socket.h"
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <unistd.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int dPort = 10024;
    int sPort = 10027;
    int server_fd;
    int opt =1;
    struct 
    std::string address = "localhost";
    
    UDPImplement::UDP UDPConnect(dPort, sPort, address );
    server_fd = socket(AF_INET, SOCK_STREAM, 0) ;
    if(server_fd == 0)
    {
        std::cout<<"Socket Failure";
        
    }
    
    if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT,
                   &opt, sizeof(opt)))
    {
        perror("setsockopt");
        exit(EXIT_FAILURE);
    }
    //UDPConnect.GetDestPort();
    return 0;
}

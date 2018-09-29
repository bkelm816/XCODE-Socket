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
#define PORT 10027

int main(int argc, const char * argv[]) {
    // insert code here...
    int server_fd;
    int opt =1;
    int new_socket;
    int valRead;
    struct sockaddr_in address;
    int addrLen = sizeof(address);
    char buffer[1024] = {0};
    
    //std::string address = "localhost";
    
    //UDPImplement::UDP UDPConnect(dPort, sPort, address );
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
    
    
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);
    
    
    if (bind(server_fd, (struct sockaddr *)&address, addrLen) < 0 )
    {
        std::cout << "Bind Failed";
    }
    if(listen(server_fd, 3)<0)
    {
        std::cout << "Listening...";
    }
    if ((new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t*)&addrLen))<0)
    {
        std::cout << "Accept Failed";
    }
    valRead = read(new_socket, buffer, 1024);
    //UDPConnect.GetDestPort();
    return 0;
}

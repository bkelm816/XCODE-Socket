//
//  main.cpp
//  XCODE-Socket
//
//  Created by Brandon Kelm on 9/28/18.
//  Copyright © 2018 Brandon Kelm. All rights reserved.
//

#include <iostream>
#include "Socket.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    int dPort = 10024;
    int sPort = 10027;
    std::string address = "localhost";
    UDPImplement::UDP UDPConnect(dPort, sPort, address );
    
    
    //UDPConnect.GetDestPort();
    return 0;
}

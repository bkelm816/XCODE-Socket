//
//  main.cpp
//  XCODE-Socket
//
//  Created by Brandon Kelm on 9/28/18.
//  Copyright © 2018 Brandon Kelm. All rights reserved.
//

#include <iostream>
#include "Socket.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    UDPImplement::UDP UDPConnect(10024, 10027, "localhost");
    
    
    std::cout << UDPConnect.GetDestPort();
    return 0;
}

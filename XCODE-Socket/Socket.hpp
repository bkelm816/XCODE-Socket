//
//  Socket.hpp
//  XCODE-Socket
//
//  Created by Brandon Kelm on 9/28/18.
//  Copyright © 2018 Brandon Kelm. All rights reserved.
//

#ifndef Socket_hpp
#define Socket_hpp

#include <stdio.h>
#include <iostream>
#include <sys/socket.h>
#include <sys/types.h>

namespace UDPImplement
{
    class UDP
    {
    public:
        // Constructor
        UDP(int destPort, int srcPort, std::string destAddress)
        {
            m_destPort = destPort;
            m_srcPort = srcPort;
            m_destAddress = destAddress;
        }
        
        int GetSrcPort();
        int GetDestPort();
        
    private:
        int m_srcPort;
        int m_destPort;
        std::string m_destAddress;
    };
}
#endif /* Socket_hpp */

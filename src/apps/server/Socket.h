//
// Created by sande on 4/20/2018.
//

#ifndef ZERO_SOCKET_H
#define ZERO_SOCKET_H

#include <iostream>
#include <memory>

class Socket;
typedef std::shared_ptr<Socket> SocketRef;

class Socket
{
public:
    Socket();
    virtual ~Socket();
    int TxData();
    int RxData();
};


#endif //ZERO_SOCKET_H

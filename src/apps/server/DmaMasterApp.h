//
// Created by sande on 4/20/2018.
//

#ifndef ZERO_DMAMASTERAPP_H
#define ZERO_DMAMASTERAPP_H

#include "DmaData.h"
#include "Socket.h"

class DmaMasterApp;
typedef std::shared_ptr<DmaMasterApp> DmaMasterAppRef;

class DmaMasterApp
{
public:
    DmaMasterApp();
    int initServer();
    void run(bool debug);
    virtual ~DmaMasterApp();

private:
    DmaDataRef _dmaDataRef;


};


#endif //ZERO_DMAMASTERAPP_H

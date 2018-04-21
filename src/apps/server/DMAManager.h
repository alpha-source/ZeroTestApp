//
// Created by sande on 4/20/2018.
//

#ifndef ZERO_DMAMASTERAPP_H
#define ZERO_DMAMASTERAPP_H

#include "DmaData.h"
#include "Socket.h"

class DMAManager;
typedef std::shared_ptr<DMAManager> DmaMasterAppRef;

class DMAManager : public DmaData, public Socket
{
public:
    DMAManager();
    int initServer();
    void run(bool debug);
    virtual ~DMAManager();

private:


};
#endif //ZERO_DMAMASTERAPP_H

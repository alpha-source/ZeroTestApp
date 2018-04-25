#include "DMAManager.h"
DMAManager::DMAManager()
{

}
int DMAManager::initServer()
{
    this->initDmaData();


    return 0;
}
void DMAManager::run(bool debug)
{
    this->Rx();
    this->process();
    this->generate();
    this->format();
    this->packege();
    this->Tx();
    this->demo();

}
DMAManager::~DMAManager()
{
}

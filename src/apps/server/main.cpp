#include <string>
#include <iostream>
#include <unistd.h>
#include <vector>
#include "DMAManager.h"


int main()
{
    DmaMasterAppRef dmaMasterApp  (new DMAManager());
    dmaMasterApp->initServer();
    dmaMasterApp->run(false);
    return 0;
}
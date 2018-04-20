#include <string>
#include <iostream>
#include <unistd.h>

#include "DmaMasterApp.h"


int main()
{
    DmaMasterAppRef dmaMasterAppRef = NULL;
    dmaMasterAppRef->initServer();
    dmaMasterAppRef->run(false);
    return 0;
}
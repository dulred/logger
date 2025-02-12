#include <iostream>
#include "utility/Logger.h"

using namespace std;
using namespace fz::utility;

int main(int argc, char const *argv[])
{
    g_logger.setFilename("./test.log");
    g_logger.max(10000);
    g_logger.open("./test.log");
    debug("areyou1");
    debug("areyou2");
    debug("areyou3");
    debug("areyou4");
    debug("areyou5");

    return 0;
}

#include "Logger.hpp"

#include <thread>
#include <windows.h>

int main()
{
    logger::s_CoreLauncherLogger;

    LOG_INFO(Core, "Hello");
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    RaiseException(EXCEPTION_ACCESS_VIOLATION, 0, 0, nullptr);
    return 0;
}

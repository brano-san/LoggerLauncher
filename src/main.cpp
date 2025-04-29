#include <iostream>

#include "Logger.hpp"

#include <thread>
#include <windows.h>

int main()
{
    try
    {
        LOG_TRACE_L3(Core, "Hello");
        LOG_TRACE_L2(Core, "Hello");
        LOG_TRACE_L1(Core, "Hello");
        LOG_DEBUG(Core, "Hello");
        LOG_INFO(Core, "Hello");
        LOG_WARNING(Core, "Hello");
        LOG_ERROR(Core, "Hello");
        LOG_CRITICAL(Test, "Hello");
    }
    catch (const std::exception& ex)
    {
        std::cout << ex.what() << '\n';
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    RaiseException(EXCEPTION_ACCESS_VIOLATION, 0, 0, nullptr);
    return 0;
}

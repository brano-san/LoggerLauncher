#include <iostream>

#include "Logger.hpp"

#include <windows.h>

int main()
{
    try
    {
        LOG_TRACE_L3(Core, "Core - LOG_TRACE_L3");
        LOG_TRACE_L2(Core, "Core - LOG_TRACE_L2");
        LOG_TRACE_L1(Core, "Core - LOG_TRACE_L1");
        LOG_DEBUG(Core, "Core - LOG_DEBUG");
        LOG_INFO(Core, "Core - LOG_INFO");
        LOG_WARNING(Core, "Core - LOG_WARNING");
        LOG_ERROR(Core, "Core - LOG_ERROR");
        LOG_CRITICAL(Core, "Core - LOG_CRITICAL");

        LOG_TRACE_L3(Test, "Test - LOG_TRACE_L3");
        LOG_TRACE_L2(Test, "Test - LOG_TRACE_L2");
        LOG_TRACE_L1(Test, "Test - LOG_TRACE_L1");
        LOG_DEBUG(Test, "Test - LOG_DEBUG");
        LOG_INFO(Test, "Test - LOG_INFO");
        LOG_WARNING(Test, "Test - LOG_WARNING");
        LOG_ERROR(Test, "Test - LOG_ERROR");
        LOG_CRITICAL(Test, "Test - LOG_CRITICAL");
    }
    catch (const std::exception& ex)
    {
        std::cout << ex.what() << '\n';
    }

    // RaiseException(EXCEPTION_ACCESS_VIOLATION, 0, 0, nullptr);

    LOG_INFO(Core, "BEFORE backtrace Example {}", 1);

    QUILL_LOG_BACKTRACE(logger::s_CoreLauncherLogger.getLogger(logger::CoreLauncherSources::kCore), "Backtrace log {}", 1);
    QUILL_LOG_BACKTRACE(logger::s_CoreLauncherLogger.getLogger(logger::CoreLauncherSources::kCore), "Backtrace log {}", 2);
    QUILL_LOG_BACKTRACE(logger::s_CoreLauncherLogger.getLogger(logger::CoreLauncherSources::kCore), "Backtrace log {}", 3);
    QUILL_LOG_BACKTRACE(logger::s_CoreLauncherLogger.getLogger(logger::CoreLauncherSources::kCore), "Backtrace log {}", 4);

    LOG_INFO(Core, "AFTER backtrace Example {}", 1);

    LOG_ERROR(Core, "An error has happened, Backtrace is also flushed.");
    LOG_ERROR(Core, "An second error has happened, but backtrace is now empty.");

    QUILL_LOG_BACKTRACE(
        logger::s_CoreLauncherLogger.getLogger(logger::CoreLauncherSources::kCore), "Another Backtrace log {}", 1);
    QUILL_LOG_BACKTRACE(
        logger::s_CoreLauncherLogger.getLogger(logger::CoreLauncherSources::kCore), "Another Backtrace log {}", 2);

    LOG_INFO(Core, "Another log info");
    LOG_CRITICAL(Core, "A critical error from different logger.");
    LOG_CRITICAL(Core, "A critical error from the logger we had a backtrace.");

    return 0;
}

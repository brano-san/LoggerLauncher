#include <iostream>

#include "Logger.hpp"

#include "quill/Backend.h"
#include "quill/Frontend.h"
#include "quill/LogMacros.h"
#include "quill/Logger.h"
#include "quill/sinks/ConsoleSink.h"

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

    // QUILL_LOG_BACKTRACE(logger::s_CoreLauncherLogger.getLogger(logger::CoreLauncherSources::kCore), "Backtrace log {}", 100);

    // std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    // RaiseException(EXCEPTION_ACCESS_VIOLATION, 0, 0, nullptr);

    LOG_INFO(Core, "BEFORE backtrace Example {}", 1);

    QUILL_LOG_BACKTRACE(logger::s_CoreLauncherLogger.getLogger(logger::CoreLauncherSources::kCore), "Backtrace log {}", 1);
    QUILL_LOG_BACKTRACE(logger::s_CoreLauncherLogger.getLogger(logger::CoreLauncherSources::kCore), "Backtrace log {}", 2);
    QUILL_LOG_BACKTRACE(logger::s_CoreLauncherLogger.getLogger(logger::CoreLauncherSources::kCore), "Backtrace log {}", 3);
    QUILL_LOG_BACKTRACE(logger::s_CoreLauncherLogger.getLogger(logger::CoreLauncherSources::kCore), "Backtrace log {}", 4);

    // Backtrace is not flushed yet as we requested to flush on errors
    LOG_INFO(Core, "AFTER backtrace Example {}", 1);

    // log message with severity error - This will also flush_sink the backtrace which has 2 messages
    LOG_ERROR(Core, "An error has happened, Backtrace is also flushed.");

    // The backtrace is flushed again after LOG_ERROR but in this case it is empty
    LOG_ERROR(Core, "An second error has happened, but backtrace is now empty.");

    // Log more backtrace messages
    QUILL_LOG_BACKTRACE(
        logger::s_CoreLauncherLogger.getLogger(logger::CoreLauncherSources::kCore), "Another Backtrace log {}", 1);
    QUILL_LOG_BACKTRACE(
        logger::s_CoreLauncherLogger.getLogger(logger::CoreLauncherSources::kCore), "Another Backtrace log {}", 2);

    // Nothing is logged at the moment
    LOG_INFO(Core, "Another log info");

    // Still nothing logged - the error message is on a different logger object
    LOG_CRITICAL(Core, "A critical error from different logger.");

    // The new backtrace is flushed again due to LOG_CRITICAL
    LOG_CRITICAL(Core, "A critical error from the logger we had a backtrace.");

    return 0;
}

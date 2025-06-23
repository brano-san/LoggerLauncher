#ifndef LOGGER_LAUNCHER_HPP
#define LOGGER_LAUNCHER_HPP

#include <GenEnum/src/GenEnum.h>
#include <logger/CategorizedLogger.hpp>

namespace logger {
GENENUM(uint8_t, CoreLauncherSource, Core, Test);
DEFINE_CAT_LOGGER_MODULE(CoreLauncher, CoreLauncherSources);
}  // namespace logger

// clang-format off
#define LOG_TRACE_L3(name, message, ...) CAT_LOG_TRACE_L3(CoreLauncher, CoreLauncherSources, name, message, ##__VA_ARGS__)
#define LOG_TRACE_L2(name, message, ...) CAT_LOG_TRACE_L2(CoreLauncher, CoreLauncherSources, name, message, ##__VA_ARGS__)
#define LOG_TRACE_L1(name, message, ...) CAT_LOG_TRACE_L1(CoreLauncher, CoreLauncherSources, name, message, ##__VA_ARGS__)
#define LOG_DEBUG(name, message, ...) CAT_LOG_DEBUG(CoreLauncher, CoreLauncherSources, name, message, ##__VA_ARGS__)
#define LOG_INFO(name, message, ...) CAT_LOG_INFO(CoreLauncher, CoreLauncherSources, name, message, ##__VA_ARGS__)
#define LOG_WARNING(name, message, ...) CAT_LOG_WARNING(CoreLauncher, CoreLauncherSources, name, message, ##__VA_ARGS__)
#define LOG_ERROR(name, message, ...) CAT_LOG_ERROR(CoreLauncher, CoreLauncherSources, name, message, ##__VA_ARGS__)
#define LOG_CRITICAL(name, message, ...) CAT_LOG_CRITICAL(CoreLauncher, CoreLauncherSources, name, message, ##__VA_ARGS__)
#define LOG_BACKTRACE(name, message, ...) CAT_LOG_BACKTRACE(CoreLauncher, CoreLauncherSources, name, message, ##__VA_ARGS__)

#define LOGV_TRACE_L3(name, message, ...) CAT_LOGV_TRACE_L3(CoreLauncher, CoreLauncherSources, name, message, ##__VA_ARGS__)
#define LOGV_TRACE_L2(name, message, ...) CAT_LOGV_TRACE_L2(CoreLauncher, CoreLauncherSources, name, message, ##__VA_ARGS__)
#define LOGV_TRACE_L1(name, message, ...) CAT_LOGV_TRACE_L1(CoreLauncher, CoreLauncherSources, name, message, ##__VA_ARGS__)
#define LOGV_DEBUG(name, message, ...) CAT_LOGV_DEBUG(CoreLauncher, CoreLauncherSources, name, message, ##__VA_ARGS__)
#define LOGV_INFO(name, message, ...) CAT_LOGV_INFO(CoreLauncher, CoreLauncherSources, name, message, ##__VA_ARGS__)
#define LOGV_WARNING(name, message, ...) CAT_LOGV_WARNING(CoreLauncher, CoreLauncherSources, name, message, ##__VA_ARGS__)
#define LOGV_ERROR(name, message, ...) CAT_LOGV_ERROR(CoreLauncher, CoreLauncherSources, name, message, ##__VA_ARGS__)
#define LOGV_CRITICAL(name, message, ...) CAT_LOGV_CRITICAL(CoreLauncher, CoreLauncherSources, name, message, ##__VA_ARGS__)
#define LOGV_BACKTRACE(name, message, ...) CAT_LOGV_BACKTRACE(CoreLauncher, CoreLauncherSources, name, message, ##__VA_ARGS__)

#define LOG_TRACE_L3_LIMIT_TIME(name, time, message, ...) CAT_LOG_TRACE_L3_LIMIT_TIME(CoreLauncher, CoreLauncherSources, name, time, message, ##__VA_ARGS__)
#define LOG_TRACE_L2_LIMIT_TIME(name, time, message, ...) CAT_LOG_TRACE_L2_LIMIT_TIME(CoreLauncher, CoreLauncherSources, name, time, message, ##__VA_ARGS__)
#define LOG_TRACE_L1_LIMIT_TIME(name, time, message, ...) CAT_LOG_TRACE_L1_LIMIT_TIME(CoreLauncher, CoreLauncherSources, name, time, message, ##__VA_ARGS__)
#define LOG_DEBUG_LIMIT_TIME(name, time, message, ...) CAT_LOG_DEBUG_LIMIT_TIME(CoreLauncher, CoreLauncherSources, name, time, message, ##__VA_ARGS__)
#define LOG_INFO_LIMIT_TIME(name, time, message, ...) CAT_LOG_INFO_LIMIT_TIME(CoreLauncher, CoreLauncherSources, name, time, message, ##__VA_ARGS__)
#define LOG_WARNING_LIMIT_TIME(name, time, message, ...) CAT_LOG_WARNING_LIMIT_TIME(CoreLauncher, CoreLauncherSources, name, time, message, ##__VA_ARGS__)
#define LOG_ERROR_LIMIT_TIME(name, time, message, ...) CAT_LOG_ERROR_LIMIT_TIME(CoreLauncher, CoreLauncherSources, name, time, message, ##__VA_ARGS__)
#define LOG_CRITICAL_LIMIT_TIME(name, time, message, ...) CAT_LOG_CRITICAL_LIMIT_TIME(CoreLauncher, CoreLauncherSources, name, time, message, ##__VA_ARGS__)

#define LOG_TRACE_L3_LIMIT_EVERY_N(name, count, message, ...) CAT_LOG_TRACE_L3_LIMIT_EVERY_N(CoreLauncher, CoreLauncherSources, name, count, message, ##__VA_ARGS__)
#define LOG_TRACE_L2_LIMIT_EVERY_N(name, count, message, ...) CAT_LOG_TRACE_L2_LIMIT_EVERY_N(CoreLauncher, CoreLauncherSources, name, count, message, ##__VA_ARGS__)
#define LOG_TRACE_L1_LIMIT_EVERY_N(name, count, message, ...) CAT_LOG_TRACE_L1_LIMIT_EVERY_N(CoreLauncher, CoreLauncherSources, name, count, message, ##__VA_ARGS__)
#define LOG_DEBUG_LIMIT_EVERY_N(name, count, message, ...) CAT_LOG_DEBUG_LIMIT_EVERY_N(CoreLauncher, CoreLauncherSources, name, count, message, ##__VA_ARGS__)
#define LOG_INFO_LIMIT_EVERY_N(name, count, message, ...) CAT_LOG_INFO_LIMIT_EVERY_N(CoreLauncher, CoreLauncherSources, name, count, message, ##__VA_ARGS__)
#define LOG_WARNING_LIMIT_EVERY_N(name, count, message, ...) CAT_LOG_WARNING_LIMIT_EVERY_N(CoreLauncher, CoreLauncherSources, name, count, message, ##__VA_ARGS__)
#define LOG_ERROR_LIMIT_EVERY_N(name, count, message, ...) CAT_LOG_ERROR_LIMIT_EVERY_N(CoreLauncher, CoreLauncherSources, name, count, message, ##__VA_ARGS__)
#define LOG_CRITICAL_LIMIT_EVERY_N(name, count, message, ...) CAT_LOG_CRITICAL_LIMIT_EVERY_N(CoreLauncher, CoreLauncherSources, name, count, message, ##__VA_ARGS__)
// clang-format on
#endif

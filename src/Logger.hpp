#ifndef LOGGER_LAUNCHER_HPP
#define LOGGER_LAUNCHER_HPP

#include <GenEnum/src/GenEnum.h>
#include <Logger/src/CategorizedLogger.hpp>

namespace logger {
GENENUM(uint8_t, CoreLauncherSource, Core, Test);
DEFINE_CAT_LOGGER_MODULE(CoreLauncher, CoreLauncherSources);
}  // namespace logger

#define LOG_TRACE_L3(name, message, ...) CAT_LOG_TRACE_L3(CoreLauncher, CoreLauncherSources, name, message, ##__VA_ARGS__)
#define LOG_TRACE_L2(name, message, ...) CAT_LOG_TRACE_L2(CoreLauncher, CoreLauncherSources, name, message, ##__VA_ARGS__)
#define LOG_TRACE_L1(name, message, ...) CAT_LOG_TRACE_L1(CoreLauncher, CoreLauncherSources, name, message, ##__VA_ARGS__)
#define LOG_DEBUG(name, message, ...) CAT_LOG_DEBUG(CoreLauncher, CoreLauncherSources, name, message, ##__VA_ARGS__)
#define LOG_INFO(name, message, ...) CAT_LOG_INFO(CoreLauncher, CoreLauncherSources, name, message, ##__VA_ARGS__)
#define LOG_WARNING(name, message, ...) CAT_LOG_WARNING(CoreLauncher, CoreLauncherSources, name, message, ##__VA_ARGS__)
#define LOG_ERROR(name, message, ...) CAT_LOG_ERROR(CoreLauncher, CoreLauncherSources, name, message, ##__VA_ARGS__)
#define LOG_CRITICAL(name, message, ...) CAT_LOG_CRITICAL(CoreLauncher, CoreLauncherSources, name, message, ##__VA_ARGS__)

#endif

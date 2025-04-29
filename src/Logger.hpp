#ifndef LOGGER_LAUNCHER_HPP
#define LOGGER_LAUNCHER_HPP

#include <Logger/src/CategorizedLogger.hpp>

#include <GenEnum/src/GenEnum.h>

namespace logger {
DEFINE_CAT_LOGGER_MODULE(CoreLauncher);
}  // namespace logger

#define LOG_TRACE_L3(name, message, ...) QUILL_LOG_TRACE_L3(GET_LOGGER(CoreLauncher, name), message, ##__VA_ARGS__)
#define LOG_TRACE_L2(name, message, ...) QUILL_LOG_TRACE_L2(GET_LOGGER(CoreLauncher, name), message, ##__VA_ARGS__)
#define LOG_TRACE_L1(name, message, ...) QUILL_LOG_TRACE_L1(GET_LOGGER(CoreLauncher, name), message, ##__VA_ARGS__)
#define LOG_DEBUG(name, message, ...) QUILL_LOG_DEBUG(GET_LOGGER(CoreLauncher, name), message, ##__VA_ARGS__)
#define LOG_INFO(name, message, ...) QUILL_LOG_INFO(GET_LOGGER(CoreLauncher, name), message, ##__VA_ARGS__)
#define LOG_WARNING(name, message, ...) QUILL_LOG_WARNING(GET_LOGGER(CoreLauncher, name), message, ##__VA_ARGS__)
#define LOG_ERROR(name, message, ...) QUILL_LOG_ERROR(GET_LOGGER(CoreLauncher, name), message, ##__VA_ARGS__)
#define LOG_CRITICAL(name, message, ...) QUILL_LOG_CRITICAL(GET_LOGGER(CoreLauncher, name), message, ##__VA_ARGS__)

#endif

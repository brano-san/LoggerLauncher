#pragma once

#include <GenEnum/src/GenEnum.hpp>
#include <logger/CategorizedLogger.hpp>

#define LOGGER_NAME CoreLauncher
#define LOGGER_CATEGORIES_SOURCES CoreLauncherSources

namespace logger {
GENENUM(uint8_t, CoreLauncherSource, Core, Test);
DEFINE_CAT_LOGGER_MODULE(CoreLauncher, CoreLauncherSources);
}  // namespace logger

// clang-format off
#define LOG_TRACE_L3(name, message, ...)  CAT_LOG_TRACE_L3(LOGGER_NAME, LOGGER_CATEGORIES_SOURCES, name, message, ##__VA_ARGS__)
#define LOG_TRACE_L2(name, message, ...)  CAT_LOG_TRACE_L2(LOGGER_NAME, LOGGER_CATEGORIES_SOURCES, name, message, ##__VA_ARGS__)
#define LOG_TRACE_L1(name, message, ...)  CAT_LOG_TRACE_L1(LOGGER_NAME, LOGGER_CATEGORIES_SOURCES, name, message, ##__VA_ARGS__)
#define LOG_DEBUG(name, message, ...)     CAT_LOG_DEBUG(LOGGER_NAME, LOGGER_CATEGORIES_SOURCES, name, message, ##__VA_ARGS__)
#define LOG_INFO(name, message, ...)      CAT_LOG_INFO(LOGGER_NAME, LOGGER_CATEGORIES_SOURCES, name, message, ##__VA_ARGS__)
#define LOG_WARNING(name, message, ...)   CAT_LOG_WARNING(LOGGER_NAME, LOGGER_CATEGORIES_SOURCES, name, message, ##__VA_ARGS__)
#define LOG_ERROR(name, message, ...)     CAT_LOG_ERROR(LOGGER_NAME, LOGGER_CATEGORIES_SOURCES, name, message, ##__VA_ARGS__)
#define LOG_CRITICAL(name, message, ...)  CAT_LOG_CRITICAL(LOGGER_NAME, LOGGER_CATEGORIES_SOURCES, name, message, ##__VA_ARGS__)
#define LOG_BACKTRACE(name, message, ...) CAT_LOG_BACKTRACE(LOGGER_NAME, LOGGER_CATEGORIES_SOURCES, name, message, ##__VA_ARGS__)

#define LOGV_TRACE_L3(name, message, ...)  CAT_LOGV_TRACE_L3(LOGGER_NAME, LOGGER_CATEGORIES_SOURCES, name, message, ##__VA_ARGS__)
#define LOGV_TRACE_L2(name, message, ...)  CAT_LOGV_TRACE_L2(LOGGER_NAME, LOGGER_CATEGORIES_SOURCES, name, message, ##__VA_ARGS__)
#define LOGV_TRACE_L1(name, message, ...)  CAT_LOGV_TRACE_L1(LOGGER_NAME, LOGGER_CATEGORIES_SOURCES, name, message, ##__VA_ARGS__)
#define LOGV_DEBUG(name, message, ...)     CAT_LOGV_DEBUG(LOGGER_NAME, LOGGER_CATEGORIES_SOURCES, name, message, ##__VA_ARGS__)
#define LOGV_INFO(name, message, ...)      CAT_LOGV_INFO(LOGGER_NAME, LOGGER_CATEGORIES_SOURCES, name, message, ##__VA_ARGS__)
#define LOGV_WARNING(name, message, ...)   CAT_LOGV_WARNING(LOGGER_NAME, LOGGER_CATEGORIES_SOURCES, name, message, ##__VA_ARGS__)
#define LOGV_ERROR(name, message, ...)     CAT_LOGV_ERROR(LOGGER_NAME, LOGGER_CATEGORIES_SOURCES, name, message, ##__VA_ARGS__)
#define LOGV_CRITICAL(name, message, ...)  CAT_LOGV_CRITICAL(LOGGER_NAME, LOGGER_CATEGORIES_SOURCES, name, message, ##__VA_ARGS__)
#define LOGV_BACKTRACE(name, message, ...) CAT_LOGV_BACKTRACE(LOGGER_NAME, LOGGER_CATEGORIES_SOURCES, name, message, ##__VA_ARGS__)

#define LOG_TRACE_L3_LIMIT_TIME(name, time, message, ...) CAT_LOG_TRACE_L3_LIMIT_TIME(LOGGER_NAME, LOGGER_CATEGORIES_SOURCES, name, time, message, ##__VA_ARGS__)
#define LOG_TRACE_L2_LIMIT_TIME(name, time, message, ...) CAT_LOG_TRACE_L2_LIMIT_TIME(LOGGER_NAME, LOGGER_CATEGORIES_SOURCES, name, time, message, ##__VA_ARGS__)
#define LOG_TRACE_L1_LIMIT_TIME(name, time, message, ...) CAT_LOG_TRACE_L1_LIMIT_TIME(LOGGER_NAME, LOGGER_CATEGORIES_SOURCES, name, time, message, ##__VA_ARGS__)
#define LOG_DEBUG_LIMIT_TIME(name, time, message, ...)    CAT_LOG_DEBUG_LIMIT_TIME(LOGGER_NAME, LOGGER_CATEGORIES_SOURCES, name, time, message, ##__VA_ARGS__)
#define LOG_INFO_LIMIT_TIME(name, time, message, ...)     CAT_LOG_INFO_LIMIT_TIME(LOGGER_NAME, LOGGER_CATEGORIES_SOURCES, name, time, message, ##__VA_ARGS__)
#define LOG_WARNING_LIMIT_TIME(name, time, message, ...)  CAT_LOG_WARNING_LIMIT_TIME(LOGGER_NAME, LOGGER_CATEGORIES_SOURCES, name, time, message, ##__VA_ARGS__)
#define LOG_ERROR_LIMIT_TIME(name, time, message, ...)    CAT_LOG_ERROR_LIMIT_TIME(LOGGER_NAME, LOGGER_CATEGORIES_SOURCES, name, time, message, ##__VA_ARGS__)
#define LOG_CRITICAL_LIMIT_TIME(name, time, message, ...) CAT_LOG_CRITICAL_LIMIT_TIME(LOGGER_NAME, LOGGER_CATEGORIES_SOURCES, name, time, message, ##__VA_ARGS__)

#define LOG_TRACE_L3_LIMIT_EVERY_N(name, count, message, ...) CAT_LOG_TRACE_L3_LIMIT_EVERY_N(LOGGER_NAME, LOGGER_CATEGORIES_SOURCES, name, count, message, ##__VA_ARGS__)
#define LOG_TRACE_L2_LIMIT_EVERY_N(name, count, message, ...) CAT_LOG_TRACE_L2_LIMIT_EVERY_N(LOGGER_NAME, LOGGER_CATEGORIES_SOURCES, name, count, message, ##__VA_ARGS__)
#define LOG_TRACE_L1_LIMIT_EVERY_N(name, count, message, ...) CAT_LOG_TRACE_L1_LIMIT_EVERY_N(LOGGER_NAME, LOGGER_CATEGORIES_SOURCES, name, count, message, ##__VA_ARGS__)
#define LOG_DEBUG_LIMIT_EVERY_N(name, count, message, ...)    CAT_LOG_DEBUG_LIMIT_EVERY_N(LOGGER_NAME, LOGGER_CATEGORIES_SOURCES, name, count, message, ##__VA_ARGS__)
#define LOG_INFO_LIMIT_EVERY_N(name, count, message, ...)     CAT_LOG_INFO_LIMIT_EVERY_N(LOGGER_NAME, LOGGER_CATEGORIES_SOURCES, name, count, message, ##__VA_ARGS__)
#define LOG_WARNING_LIMIT_EVERY_N(name, count, message, ...)  CAT_LOG_WARNING_LIMIT_EVERY_N(LOGGER_NAME, LOGGER_CATEGORIES_SOURCES, name, count, message, ##__VA_ARGS__)
#define LOG_ERROR_LIMIT_EVERY_N(name, count, message, ...)    CAT_LOG_ERROR_LIMIT_EVERY_N(LOGGER_NAME, LOGGER_CATEGORIES_SOURCES, name, count, message, ##__VA_ARGS__)
#define LOG_CRITICAL_LIMIT_EVERY_N(name, count, message, ...) CAT_LOG_CRITICAL_LIMIT_EVERY_N(LOGGER_NAME, LOGGER_CATEGORIES_SOURCES, name, count, message, ##__VA_ARGS__)
// clang-format on

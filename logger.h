#ifndef LOGGER_H
#define LOGGER_H
#include <stdio.h>

enum LL_LogLevel {
  LL_Fatal,
  LL_Critical,
  LL_Error,
  LL_Warn,
  LL_Info,
  LL_Debug
}; 

char* LL_to_s(int ll);

// https://gcc.gnu.org/onlinedocs/cpp/Variadic-Macros.html
// the ##__VA_ARGS__ macros bit is important!
#define LL(level, format_string, ...) {\
  printf("[%-8s]: " format_string "\n", LL_to_s(level), ##__VA_ARGS__);\
}

#ifdef LL_IMPL
char* LL_to_s(int ll) {
  switch(ll)
  {
    case LL_Fatal:    return "FATAL";
    case LL_Critical: return "CRITICAL";
    case LL_Error:    return "ERROR";
    case LL_Warn:     return "WARN";
    case LL_Info:     return "INFO";
    case LL_Debug:    return "DEBUG";
    default:          return "????";
  }
}
#endif

#endif

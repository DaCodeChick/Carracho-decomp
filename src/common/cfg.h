#pragma once

#ifdef _WIN32
#define CAAPI __declspec(dllexport)
#else
#define CAAPI __attribute__((visibility("default")))
#endif

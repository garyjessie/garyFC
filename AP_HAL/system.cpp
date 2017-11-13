#include <stdarg.h>
#include <stdio.h>

//#include "drv_hrt.h"

#include "system.h"


namespace AP_HAL {

void init()
{
}

uint32_t micros()
{
    return micros64() & 0xFFFFFFFF;
}

uint32_t millis()
{
    return millis64() & 0xFFFFFFFF;
}

uint64_t micros64()
{
    //return hrt_absolute_time();
	return 0xFFFFF;
}

uint64_t millis64()
{
    return micros64() / 1000;
}

} // namespace AP_HAL

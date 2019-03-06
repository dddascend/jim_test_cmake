#include <stdio.h>
#include "debugger.h"
#include "debugger_error.h"
#include "upgrade_api.h"
#include "upgrade_log.h"

int main()
{
printf("hello dji_flight\n");
flight_debugger();
flight_debugger_error();
upgrade_log();
upgrade_api();
init_upgrade();
return 0;
}

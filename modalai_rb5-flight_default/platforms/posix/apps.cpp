/* definitions of builtin command list - automatically generated, do not edit */
#include <px4_platform_common/time.h>
#include <px4_platform_common/posix.h>
#include <px4_platform_common/log.h>

#include "apps.h"

#include <cstdio>
#include <map>
#include <string>

#include <cstdlib>

#define MODULE_NAME "px4"

extern "C" {

int uorb_main(int argc, char *argv[]);
int gps_main(int argc, char *argv[]);
int px4io_main(int argc, char *argv[]);
int qshell_main(int argc, char *argv[]);
int imu_server_main(int argc, char *argv[]);
int mavlink_bridge_main(int argc, char *argv[]);
int spektrum_rc_main(int argc, char *argv[]);
int commander_main(int argc, char *argv[]);
int dataman_main(int argc, char *argv[]);
int modalai_gps_timer_main(int argc, char *argv[]);
int flight_mode_manager_main(int argc, char *argv[]);
int logger_main(int argc, char *argv[]);
int mavlink_main(int argc, char *argv[]);
int msp_osd_main(int argc, char *argv[]);
int muorb_main(int argc, char *argv[]);
int navigator_main(int argc, char *argv[]);
int rc_update_main(int argc, char *argv[]);
int simulator_main(int argc, char *argv[]);
int battery_simulator_main(int argc, char *argv[]);
int led_control_main(int argc, char *argv[]);
int mixer_main(int argc, char *argv[]);
int motor_ramp_main(int argc, char *argv[]);
int motor_test_main(int argc, char *argv[]);
int param_main(int argc, char *argv[]);
int perf_main(int argc, char *argv[]);
int reboot_main(int argc, char *argv[]);
int sd_bench_main(int argc, char *argv[]);
int shutdown_main(int argc, char *argv[]);
int listener_main(int argc, char *argv[]);
int tune_control_main(int argc, char *argv[]);
int ver_main(int argc, char *argv[]);
int work_queue_main(int argc, char *argv[]);

int shutdown_main(int argc, char *argv[]);
int list_tasks_main(int argc, char *argv[]);
int list_files_main(int argc, char *argv[]);
int sleep_main(int argc, char *argv[]);

}

void init_app_map(apps_map_type &apps)
{
		apps["uorb"] = uorb_main;
	apps["gps"] = gps_main;
	apps["px4io"] = px4io_main;
	apps["qshell"] = qshell_main;
	apps["imu_server"] = imu_server_main;
	apps["mavlink_bridge"] = mavlink_bridge_main;
	apps["spektrum_rc"] = spektrum_rc_main;
	apps["commander"] = commander_main;
	apps["dataman"] = dataman_main;
	apps["modalai_gps_timer"] = modalai_gps_timer_main;
	apps["flight_mode_manager"] = flight_mode_manager_main;
	apps["logger"] = logger_main;
	apps["mavlink"] = mavlink_main;
	apps["msp_osd"] = msp_osd_main;
	apps["muorb"] = muorb_main;
	apps["navigator"] = navigator_main;
	apps["rc_update"] = rc_update_main;
	apps["simulator"] = simulator_main;
	apps["battery_simulator"] = battery_simulator_main;
	apps["led_control"] = led_control_main;
	apps["mixer"] = mixer_main;
	apps["motor_ramp"] = motor_ramp_main;
	apps["motor_test"] = motor_test_main;
	apps["param"] = param_main;
	apps["perf"] = perf_main;
	apps["reboot"] = reboot_main;
	apps["sd_bench"] = sd_bench_main;
	apps["shutdown"] = shutdown_main;
	apps["listener"] = listener_main;
	apps["tune_control"] = tune_control_main;
	apps["ver"] = ver_main;
	apps["work_queue"] = work_queue_main;

	apps["shutdown"] = shutdown_main;
	apps["list_tasks"] = list_tasks_main;
	apps["list_files"] = list_files_main;
	apps["sleep"] = sleep_main;
}

void list_builtins(apps_map_type &apps)
{
	printf("Builtin Commands:\n");
	for (apps_map_type::iterator it = apps.begin(); it != apps.end(); ++it) {
		printf("  %s\n", it->first.c_str());
	}
}

int shutdown_main(int argc, char *argv[])
{
	printf("Exiting NOW.\n");
	system_exit(0);
}

int list_tasks_main(int argc, char *argv[])
{
	px4_show_tasks();
	return 0;
}

int list_files_main(int argc, char *argv[])
{
	px4_show_files();
	return 0;
}

int sleep_main(int argc, char *argv[])
{
        if (argc != 2) {
           PX4_WARN( "Usage: sleep <seconds>" );
           return 1;
        }

        unsigned long usecs = 1000000UL * atol(argv[1]);
        printf("Sleeping for %s s; (%lu us).\n", argv[1], usecs);
        px4_usleep(usecs);
        return 0;
}

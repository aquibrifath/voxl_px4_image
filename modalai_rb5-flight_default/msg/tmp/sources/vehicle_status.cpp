/****************************************************************************
 *
 *   Copyright (C) 2013-2016 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/* Auto-generated by genmsg_cpp from file vehicle_status.msg */


#include <inttypes.h>
#include <px4_platform_common/log.h>
#include <px4_platform_common/defines.h>
#include <uORB/topics/vehicle_status.h>
#include <uORB/topics/uORBTopics.hpp>
#include <drivers/drv_hrt.h>
#include <lib/drivers/device/Device.hpp>
#include <lib/matrix/matrix/math.hpp>
#include <lib/mathlib/mathlib.h>

constexpr char __orb_vehicle_status_fields[] = "uint64_t timestamp;uint64_t nav_state_timestamp;uint64_t armed_time;uint64_t takeoff_time;uint32_t onboard_control_sensors_present;uint32_t onboard_control_sensors_enabled;uint32_t onboard_control_sensors_health;uint8_t nav_state;uint8_t arming_state;uint8_t hil_state;bool failsafe;uint8_t system_type;uint8_t system_id;uint8_t component_id;uint8_t vehicle_type;bool is_vtol;bool is_vtol_tailsitter;bool vtol_fw_permanent_stab;bool in_transition_mode;bool in_transition_to_fw;bool rc_signal_lost;uint8_t rc_input_mode;bool data_link_lost;uint8_t data_link_lost_counter;bool high_latency_data_link_lost;bool engine_failure;bool mission_failure;uint8_t failure_detector_status;uint8_t latest_arming_reason;uint8_t latest_disarming_reason;uint8_t[5] _padding0;";

ORB_DEFINE(vehicle_status, struct vehicle_status_s, 67, __orb_vehicle_status_fields, static_cast<uint8_t>(ORB_ID::vehicle_status));


void print_message(const vehicle_status_s &message)
{

	PX4_INFO_RAW(" vehicle_status_s\n");

	const hrt_abstime now = hrt_absolute_time();

	if (message.timestamp != 0) {
		PX4_INFO_RAW("\ttimestamp: %" PRIu64 "  (%.6f seconds ago)\n", message.timestamp, (now - message.timestamp) / 1e6);
	} else {
		PX4_INFO_RAW("\n");
	}
	PX4_INFO_RAW("\tnav_state_timestamp: %" PRIu64 "\n", message.nav_state_timestamp);
	PX4_INFO_RAW("\tarmed_time: %" PRIu64 "\n", message.armed_time);
	PX4_INFO_RAW("\ttakeoff_time: %" PRIu64 "\n", message.takeoff_time);
	PX4_INFO_RAW("\tonboard_control_sensors_present: %" PRIu32 "\n", message.onboard_control_sensors_present);
	PX4_INFO_RAW("\tonboard_control_sensors_enabled: %" PRIu32 "\n", message.onboard_control_sensors_enabled);
	PX4_INFO_RAW("\tonboard_control_sensors_health: %" PRIu32 "\n", message.onboard_control_sensors_health);
	PX4_INFO_RAW("\tnav_state: %u\n", message.nav_state);
	PX4_INFO_RAW("\tarming_state: %u\n", message.arming_state);
	PX4_INFO_RAW("\thil_state: %u\n", message.hil_state);
	PX4_INFO_RAW("\tfailsafe: %s\n", (message.failsafe ? "True" : "False"));
	PX4_INFO_RAW("\tsystem_type: %u\n", message.system_type);
	PX4_INFO_RAW("\tsystem_id: %u\n", message.system_id);
	PX4_INFO_RAW("\tcomponent_id: %u\n", message.component_id);
	PX4_INFO_RAW("\tvehicle_type: %u\n", message.vehicle_type);
	PX4_INFO_RAW("\tis_vtol: %s\n", (message.is_vtol ? "True" : "False"));
	PX4_INFO_RAW("\tis_vtol_tailsitter: %s\n", (message.is_vtol_tailsitter ? "True" : "False"));
	PX4_INFO_RAW("\tvtol_fw_permanent_stab: %s\n", (message.vtol_fw_permanent_stab ? "True" : "False"));
	PX4_INFO_RAW("\tin_transition_mode: %s\n", (message.in_transition_mode ? "True" : "False"));
	PX4_INFO_RAW("\tin_transition_to_fw: %s\n", (message.in_transition_to_fw ? "True" : "False"));
	PX4_INFO_RAW("\trc_signal_lost: %s\n", (message.rc_signal_lost ? "True" : "False"));
	PX4_INFO_RAW("\trc_input_mode: %u\n", message.rc_input_mode);
	PX4_INFO_RAW("\tdata_link_lost: %s\n", (message.data_link_lost ? "True" : "False"));
	PX4_INFO_RAW("\tdata_link_lost_counter: %u\n", message.data_link_lost_counter);
	PX4_INFO_RAW("\thigh_latency_data_link_lost: %s\n", (message.high_latency_data_link_lost ? "True" : "False"));
	PX4_INFO_RAW("\tengine_failure: %s\n", (message.engine_failure ? "True" : "False"));
	PX4_INFO_RAW("\tmission_failure: %s\n", (message.mission_failure ? "True" : "False"));
	PX4_INFO_RAW("\tfailure_detector_status: %u\n", message.failure_detector_status);
	PX4_INFO_RAW("\tlatest_arming_reason: %u\n", message.latest_arming_reason);
	PX4_INFO_RAW("\tlatest_disarming_reason: %u\n", message.latest_disarming_reason);
	
}

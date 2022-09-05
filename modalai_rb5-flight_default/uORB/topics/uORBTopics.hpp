/****************************************************************************
 *
 *   Copyright (C) 2020 PX4 Development Team. All rights reserved.
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


#pragma once

#include <stddef.h>

#include <uORB/uORB.h>

static constexpr size_t ORB_TOPICS_COUNT{184};
static constexpr size_t orb_topics_count() { return ORB_TOPICS_COUNT; }

/*
 * Returns array of topics metadata
 */
extern const struct orb_metadata *const *orb_get_topics() __EXPORT;

enum class ORB_ID : uint8_t {
	actuator_armed = 0,
	actuator_controls = 1,
	actuator_controls_0 = 2,
	actuator_controls_1 = 3,
	actuator_controls_2 = 4,
	actuator_controls_3 = 5,
	actuator_controls_4 = 6,
	actuator_controls_5 = 7,
	actuator_controls_virtual_fw = 8,
	actuator_controls_virtual_mc = 9,
	actuator_outputs = 10,
	adc_report = 11,
	airspeed = 12,
	airspeed_validated = 13,
	battery_status = 14,
	camera_capture = 15,
	camera_trigger = 16,
	camera_trigger_secondary = 17,
	cellular_status = 18,
	collision_constraints = 19,
	collision_report = 20,
	commander_state = 21,
	control_allocator_status = 22,
	cpuload = 23,
	debug_array = 24,
	debug_key_value = 25,
	debug_value = 26,
	debug_vect = 27,
	differential_pressure = 28,
	distance_sensor = 29,
	ekf2_timestamps = 30,
	ekf_gps_drift = 31,
	esc_report = 32,
	esc_status = 33,
	estimator_attitude = 34,
	estimator_global_position = 35,
	estimator_innovation_test_ratios = 36,
	estimator_innovation_variances = 37,
	estimator_innovations = 38,
	estimator_local_position = 39,
	estimator_odometry = 40,
	estimator_optical_flow_vel = 41,
	estimator_selector_status = 42,
	estimator_sensor_bias = 43,
	estimator_states = 44,
	estimator_status = 45,
	estimator_status_flags = 46,
	estimator_visual_odometry_aligned = 47,
	follow_target = 48,
	fw_virtual_attitude_setpoint = 49,
	generator_status = 50,
	geofence_result = 51,
	gps_dump = 52,
	gps_inject_data = 53,
	home_position = 54,
	hover_thrust_estimate = 55,
	imu_server = 56,
	input_rc = 57,
	iridiumsbd_status = 58,
	irlock_report = 59,
	landing_gear = 60,
	landing_target_innovations = 61,
	landing_target_pose = 62,
	led_control = 63,
	log_message = 64,
	logger_status = 65,
	mag_worker_data = 66,
	manual_control_setpoint = 67,
	manual_control_switches = 68,
	mavlink_log = 69,
	mavlink_msg = 70,
	mavlink_rx_msg = 71,
	mavlink_tx_msg = 72,
	mc_virtual_attitude_setpoint = 73,
	mission = 74,
	mission_result = 75,
	mount_orientation = 76,
	multirotor_motor_limits = 77,
	navigator_mission_item = 78,
	obstacle_distance = 79,
	obstacle_distance_fused = 80,
	offboard_control_mode = 81,
	onboard_computer_status = 82,
	optical_flow = 83,
	orbit_status = 84,
	parameter_client_reset_request = 85,
	parameter_client_reset_response = 86,
	parameter_client_set_value_request = 87,
	parameter_client_set_value_response = 88,
	parameter_server_set_used_request = 89,
	parameter_server_set_used_response = 90,
	parameter_server_set_value_request = 91,
	parameter_server_set_value_response = 92,
	parameter_update = 93,
	ping = 94,
	position_controller_landing_status = 95,
	position_controller_status = 96,
	position_setpoint = 97,
	position_setpoint_triplet = 98,
	power_button_state = 99,
	power_monitor = 100,
	pwm_input = 101,
	px4io_status = 102,
	qshell_req = 103,
	qshell_retval = 104,
	radio_status = 105,
	rate_ctrl_status = 106,
	rc_channels = 107,
	rc_parameter_map = 108,
	rpm = 109,
	rtl_flight_time = 110,
	safety = 111,
	satellite_info = 112,
	sensor_accel = 113,
	sensor_accel_fifo = 114,
	sensor_baro = 115,
	sensor_combined = 116,
	sensor_correction = 117,
	sensor_gps = 118,
	sensor_gyro = 119,
	sensor_gyro_fft = 120,
	sensor_gyro_fifo = 121,
	sensor_mag = 122,
	sensor_preflight_mag = 123,
	sensor_selection = 124,
	sensors_status_imu = 125,
	system_power = 126,
	takeoff_status = 127,
	task_stack_info = 128,
	tecs_status = 129,
	telemetry_status = 130,
	test_motor = 131,
	timesync = 132,
	timesync_status = 133,
	trajectory_bezier = 134,
	trajectory_setpoint = 135,
	trajectory_waypoint = 136,
	transponder_report = 137,
	tune_control = 138,
	uavcan_parameter_request = 139,
	uavcan_parameter_value = 140,
	ulog_stream = 141,
	ulog_stream_ack = 142,
	vehicle_acceleration = 143,
	vehicle_actuator_setpoint = 144,
	vehicle_air_data = 145,
	vehicle_angular_acceleration = 146,
	vehicle_angular_acceleration_setpoint = 147,
	vehicle_angular_velocity = 148,
	vehicle_angular_velocity_groundtruth = 149,
	vehicle_attitude = 150,
	vehicle_attitude_groundtruth = 151,
	vehicle_attitude_setpoint = 152,
	vehicle_command = 153,
	vehicle_command_ack = 154,
	vehicle_constraints = 155,
	vehicle_control_mode = 156,
	vehicle_global_position = 157,
	vehicle_global_position_groundtruth = 158,
	vehicle_gps_position = 159,
	vehicle_imu = 160,
	vehicle_imu_status = 161,
	vehicle_land_detected = 162,
	vehicle_local_position = 163,
	vehicle_local_position_groundtruth = 164,
	vehicle_local_position_setpoint = 165,
	vehicle_magnetometer = 166,
	vehicle_mocap_odometry = 167,
	vehicle_odometry = 168,
	vehicle_rates_setpoint = 169,
	vehicle_roi = 170,
	vehicle_status = 171,
	vehicle_status_flags = 172,
	vehicle_thrust_setpoint = 173,
	vehicle_torque_setpoint = 174,
	vehicle_trajectory_bezier = 175,
	vehicle_trajectory_waypoint = 176,
	vehicle_trajectory_waypoint_desired = 177,
	vehicle_vision_attitude = 178,
	vehicle_visual_odometry = 179,
	vtol_vehicle_status = 180,
	wheel_encoders = 181,
	wind_estimate = 182,
	yaw_estimator_status = 183,

	INVALID
};

const struct orb_metadata *get_orb_meta(ORB_ID id);

#!/bin/sh

# File is auto-generated by cmake compilation, do not edit.
R="`pwd`/"

# Map the NuttX-style variable definition 'set <var> <value>' to something that
# bash and alternatives understand
# define _set first because sh (POSIX shell) does not like overwriting set directly
_set() {
	eval $1=\"$2\"
}
alias set=_set

# Don't stop on errors.
#set -e

# Arguments passed to this script:
# $1: optional instance id
px4_instance=0
[ -n "$1" ] && px4_instance=$1

alias uorb='px4-uorb --instance $px4_instance'
alias gps='px4-gps --instance $px4_instance'
alias px4io='px4-px4io --instance $px4_instance'
alias qshell='px4-qshell --instance $px4_instance'
alias imu_server='px4-imu_server --instance $px4_instance'
alias mavlink_bridge='px4-mavlink_bridge --instance $px4_instance'
alias spektrum_rc='px4-spektrum_rc --instance $px4_instance'
alias commander='px4-commander --instance $px4_instance'
alias dataman='px4-dataman --instance $px4_instance'
alias modalai_gps_timer='px4-modalai_gps_timer --instance $px4_instance'
alias flight_mode_manager='px4-flight_mode_manager --instance $px4_instance'
alias logger='px4-logger --instance $px4_instance'
alias mavlink='px4-mavlink --instance $px4_instance'
alias msp_osd='px4-msp_osd --instance $px4_instance'
alias muorb='px4-muorb --instance $px4_instance'
alias navigator='px4-navigator --instance $px4_instance'
alias rc_update='px4-rc_update --instance $px4_instance'
alias simulator='px4-simulator --instance $px4_instance'
alias battery_simulator='px4-battery_simulator --instance $px4_instance'
alias led_control='px4-led_control --instance $px4_instance'
alias mixer='px4-mixer --instance $px4_instance'
alias motor_ramp='px4-motor_ramp --instance $px4_instance'
alias motor_test='px4-motor_test --instance $px4_instance'
alias param='px4-param --instance $px4_instance'
alias perf='px4-perf --instance $px4_instance'
alias reboot='px4-reboot --instance $px4_instance'
alias sd_bench='px4-sd_bench --instance $px4_instance'
alias shutdown='px4-shutdown --instance $px4_instance'
alias listener='px4-listener --instance $px4_instance'
alias tune_control='px4-tune_control --instance $px4_instance'
alias ver='px4-ver --instance $px4_instance'
alias work_queue='px4-work_queue --instance $px4_instance'


#!/bin/bash


sudo su - root <<HERE

/home/jmrobert/Bureau/turbo-boost.sh disable

/bin/echo "-1" > /proc/sys/kernel/perf_event_paranoid
echo 2 | dd of=/sys/devices/cpu/rdpmc
echo 2 | dd of=/sys/bus/event_source/devices/cpu/rdpmc
wrmsr -a 0x38d 0x0333
HERE

echo fin

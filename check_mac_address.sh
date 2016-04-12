#!/bin/bash

MAC_ETH=$(ifconfig | grep eth | grep -i hwaddr)		# extract line that contains "eth" and "hwaddr" from ifconfig
if [ -n "$VAR" ]; then								# if variable not empty
	MAC_ETH=${MAC_ETH##*HWaddr}						# extract mac address to variable
fi

MAC_WLAN=$(ifconfig | grep wlan | grep -i hwaddr)	# extract line that contains "eth" and "hwaddr" from ifconfig
if [ -n "$VAR" ]; then								# if variable not empty
	MAC_WLAN=${MAC_WLAN##*HWaddr}					# extract mac address to variable
fi

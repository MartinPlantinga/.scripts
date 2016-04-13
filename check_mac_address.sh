#!/bin/bash

# This script checks if the Edrive has been inserted into another computer by checking if the MAC address of the wifi card has changed
# If the Edrive has been inserted into another computer:
# 1. the Matlab license is removed
# 2. WIFI and VPN connections are removed

filepath="/home/ebox/.scripts/mac_verification"


MAC_ETH=$(ifconfig | grep eth | grep -i hwaddr)		# extract line that contains "eth" and "hwaddr" from ifconfig
if [ -n "$VAR" ]; then								# if variable not empty
	MAC_ETH=${MAC_ETH##*HWaddr}						# extract mac address to variable
fi

MAC_WLAN=$(ifconfig | grep wlan | grep -i hwaddr)	# extract line that contains "eth" and "hwaddr" from ifconfig
if [ -n "$VAR" ]; then								# if variable not empty
	MAC_WLAN=${MAC_WLAN##*HWaddr}					# extract mac address to variable
fi

if [ ! -f $filepath/mac_address]; then				# check if file exists 
	touch $filepath/mac_address						# if non-existing add file
else
	OLD_MAC_WLAN=$(<$filepath/mac_address)			# read old mac address into variable

	if [ $MAC_WLAN != OLD_MAC_WLAN]; then
		rm /home/ebox/MATLAB/R2015b/licenses/*.lic 	# rm license, possible path1
		rm /root/.matlab/R2015b_licenses/*.lic 		# rm license, possible path2
		rm /etc/NetworkManager/system-connections/*	# rm all wifi and VPN connections
	fi
fi

exit 0
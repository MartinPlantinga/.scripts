#!/bin/bash

# This script checks if the Edrive has been inserted into another computer by checking if the MAC address of the wifi card has changed
# If the Edrive has been inserted into another computer:
# 1. the Matlab license is removed
# 2. WIFI and VPN connections are removed

# LOG
# M. Plantinga (12 April 2016): 	file creation


filepath="/home/ebox/.scripts/mac_verification"


MAC_ETH=$(ifconfig | grep eth | grep -i hwaddr)		# extract line that contains "eth" and "hwaddr" from ifconfig
if [ -n "$MAC_ETH" ]; then								# if variable not empty
	MAC_ETH=${MAC_ETH##*HWaddr}						# extract mac address to variable
fi

MAC_WLAN=$(ifconfig | grep wlan | grep -i hwaddr)	# extract line that contains "eth" and "hwaddr" from ifconfig
if [ -n "$MAC_WLAN" ]; then								# if variable not empty
	MAC_WLAN=${MAC_WLAN##*HWaddr}					# extract mac address to variable
fi

if [ ! -f $filepath/mac_address ]; then				# check if file exists 
	touch $filepath/mac_address				# if non-existing add file
	echo $MAC_WLAN > $filepath/mac_address			# store mac address in mac_address file
else
	OLD_MAC_WLAN=$(<$filepath/mac_address)			# read old mac address into variable

	if [ $MAC_WLAN != $OLD_MAC_WLAN ]; then
		rm /root/.matlab/R2015b_licenses/*.lic 		# rm license, possible path2
		rm /etc/NetworkManager/system-connections/*	# rm all wifi and VPN connections
		rm /home/ebox/MATLAB/R2015b/licenses/*.lic 	# rm license, possible path1
		echo $MAC_WLAN > $filepath/mac_address			# store mac address in mac_address file

	fi
fi

# log
if [ ! -f $filepath/log.txt ]; then				# check if file exists 
	touch $filepath/log.txt						# if non-existing add file
fi
echo "$(date) $MAC_WLAN" >> $filepath/log.txt

exit 0

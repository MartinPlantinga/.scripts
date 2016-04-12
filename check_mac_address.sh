#!/bin/bash

MAC_ETH=$(ifconfig | grep eth | grep -i hwaddr)		# extract line that contains "eth" and "hwaddr" from ifconfig
if [ -n "$VAR" ]; then								# if variable not empty
	MAC_ETH=${MAC_ETH##*HWaddr}						# extract mac address to variable
fi

MAC_WLAN=$(ifconfig | grep wlan | grep -i hwaddr)	# extract line that contains "eth" and "hwaddr" from ifconfig
if [ -n "$VAR" ]; then								# if variable not empty
	MAC_WLAN=${MAC_WLAN##*HWaddr}					# extract mac address to variable
fi


filepath="/home/ebox"								# determine path

if [ ! -f $filepath/.mac_address]; then				# check if file exists 
	touch $filepath/.mac_address					# if non-existing add file
else
	OLD_MAC_WLAN=$(<$filepath/.mac_address)			# read old mac address into file

	if [ $MAC_WLAN != OLD_MAC_WLAN]; then
		rm /home/ebox/MATLAB/R2015b/licenses/*.lic 	# change this
	fi
fi


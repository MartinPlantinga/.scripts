#!/bin/bash

MAC_ETH=$(ifconfig | grep eth | grep -i hwaddr)
if [ -n "$VAR" ]; then
	MAC_ETH=${MAC_ETH##*HWaddr}
fi

MAC_WLAN=$(ifconfig | grep wlan | grep -i hwaddr)
if [ -n "$VAR" ]; then
	MAC_WLAN=${MAC_WLAN##*HWaddr}
fi

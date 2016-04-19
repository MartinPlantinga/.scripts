#!/bin/bash

# This script runs the startup scripts to:
# 1. check if Edrive has been inserted into another computer
# 2. check if ethernet port number is correct.


# LOG
# M. Plantinga (13 April 2016): 	script creation

filepath='/home/ebox/.scripts/eth_port'						# obtaining eth name and mac address

LAST_STATUS=$(tail -1 $filepath/log.txt)					#extract last line
LAST_STATUS=${LAST_STATUS##*eth}							#extract last status
LAST_STATUS=$(echo $LAST_STATUS | cut -c3-40)				#remove first 2 characters

if [ $LAST_STATUS == "changed" ]; then
	echo
	echo "YOU HAVE TO REBOOT YOUR COMPUTER BEFORE RUNNING MATLAB"
	echo
else
	echo
	echo "You can proceed to run Matlab by typing:"
	echo "sudo su"
	echo "matlab"
	echo
fi

exit 0

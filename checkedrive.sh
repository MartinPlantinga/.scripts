#!/bin/bash

# This script runs the startup scripts to:
# 1. check if Edrive has been inserted into another computer
# 2. check if ethernet port number is correct.


# LOG
# M. Plantinga (13 April 2016): 	script creation

filepath='/home/ebox/.scripts/eth_port'						# obtaining eth name and mac address

LAST_STATUS=$(tail filepath/log.txt -1)						#extract last line
LAST_STATUS=${LAST_STATUS##*eth}							#extract last status
LAST_STATUS=$(echo $LAST_STATUS | cut -c3-40)				#remove first 2 characters

if [ $last_status != "changed"]; then
	echo
	echo "YOU HAVE TO REBOOT YOUR COMPUTER BEFORE RUNNING MATLAB"
	echo
else
	echo
	echo "You can continue to run Matlab by typing:"
	echo "sudo su"
	echo "matlab"
	echo
fi
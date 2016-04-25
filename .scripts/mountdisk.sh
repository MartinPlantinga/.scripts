#!/bin/bash

diskvar=$(lsblk | grep 14.5G) 	# create variable with disk information
diskvar=${diskvar:0:3}		# select first 3 characters of variable
diskvar+="2"			# add partition number
mount /dev/$diskvar /home/ebox

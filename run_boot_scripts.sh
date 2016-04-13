#!/bin/bash

# This script runs the startup scripts to:
# 1. check if Edrive has been inserted into another computer
# 2. check if ethernet port number is correct.

# LOG
# M. Plantinga (13 April 2016): 	script creation

sudo /home/ebox/.scripts/check_mac_address.sh
sudo /home/ebox/.scripts/check_eth_port.sh

exit 0
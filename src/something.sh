#!/bin/bash

sudo_response=$(sudo -v 2>&1 | wc -l)
if [ $sudo_response = 0 ]; then
    can_sudo=1
elif [ $sudo_response = 1 ]; then
    can_sudo=0
else
    echo "Unexpected sudo response: $sudo_response" >&2
    exit 1
fi

if [ 'ping google.com -c 4 | grep time' != "" ] && [ $can_sudo == 1 ]; then 
  echo "we have connectivity"
  sudo pacman-key --init
  sudo pacman-key --populate archlinux
  sudo pacman-key --recv-key FBA220DFC880C036 --keyserver keyserver.ubuntu.com; sudo pacman-key --lsign-key FBA220DFC880C036
fi

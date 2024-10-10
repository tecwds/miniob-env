#!/bin/bash
ls -lld $HOME/docker/bin/*starter-* | awk '{print $9;}' | xargs -L 1 bash -c
echo 'starter scripts run successfully!'
echo 'run nvim headless'
nohup nvim --headless --listen localhost:6666
tail -f /dev/null

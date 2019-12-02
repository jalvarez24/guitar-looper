#!/bin/bash
LOOP_NUM=0
while true; do
	aplay -q --format=S16_LE --rate=16000 out.raw
done

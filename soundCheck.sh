#!/bin/bash
arecord -q  --format=S16_LE --rate=16000 --buffer-size=1200 | aplay -q --format=S16_LE --rate=16000 --buffer-size=1200 &

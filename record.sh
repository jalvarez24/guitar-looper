#!/bin/bash
arecord -q --format=S16_LE --rate=16000 --file-type=raw out.raw &

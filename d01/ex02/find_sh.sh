#!/bin/sh
find . -name '*.sh' | sed -e's@.*/@@' -e 's/\.sh$//g'

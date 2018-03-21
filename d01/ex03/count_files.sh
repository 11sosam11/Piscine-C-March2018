#!/bin/sh
find . -type d -o -type f | sed -n '$=' 

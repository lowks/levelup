#!/bin/bash

if [ $1 -lt 1 ];then
  echo "Error: invalid input"
  exit 1
fi

if [ $1 -eq 0 ];then
  echo "No number provided!"
  exit 1
fi

if [ $1 -gt 64 ];then
  echo "Error: invalid input"
  exit 1
fi

power=$(($1 - 1))
echo "2^${power}" | bc


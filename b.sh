#!/bin/bash

echo  "A${1}" >> a.txt
git add . && git commit -m "Added A${1}" 


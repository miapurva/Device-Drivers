# !/bin/bash 
for i in $1 
do echo $(printf "%s %d" "$i" "'$i"); done
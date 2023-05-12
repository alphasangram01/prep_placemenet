#!/bin/bash
user_input=$1
i=0
while [ $i -ne 5 ]
do
	echo $user_input
	sleep 1
	i='expr $i + 1'
done


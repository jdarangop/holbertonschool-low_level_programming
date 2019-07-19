#!/bin/bash

var2=$(($1 * $2))
var3=`bc <<< "scale=2; $var2"`
echo $var3

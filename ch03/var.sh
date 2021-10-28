#! /bin/bash

var="hello"
echo "var=$var or ${var}, but not \$var"
ls=$(ls)
echo "\$ls" is $ls

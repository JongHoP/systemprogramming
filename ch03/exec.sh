#!/bin/bash
exec < $1 #첫 번째 행 가져온다.
read title
read score1
read score2
echo $score1

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    script.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vifonne <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/23 16:08:34 by vifonne           #+#    #+#              #
#    Updated: 2018/07/24 21:28:57 by vifonne          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
f1="../map/200_200_40"
f2="../map/500_500_90"
f3="../map/1000_1000_100"
f4="../map/5000_5000_300"
f5="../map/30000_30000_800"
f6="../map/fail1"
f7="../map/fail2"
f8="../map/fail3"
f9="../map/fail4"
a=0
time=5

sleep 1
echo "\n\n\n		+		TEST $a		+		$a - $f1\n\n\n"
((a++))
for ((i=$time ; $i ; i--))
do	echo "		+		$i		+			"
	sleep 1
done
time ./bsq $f1

sleep 1
echo "\n\n\n		+		TEST $a		+		$a - $f2\n\n\n"
((a++))
for ((i=$time ; $i ; i--))
do	echo "		+		$i		+			"
	sleep 1
done
time ./bsq $f2

sleep 1
echo "\n\n\n		+		TEST $a		+		$a - $f3\n\n\n"
((a++))
for ((i=$time ; $i ; i--))
do	echo "		+		$i		+			"
	sleep 1
done
time ./bsq $f3

sleep 1
echo "\n\n\n		+		TEST $a		+		$a - $f4\n\n\n"
((a++))
for ((i=$time ; $i ; i--))
do	echo "		+		$i		+			"
	sleep 1
done
time ./bsq $f4

sleep 1
echo "\n\n\n		+		FAUSSE MAP		+		$a - $f5\n\n\n"
((a++))
for ((i=$time ; $i ; i--))
do	echo "		+		$i		+			"
	sleep 1
done
time ./bsq $f6

sleep 1
echo "\n\n\n		+		FAUSSE MAP		+		$a - $f5\n\n\n"
((a++))
for ((i=$time ; $i ; i--))
do	echo "		+		$i		+			"
	sleep 1
done
time ./bsq $f7

sleep 1
echo "\n\n\n		+		FAUSSE MAP		+		$a - $f5\n\n\n"
((a++))
for ((i=$time ; $i ; i--))
do	echo "		+		$i		+			"
	sleep 1
done
time ./bsq $f8

sleep 1
echo "\n\n\n		+		FAUSSE MAP		+		$a - $f5\n\n\n"
((a++))
for ((i=$time ; $i ; i--))
do	echo "		+		$i		+			"
	sleep 1
done
time ./bsq $f9

sleep 1
echo "\n\n\n		+		STDIN		+		$a - $f5\n\n\n"
((a++))
for ((i=$time ; $i ; i--))
do	echo "		+		$i		+			"
	sleep 1
done
cat /dev/null | time ./bsq

sleep 1
echo "\n\n\n		+		STDIN		+		$a - $f5\n\n\n"
((a++))
for ((i=$time ; $i ; i--))
do	echo "		+		$i		+			"
	sleep 1
done
echo "" | time ./bsq

sleep 1
echo "\n\n\n		+		STDIN		+		$a - $f5\n\n\n"
((a++))
for ((i=$time ; $i ; i--))
do	echo "		+		$i		+			"
	sleep 1
done
echo "123" | time ./bsq

sleep 1
echo "\n\n\n		+		STDIN		+		$a - $f5\n\n\n"
((a++))
for ((i=$time ; $i ; i--))
do	echo "		+		$i		+			"
	sleep 1
done
cat $f1 | time ./bsq

sleep 1
echo "\n\n\n		+		STDIN		+		$a - $f5\n\n\n"
((a++))
for ((i=$time ; $i ; i--))
do	echo "		+		$i		+			"
	sleep 1
done
cat $f4 | time ./bsq $f9

sleep 1
echo "\n\n\n		+		ULTIMATE TEST $a		+		$a - $f5\n\n\n"
((a++))
for ((i=$time ; $i ; i--))
do	echo "		+		$i		+			"
	sleep 1
done
time ./bsq $f5

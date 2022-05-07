# !/bin/bash
# Guss what number i think of?

#initial the number
max=1

echo "Enter the number:"
read ans 
clear

echo "Guess the number:"
read gss

#Strat geussing
while (($ans != $gss & $max < 11)) 
do
	echo "Wrong! Guess again:"
	read gss
	((++max))
done


#finish
((++max))

if(($ans != $gss))
then
	echo "You'be guessed wrong to many times :("
else
	for i in `seq 2 $max`
	do
		echo "CONGRATS!!!"
	done
fi
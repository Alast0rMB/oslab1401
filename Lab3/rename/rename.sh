# !/bin/bash
#creating a bash to rename files in directory

i=1
for file in ~/Desktop/rename/folder/*
do
	mv -i "$file" file"$i"
	((++i))
	echo $i
done
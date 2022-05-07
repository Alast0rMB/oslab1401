# !/bin/fish
#My first and only script with fish

set a 2
set b 3
set d (math "$a+$b")
echo d

if test "1==1"
	echo "This is wired!"
else
	echo "This wont happen"
end

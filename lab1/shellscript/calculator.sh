# !/bin/bash 

# Take user Input 
echo "Enter Two numbers : "
read a 
read b 

# Input type of operation 
echo "Enter Choice :"
echo "1. Addition"
echo "2. Subtraction"
echo "3. Multiplication"
echo "4. Division"
echo "5. Exponent"
read ch 
pow() 
{ 
# value of A 
a=$1 
# value of B 
b=$2 
# c to count counter 
c=1 
# res to store the result 
res=1 
# 
if((b==0)); 
then
  res=1 
fi

if((a==0)); 
then
  res=0 
fi
if((a >= 1 && b >= 1)); 
then
  while((c <= b)) 
  do
  res=$((res * a)) 
  c=$((c + 1)) 
  done
fi

# Display the result 
echo "$1 to the power $2 is $res"
} 

# Switch Case to perform 
# calulator operations 
case $ch in
1)res=`echo $a + $b | bc` 
;; 
2)res=`echo $a - $b | bc` 
;; 
3)res=`echo $a \* $b | bc` 
;; 
4)res=`echo "scale=2; $a / $b" | bc` 
;; 
5)res= pow $a $b
esac
echo "Result : $res"

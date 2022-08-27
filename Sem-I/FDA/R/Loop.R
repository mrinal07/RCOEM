# for loop
print("For Loop")
for(val in 1:5)
{
  print(val)
}

# while loop
print("While Loop")
val <- 1
while(val<=5)
{
  print(val)
  val = val+1
}

# repeat loop
print("Repeat Loop")

val=1
repeat{
  print(val)
  val=val+1
  
  if(val>5)
  {
    break;
  }
}

# reverse loop
print("Reverse Loop")

for(val in 10:1){
  print(val)
}

# reverse loop for print only even

print("Reverse loop for print only even")
for( val in 10:1 )
{
  if( val%%2==0 ){
      print(val)
  }
}

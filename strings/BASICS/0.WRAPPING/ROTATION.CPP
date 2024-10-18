Wrapping / Rotation in strings

example ke lie ye dekho
shift('a') = 'b', shift('c') = 'd', and shift('z') = 'a'.

'a'+1 ='b'
'c'+1 ='d'
'z'+1 = to yaha a nahi ayega as z ka ascii+1 hoga yaha which is definitely not a


//ye baat dhyaan rakna while wrapping/rotation we want INDEX values and not ascii values


ascii  (s[i])            97  98 99 100
                         a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z
index (s[i]-'a')         0  1  2  3  4                                                              25


//so if we consider indexes we can consider it to wrap around %26

so if you had to calculate z+1 then,
  
  ('z'+1) % 26 = wont work as z will be put in ascii dude

  ( ('z'-'a')  +1 )%26  = ( 25 + 1 )%26 = 26%26 = 0 okay this gave you the index so you need to add 'a' to get the char 0+'a' = 'a'
      


//MOST GENERALIZED FORMULA
 ( (s[i]-'a')  + jumps )%26  + 'a'






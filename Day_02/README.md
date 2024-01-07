Arithmatic operators
% -> works for Integer types only

 The sign of a % b is same as sign of "a" 
  cout << (10 % 3); // output = 1
  cout << (-10 % 3); // output = -1 
  
 Short circuiting in logical operator 
 itn i  =10;
 bool res = ( i > 20) && (i++)
 if first expression is false then second one is no need validate
 output is 10
 
 bool res = (i == 10) || (i++)
 output res is 10
 bool res = (i == 8) || (i++)
 output res = 11
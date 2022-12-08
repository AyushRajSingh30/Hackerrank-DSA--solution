string kangaroo(int x1, int v1, int x2, int v2) {
    string re;
    if(x1<x2 && v1>v2 && (x2-x1)%(v1-v2)==0 )
  re="YES";
  
  else 
  re="NO";
  

  
  
  

return re;
}


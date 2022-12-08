string dayOfProgrammer(int year) {

vector<string>s;
while(year>=1700 && year<=1917){
    if(year%4==0){
      string str= to_string(year);
      return "12.09."+str;
    }
    if (year%4!=0) {
    string str= to_string(year);
    return "13.09."+str;
    }
}
if(year==1918){
string str= to_string(year);
return "26.09."+str;
}

if(year%400==0 || (year%4==0 && year%100!=0)){
string str= to_string(year);
return "12.09."+str;
}

else{
    string str= to_string(year);
    return "13.09."+str;
}

}

vector<string> split_string(string);

// Complete the catAndMouse function below.
string catAndMouse(int x, int y, int z) {
int a = abs(z-x);
int b= abs(z-y);

if(a<b){
    return "Cat A";
}
else if(a>b){
    return "Cat B";
}
else{
    return "Mouse C";
}

}

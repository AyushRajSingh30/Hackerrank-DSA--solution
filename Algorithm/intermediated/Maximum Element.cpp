vector<int> getMax(vector<string> operations) {
vector<int>v;
vector<int>Vmax;


for(int i=0; i<operations.size(); i++){
string str=operations[i];
if(str[0]=='1'){
    int temp1 = stoi(str.substr(2));
    v.push_back(temp1);}
    
    if(str[0]=='2'){
        v.pop_back();
    }
    
    if(str[0]=='3'){
         int max=*(max_element(v.begin(),v.end()));
         Vmax.push_back(max);
        
    }
    

}
return Vmax;
}

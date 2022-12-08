vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {

vector<int>rotated=a;
vector<int>result;

for(int i=0; i<a.size(); i++){
    rotated[(i+k)%a.size()]=a[i];  // also used  circular queue method
    
}

for(int i=0; i<queries.size(); i++){
    result.push_back(rotated[queries[i]]);
}

return result;

}

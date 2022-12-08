vector<int> breakingRecords(vector<int> scores) {

    int min=scores[0],max=scores[0],min1=0,max1=0;
    for(int i=1;i<scores.size();i++)
    {
        if(scores[i]>max){
            max1++;
            max=scores[i];
            }
        if(scores[i]<min){
            min1++;
        min=scores[i];
        }
    }
    vector<int> result;
    result.push_back(max1);
    result.push_back(min1);
    return result;
}

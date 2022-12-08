vector<string> calln3(vector<string> Grid){
    vector<string> result;
    for(int r=0;r<Grid.size();r++){
        string res="";
        for(int c=0;c<Grid[0].size();c++){
            res+=" ";
        }
        result.push_back(res);
    }
    //Checking
    for(int r=0;r<Grid.size();r++){
        for(int c=0;c<Grid[0].size();c++){
            if(Grid[r][c]=='O'){
               result[r][c]='.';
            }
            else if(r>0 && Grid[r-1][c]=='O'){
                result[r][c]='.';
            }
            else if(c>0 && Grid[r][c-1]=='O'){
                result[r][c]='.';
            }
            else if(r<Grid.size()-1 && Grid[r+1][c]=='O'){
                result[r][c]='.';
            }
            else if(c<Grid[0].size()-1 && Grid[r][c+1]=='O'){
                result[r][c]='.';
            }
            else{
                result[r][c]='O';
            }
        }
    }
    return result;
}
vector<string> fulln2(int height,int width){
    vector<string> ans=vector<string>();
    for(int i=0;i<height;i++){
        string res="";
        for(int j=0;j<width;j++){
            res+='O';
        }
        ans.push_back(res);
    }
    return ans;
}

vector<string> bomberMan(int n, vector<string> grid) {
    if(n==1){
        return grid;
    }
    else if(n%2==0){
        return fulln2(grid.size(), grid[0].size());
    }
    else if(n%4==3){
        return calln3(grid);
    }
    return calln3(calln3(grid));
}

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int n=nums1.size();
nums1.resize(n);
int count=0;
vector<float>v;
for(int i=0; i<nums2.size(); i++){
    nums1.push_back(nums2[i]);
}

sort(nums1.begin(), nums1.end());

for(int i=0; i<nums1.size(); i++){
    count++;
}

if(count%2!=0)
return float(nums1.at((count/2)));

else
return ((float)(nums1.at(count/2-1)+nums1.at(count/2))/2);

    }
};

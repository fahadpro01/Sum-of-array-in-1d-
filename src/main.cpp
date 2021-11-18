#include<bits/stdc++.h>
using namespace std;


vector<int>running(vector <int>& nums){
  for(int i=1;i<nums.size();i++){
    nums[i]+=nums[i-1];

  }
  return nums;
}
int main()
{
  vector<int>nums{5,6,4,7,8,9};
 vector<int>ans=running(nums);
 for(auto i=ans.begin();i!=ans.end();i++)
  cout<<*i<<endl;

}
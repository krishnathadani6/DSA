#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
void eachfrequency(vector <int>nums)
{
  unordered_map<int,int>m;
  for( int i=0;i<nums.size();i++)
  {
    if(m.count(nums[i]))
    {
        m[nums[i]]++;
    }
    else{
        m[nums[i]]=1;
    }

  }
  for(pair<int,int>p:m)
  {
    cout<<p.first<<" "<<p.second<<endl;
  }
  cout<<endl;
}
int main()
{
vector<int> nums={1,1,1,2,3,4,5,4,5,6,7};
eachfrequency(nums);
return 0;
}

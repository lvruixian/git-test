#include<iostream> 
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>nums(n);
	for(int i=0;i<n;i++)
	{
		cin>>nums[i];
	}
	sort(nums.begin(),nums.end());
	cout<<"排序输出：";
	for(int i=0;i<n;i++) 
	{
		cout<<nums[i]<<" ";
	}
	cout<<endl;
	set<int>unique_nums;
	for(int i=0;i<n;i++)
	{
	unique_nums.insert(nums[i])	;
	}
	cout<<"去重输出：";
	for(auto num :unique_nums) 
	{
		cout<<num<<" ";
	}
	cout<<endl;
	return 0;
}



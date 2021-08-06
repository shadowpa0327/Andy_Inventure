#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int threeSum(vector<int>& nums,int sum) {

            
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int ans=0;

        for(int i=0;i<n;i++) {
            //if(nums[i]>0)break;
            int L = i+1,R = n-1,target = sum-nums[i];
           // cout<<target<<endl;
            if(i>0&&nums[i]==nums[i-1]){
                continue;
            }
            while(L<R){
                int cur = nums[L] + nums[R];
                if(cur == target){
                    ans++;
                    L++;
                    while(L<R&&nums[L]==nums[L-1])
                        L++;
                    R--;
                    while(R>=L&&nums[R]==nums[R+1])
                        R--;
                }
                else if(cur<target){
                    L++;
                }
                else{
                    R--;
                }
            }
        }
        return ans;
    }
};

int main(){
    int n,tar;
    cin>>n>>tar;
    vector<int>input;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        input.push_back(tmp);
    }
    Solution s;
    int ans = s.threeSum(input,tar);
    if(ans)
        cout<<ans<<endl;
    else
        cout<<"FeiDoDo_Left_Wei_Men"<<endl;
    return 0;
}



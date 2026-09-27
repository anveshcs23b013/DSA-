class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        stack<int>s;
        vector<int>v;

        for(int i=nums2.size()-1;i>=0;i--){

            if(s.empty()){
                v.push_back(-1);
            }
            else if(!s.empty() && s.top()>nums2[i]){
                v.push_back(s.top());
            }
            else if(!s.empty() && s.top()<=nums2[i]){

                while(!s.empty() && s.top()<=nums2[i]){
                    s.pop();
                }

                if(s.empty()){
                    v.push_back(-1);
                }else{
                    v.push_back(s.top());
                }
            }

            s.push(nums2[i]);
        }

        reverse(v.begin(),v.end());

        unordered_map<int,int> mp;

        for(int i=0;i<nums2.size();i++){
            mp[nums2[i]] = v[i];
        }

        vector<int>ans;

        for(int i=0;i<nums1.size();i++){
            ans.push_back(mp[nums1[i]]);
        }

        return ans;
    }
};
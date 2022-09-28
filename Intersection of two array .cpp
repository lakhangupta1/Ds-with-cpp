class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,bool>mp;
        set<int>st;
        vector<int>v;
        for(int i=0;i<nums1.size();i++){
            mp[nums1[i]]=true;

        }
        
          for(int i=0;i<nums2.size();i++){
            if(mp[nums2[i]]==true){
                st.insert(nums2[i]);

            }

        }
        for(auto i=st.begin();i!=st.end();i++){
               v.push_back((*i));
        }
        return v;
        
    }
};

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
     vector<int>ps ;
     ps.push_back(0);

        int pf = gain[0];
        ps.push_back(pf);
     for(int i=1;i<gain.size();i++){
        pf+=gain[i];
        ps.push_back(pf);
     }   
    sort(ps.begin(),ps.end());

    return ps[ps.size()-1];
    }
};
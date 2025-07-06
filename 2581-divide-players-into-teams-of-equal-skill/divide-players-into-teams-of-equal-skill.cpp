class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        int n = skill.size();
        long long total = 0;
        int target = skill[0] + skill[n-1];

        int l = 0, r = n-1;

        while(l < r){
            if(skill[l] + skill[r] != target){
                return -1;
            }
            total += (long long)skill[l] * skill[r];
            l++;
            r--;
        }
        return total;
    }
};
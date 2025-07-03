class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n  = customers.size();
        
        double totaltime = 0;
        int currtime =0;
        for(auto& curr: customers){
            int arrivaltime = curr[0];
            int cooktime  = curr[1];
            if(currtime < arrivaltime){
                currtime  = arrivaltime;
            }
            int waittime = currtime  + cooktime - arrivaltime;
            totaltime += waittime;
            currtime += cooktime;
        }
        return totaltime/n;

    }
};
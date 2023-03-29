class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int n=points.size();
        int ct=1;
        long long m=LONG_MIN;
        long long mn=LONG_MIN;
       long long mx=LONG_MAX;
        for(int i=0;i<n;i++){
            if(points[i][0]>=mn && points[i][0]<=mx){
                if(points[i][1]<=mx)
                {mn=points[i][0];mx=points[i][1];}
                else{
                    mn=points[i][0];
                }
            }
            // else if (points[i][0]>=mn && points[i][1]>mx)
            //  mn=points[i][0];
            
            else {
                    mn=points[i][0];mx=points[i][1];
                    ct++;
                    }
        }
        return ct;
    }
};
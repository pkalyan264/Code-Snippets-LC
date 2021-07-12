class Solution {
public:
    vector<int> v1;
    vector<int> v2;
	//Smaller element in left
    void sel(vector<int> &heights){
        stack<pair<int,int>> s;
        for(int i=0;i<heights.size();i++){
            pair<int,int> p;
            if(s.size()==0){v1.push_back(-1);s.push({heights[i],i});}
            else{
                while(s.size() and s.top().first>=heights[i]){
                    s.pop();
                }
                if(s.size()==0)v1.push_back(-1);
                else v1.push_back(s.top().second);
                s.push({heights[i],i});
            }
        }
    }
	//Smaller element in right
    void ser(vector<int> &heights){
        stack<pair<int,int>> s;
        for(int i=heights.size()-1;i>=0;i--){
            pair<int,int> p;
            if(s.size()==0){v2.push_back(heights.size());s.push({heights[i],i});}
            else{
                while(s.size() and s.top().first>=heights[i]){
                    s.pop();
                }
                if(s.size()==0)v2.push_back(heights.size());
                else v2.push_back(s.top().second);
                s.push({heights[i],i});
            }
        }
        reverse(v2.begin(),v2.end());
    }
    int largestRectangleArea(vector<int>& heights) {
            sel(heights);
            int area=0;
            ser(heights);
            for(int i=0;i<heights.size();i++){
                area=max((v2[i]-v1[i]-1)*heights[i],area);
            }
            return area;
    }
    
};

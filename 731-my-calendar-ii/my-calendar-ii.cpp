class MyCalendarTwo {
public:
    vector<vector<int>> bookings;
    map<int,int> mp; 
    MyCalendarTwo() {
        
    }
    
    bool book(int start, int end) {
        for(auto it:mp){
            if(max(start,it.first)<min(end,it.second)) return false;
        }
        for(auto i:bookings){
            int s = max(start,i[0]);
            int e = min(end,i[1]);
            if(s<e) mp[s]=e;
        }
        bookings.push_back({start,end});
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(startTime,endTime);
 */
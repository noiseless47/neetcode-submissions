class Twitter {
public:
    priority_queue<vector<int>> pq;
    int id=0;
    map<int, set<int>> friends;
    Twitter() {
        friends.clear();
        id=0;
        pq=priority_queue<vector<int>>();
    }
    
    void postTweet(int userId, int tweetId) {
        pq.push({id++, tweetId, userId});
    }
    
    vector<int> getNewsFeed(int userId) {
        priority_queue<vector<int>> temp = pq;
        vector<int> ans;
        int n=0;
        while(!temp.empty() && n<10){
            auto x = temp.top();
            temp.pop();
            if(x[2]==userId || friends[userId].count(x[2])){
                ans.push_back(x[1]);
                n++;
            }
        }
        return ans;
    }
    
    void follow(int followerId, int followeeId) {
        friends[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        friends[followerId].erase(followeeId);
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */
int leastInterval(vector<char>& tasks, int n) {
    
    unordered_map<char, int> myHash;
    int count=0;
    for(auto ele:tasks)
    {
        myHash[ele]++;
        count=max(count, myHash[ele]);
    }
    
    int ans=(count-1)*(n+1);
    for(auto ele:myHash)
    {
        if(ele.second==count) ans++;
    }
    
    return max(ans, (int)tasks.size());
}

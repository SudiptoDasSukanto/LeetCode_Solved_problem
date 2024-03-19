class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        priority_queue<int> pq ;
        map<char,int> mp ;
        for(int i=0 ; i<tasks.size() ;i++){
            mp[tasks[i]]++ ;
        }
        
        for(auto& p:mp){
            pq.push(p.second);
        }
        int task = 0 ;
        while(!pq.empty()){
            vector<int> temp ;
            for(int i=1 ; i<=n+1; i++){
                if(!pq.empty()){
                    int x = pq.top();
                    x--;
                    pq.pop();
                    temp.push_back(x);
                }
            }

            for(auto& p:temp){
                if(p>0){
                    pq.push(p);
                }
            }

            if(pq.empty()){
                task+=temp.size() ;
            }else {
                task+=n+1;
            }

            

        }
        return task;
    }
};
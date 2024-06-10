class Solution {
public:
    vector<string> watchedVideosByFriends(vector<vector<string>>& watchedVideos, vector<vector<int>>& friends, int id, int level) {
        

bool vis[200];
unordered_map<string,int>m;

        queue<pair<int,int>>qq;
        qq.push({id,0});

        vis[id]=true;
        while(!qq.empty())
        {
            auto it=qq.front();
            qq.pop();

            if(it.second==level)
            {
                for(string k:watchedVideos[it.first])
                {
                    m[k]++;
                }
                continue;

            }

            for(auto p:friends[it.first])
            {
                if(!vis[p])
                {
                    vis[p]=true;
                    qq.push({p,it.second+1});
                }
            }


        }

        vector<pair<int,string>>temp;

        for(auto n:m)
        {
            temp.push_back({n.second,n.first});
        }
        sort(temp.begin(),temp.end());
        vector<string>ans;
        for(auto g:temp)
        {
ans.push_back(g.second);
        }
        return ans;

    }
};
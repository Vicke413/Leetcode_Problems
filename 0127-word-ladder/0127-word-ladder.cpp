class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        
        unordered_set<string>st(wordList.begin(),wordList.end());

queue<pair<string,int>>qq;
qq.push({beginWord,1});

while(!qq.empty())
{

    string temp=qq.front().first;
    int op=qq.front().second;
    qq.pop();

if(endWord==temp)
return op;

    for(int i=0;i<temp.size();i++)
    {
        char cc=temp[i];

        for(char c='a';c<='z';c++)
        {
            temp[i]=c;

            if(st.find(temp)!=st.end())
            {
                st.erase(temp);
                qq.push({temp,op+1});
            }

           
        }
        temp[i]=cc;
    }
}

return 0;


    }
};
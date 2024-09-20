class Solution {
public:
int maxi=INT_MIN;
int n;
void solve(vector<int>&freq,vector<string>& words,vector<int>scc,int i,int score,int ans1)
{
maxi=max(maxi,ans1);

    if(i>=n)
    return;
    string temp=words[i];

int j=0;
int sc=0;
int nn=temp.length();
vector<int>te=freq;
while(j<nn)
{
    char ch=temp[j];
    
 freq[ch-'a']--;
 sc+=scc[ch-'a'];
 if(freq[ch-'a']<0)
 break;
j++;

}
if(j==nn)
{
    // updated freq arr
solve(freq,words,scc,i+1,score,ans1+sc);
}

// not take
// backtrack not update fre ARR , up
    solve(te,words,scc,i+1,score,ans1);

}
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        
        vector<int>freq(26,0);
        for(char c: letters)
        freq[c-'a']++;
         n=words.size();
        int ans=0;

        solve(freq,words,score,0,0,ans);
        return maxi;

    }
};
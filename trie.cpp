#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define precison std::cout << std::fixed << std::setprecision(20);
#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 
typedef long long ll;
using namespace std;

struct TrieNode
{
    char val;
    bool isEnd=false;
    vector<TrieNode*> child{26,NULL};
    TrieNode(char val,bool isEnd) : val(val),isEnd(isEnd) {}

};
class Trie
{
    public:
    //dummy head
   TrieNode * head=new TrieNode('@',0);
    Trie(vector<string> &words)
    {
        for(int i=0;i<words.size();i++)
        {
            addString(words[i]);
        }
    }
    void addString(string &s)
    {
        TrieNode* temp=head;
        int m=s.size();
        for(int i=0;i<m;i++)
        {
              int ind=s[i]-'a';
            if(temp->child[ind]==NULL)
            {
                if(i!=m-1)
                temp->child[ind]=new TrieNode(s[i],0);
                else
                temp->child[ind]=new TrieNode(s[i],1);
                
                 temp=temp->child[ind];
                    
            }
            else
            {
                temp=temp->child[ind];
                if(i==m-1)
                {
                    temp->isEnd=true;
                }
            }
                
        }
        
        }
    void printTrie(TrieNode* head,int level)
        {
            if(head==NULL)
                return;
            //cout<<head->val<<" "<<level<<" "<<head->isEnd<<"\n";
            for(int i=0;i<26;i++)
            {
                printTrie(head->child[i],level+1);
            }
        }
    
};

int main()
{
        fastIO;
        precison;
        #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
        #endif
}


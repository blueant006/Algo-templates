#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define precison std::cout << std::fixed << std::setprecision(20);
#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 
typedef long long ll;
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(nullptr) {}
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

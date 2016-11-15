#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main()

{
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int>myints;
    vector<pair<int,string>> pair;
    int n,m;
    cin>>n>>m;
    string str="";
        for(int x=1;x<=n;x++)
            myints.push_back(x);
        
      do {
          str="";
          for(int x=0;x<myints.size();x++)  
                str+=to_string((long long)myints[x])+" "; 
              
         //cout<<str<<endl;
        int sum=0;
        //cout<<myints.size()<<endl;
        for(int i=0;i<n;i++)
        {
            int Min=myints[i];
            for(int j=i;j<n;j++)
            {

                Min=min(Min,myints[j]);
                sum+=Min;
            }
        }
        pair.push_back(make_pair(sum,str));
      } while ( next_permutation(myints.begin(),myints.begin()+n) );
    
      std::sort(pair.begin(), pair.end());
      vector<string>lol;
      int o=pair[pair.size()-1].first;
      lol.push_back(pair[pair.size()-1].second);
      for(int x=pair.size()-2;x>=0;x--)
      {
          if(pair[x].first==o)
                lol.push_back(pair[x].second);
      }
      cout<<lol[lol.size()-m]<<endl;

  return 0;
}
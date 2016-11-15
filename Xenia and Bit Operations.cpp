#include<iostream>
#include<vector>
#include<string>

using namespace std;
int Count=1,start=0,a=0,Y=0,NewCount=1;
bool filled=false;
vector<int >binary;
void Operations(vector<int>&bin);


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin>>n>>m;
    Y=1<<n;
    for(int x=0;x<Y;x++)
    {
        int num;
        cin>>num;
        binary.push_back(num);
    }

    /*int decimal =binary[binary.size()-1];
    filled=true;
    cout<<decimal<<" "<<binary.size()<<endl;
    for(int y=0;y<binary.size();y++)
        cout<<binary[y]<<endl;*/

    int b;
    for(int y=0;y<m;y++)
    {
        
        cin>>a>>b;
     
            binary[a-1]= b;
            Operations(binary);
            int decimal =binary[binary.size()-1];
            cout<<decimal<<endl;
            filled=true;
            NewCount=1;
        
        
    }
    
}
void Operations(vector<int>&bin)
{

    //PART 1 fill the vector
    if(!filled)
    {
        int finish=0;
        int A=bin.size();
        for(int x=start;x<A;x=x+2)
            {
                if(Count%2!=0)
                        bin.push_back(bin[x]|bin[x+1]);
                else
                        bin.push_back((bin[x]^bin[x+1]));      
                finish++;
            }

        Count++;
        start=bin.size()-finish;
        if(finish!=1)
            Operations(bin);
    }

    //PART 2 override certain elements in the vector
    else
    {   
            NewCount++;
            if(NewCount%2==0) 
            {
                if((a-1)%2==0)
                    bin[Y+(a-1)/2]=(bin[a-1] | bin[a]);
                else
                    bin[Y+(a-1)/2]=(bin[a-2]|bin[a-1]);
            }
            else 
            {
                if((a-1)%2==0)      
                    bin[Y+(a-1)/2]=(bin[a-1]^bin[a]);
                else
                    bin[Y+(a-1)/2]=(bin[a-2]^bin[a-1]);
            }

            a=Y+((a-1)/2)+1 ;
            if(a!=bin.size())
                Operations(bin);
}
    
}
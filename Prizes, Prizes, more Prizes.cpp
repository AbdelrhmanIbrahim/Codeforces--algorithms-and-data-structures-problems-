#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()

{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int bars;
    long long point,prize;
    vector<long long>points,prizes,output;
    cin>>bars;
    for(int x=0;x<bars;x++)
    {
        cin>>point;
        points.push_back(point);
    }

    for(int y=0;y<5;y++)
    {
        cin>>prize;
        prizes.push_back(prize);
        output.push_back(0);
    }

    long long reminder=0;
    int count=0;
    while(1)
    {
        if(reminder<prizes[0] && count<points.size())
        {
            reminder+=points[count];
            count++;
        }
        else if(reminder>=prizes[prizes.size()-1])
        {
            output[output.size()-1]+=reminder/prizes[prizes.size()-1];
            reminder%=prizes[prizes.size()-1];
        }
        else
        {
            for(int y=0;y<prizes.size();y++)
            {
                if(reminder<prizes[y])
                {
                    output[y-1]+=reminder/prizes[y-1];
                    reminder%=prizes[y-1];
                    break;
                }
            }
        }
        if(reminder<prizes[0] && count==points.size())
            break;
    }


    for(int x=0;x<output.size();x++)
        cout<<output[x]<<" ";

    cout<<""<<endl;
    cout<<reminder<<endl;

}
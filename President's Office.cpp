#include<iostream>
#include<vector>
#include<string>
#include<math.h>

using namespace std;

int check=0,count=0;
vector<string>office;
vector<char>same_office;

void same_or_not(int x,int y)
{
    for(int i=0;i<same_office.size();i++)
    {
        if(office[x][y]!=same_office[i])
            check++;
    }
    if(check==same_office.size())
    {
        count++;
        same_office.push_back(office[x][y]);
        check=0;
    }
    else
        check=0;
}

int main()

{
    //Get no_of_rows,no_of_colomns and president_office_color


    int height=0,width=0,H=0;
    char president_office_color;

    cin>>height;
    cin>>width;
    cin>>president_office_color;

    H=height;

    while(H!=0)
    {
    H--;
    string ROW="";
    cin>>ROW;
    office.push_back(ROW);
    }
    
    for(int row=0;row<height;row++)
    {
        for(int col=0;col<width;col++)
        {

            if(office[row][col]==president_office_color)
            {
                if( col!=width-1 && office[row][col+1]!='.' && office[row][col+1]!=office[row][col] )
                    same_or_not(row,col+1);

                if( col!=0 && office[row][col-1]!='.' && office[row][col-1]!=office[row][col] )
                    same_or_not(row,col-1);

                if( row!=height-1 && office[row+1][col]!='.'  && office[row+1][col]!=office[row][col])
                    same_or_not(row+1,col);

                if( row!=0 && office[row-1][col]!='.' && office[row-1][col]!=office[row][col])
                    same_or_not(row-1,col);
                
            }
        }
    }


    cout<<count<<endl;

return 0;
}
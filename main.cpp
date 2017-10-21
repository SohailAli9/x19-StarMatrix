#include <iostream>
#include <vector>

using namespace std;
int main()
{

int r, c, i, j;
cout<<"Enter rows of stars : ";
cin>>r;
cout<<"Enter columns of stars: ";
cin>> c;
if ( r <=0 || c <=0)
{
    //do nothing if rows and colums are zero or -ve
}
else
{
    vector<char> col_vector(c, '*');
    vector<vector<char> > matrix(r,col_vector);
    for(i = 0; i < r ; ++i)
    {
        for(j =0; j< c; ++j)
        {
            cout<< matrix[i][j];
        }        
        cout<<endl<<endl;
    }   
}
return 0;

}

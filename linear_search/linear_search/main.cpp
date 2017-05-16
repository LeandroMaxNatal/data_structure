#include <iostream>
#include <vector>

using namespace std;

int linearSearch( vector<int> myVector, int targetValue )
{
    for(int i = 0; i < myVector.size(); i++)
    {
        if( myVector[ i ] == targetValue )
            return targetValue;
    }
    return -1;
}

int main()
{
    cout << "Linear Seach" << endl;

    vector<int> myVector;

    int i;
    for( i = 0; i < 10; i++)
        myVector.push_back(i+1);

    int teste = linearSearch(myVector, 11);
    cout << teste << endl;
    return 0;
}

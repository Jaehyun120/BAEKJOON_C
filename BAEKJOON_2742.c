//BAEKJOON_2742

#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n=0;
    cin >> n;
    
    for(int i=0; i<n;i++)
    {
        cout << n-i << "\n";
    }
    
    return 0;
}
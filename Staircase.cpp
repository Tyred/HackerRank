#include <bits/stdc++.h>
#include <string>

using namespace std;

/* Solution */ 
void staircase(int n) {
    string output; 
    
    for (int i = 1; i <= n; i++){
        for (int j = 0; j < n-i; j++)
            output += ' ';
        for (int k = n-i; k < n; k++)
            output += '#';
        
        output += '\n';         
    }
    
    cout << output;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}

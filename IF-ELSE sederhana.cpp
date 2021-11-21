#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int t;
    int b;
    int u;
    cin>> t >> b >> u;
    if (t > 170 && b> 55 && u >= 15){
         cout << "Lolos"<< endl;
    } else {
    cout << "Tidak Lolos" << endl;
}

    return 0;
}

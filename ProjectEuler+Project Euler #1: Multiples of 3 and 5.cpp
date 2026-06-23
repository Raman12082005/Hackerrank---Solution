/*
If we list all the natural numbers below  that are multiples of  or , we get  and . The sum of these multiples is .
Find the sum of all the multiples of  or  below .

Input Format
First line contains  that denotes the number of test cases. This is followed by  lines, each containing an integer, .

Output Format
For each test case, print an integer that denotes the sum of all the multiples of  or  below .

Sample Input 0
2
10
100
Sample Output 0
23
2318
Explanation 0
For , if we list all the natural numbers below  that are multiples of  or , we get  and . The sum of these multiples is .
Similarly for n = 100, we get 2318.
*/

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

long long helper(long long k, long long n){
    long long cnt = (n-1)/k;
    return k * cnt * (cnt+1) / 2;
}
int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        
        long long ans = helper(3, n) + helper(5, n) - helper(15, n);
        cout<<ans<<endl;
    }
    return 0;
}

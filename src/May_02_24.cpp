/**
 *    author:  Roman_Emper0r
 *    created: 02-05-2024  20:35:00
**/
#include<bits/stdc++.h>

using namespace std;
#define                int    long long int
void solution()
{
  
      // Step 1: Create an unordered_map with string keys and vector<int> values
    std::unordered_map<std::string, std::vector<int>> hashmap;

    // Step 2: Insert elements into the hashmap
    hashmap["group1"] = {1, 2, 3};
    hashmap["group2"] = {4, 5};
    hashmap["group3"] = {6, 7, 8, 9};
    hashmap["group3"].push_back(100);

    // Adding more elements to an existing key
    hashmap["group1"].push_back(10);
    hashmap["group2"].push_back(11);

    // Step 3: Iterate over the hashmap and print its contents
    for (const auto &pair : hashmap) {
        std::cout << pair.first << ": ";

        for (int i= pair.second.size()-1; i>=0; i--) {
            std::cout << pair.second[i] << " ";
        }
        std::cout << std::endl;
    }

}



int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin) ;
    freopen("output.txt","w",stdout);
 #endif

 int t=1;
 // cin>>t;

 while(t--)
 {
    solution();
 }

}



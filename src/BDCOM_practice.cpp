#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream in("file1.txt");
    ofstream out("file2.txt");

    string line;
    std::vector<string> lines;

    while(getline(in,line))
    {
        reverse(line.begin(),line.end());
        lines.push_back(line);
    }   

    reverse(lines.begin(),lines.end());

    for(int i=0; i<lines.size(); i++)
    {
        out<<lines[i]<<endl;
    }
    in.close();
    out.close();
}
#include <bits/stdc++.h>
using namespace std;

// Structure to represent a student with name, score, and age
struct Student {
    string name;
    int score;
    int age;
};

// Custom comparator for sorting
bool compare( Student &a,  Student &b) {
    if (a.score != b.score) return a.score > b.score;
    if (a.name != b.name) return a.name < b.name;
    return a.age < b.age;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        #endif

    int n;
    cin >> n; // Number of students

    vector<Student> students(n);

    for (int i = 0; i < n; ++i) {
        cin >> students[i].name >> students[i].score >> students[i].age;
    }

    sort(students.begin(), students.end(), compare);
    cout<<students.size()<<endl;
    for ( auto &s : students) {
        cout << s.name << " " << s.score << " " << s.age << "\n";
    }
    for(int i=0; i<students.size(); i++){
        cout<<students[i].name<<" "<<students[i].score<<endl;
    }

    return 0;
}

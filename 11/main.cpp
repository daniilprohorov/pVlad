#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <sstream>
using namespace std;

int main() {   
    string line;
    getline(cin, line);
    vector<string> words(line.begin(), line.end());
    cout << endl;
    for(int i = 0; i < words.size(); i++){
        cout << " | "  << words[i];
    }
    return 0; 
}




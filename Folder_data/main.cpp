//
//  main.cpp
//  Folder_data
//
//  Created by PodMiu on 17/7/25.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout("/Users/voann/Desktop/Code/Folder_data/num.txt");
    if (!fout.is_open()) {
        cerr << "Error" << endl;
        return 1;
    }
    
    for(int i =2; i<=102; i+=2){
        fout << i << endl;
    }
    
}

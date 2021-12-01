#include <iostream>
#include <fstream>

using namespace std;


int cont_lrg_than_prev(string file_name){

    ifstream infile(file_name);
    string line;
    int num = 0;
    int prev_num = INT_MAX;
    int output = 0;
    while(getline(infile, line)){
        num = stoi(line);

        if(num>prev_num)
            output++;
        
        prev_num = num;
    }
    
    return output;

}


int main(){

    int output = cont_lrg_than_prev("input_1.txt");

    cout << output << endl; 
    
    return 0;
}
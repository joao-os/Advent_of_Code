#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void push(vector<int> & v, int n){
    v.push_back(n);
}

int cont_lrg_than_prev_window(string file_name){
    
    ifstream infile(file_name);
    
    
    vector<int> v;

    string line;
    

    int cycle = 0;

    int prev_wind = 0;
    int wind = 0;


    int output = 0;
    
    int num = 0;


    while(getline(infile, line)){
        num = stoi(line);        
        push(v,num);   
    }

  
    while(cycle < v.size()-3){
        prev_wind = v[cycle] + v[cycle+1] + v[cycle+2];
        wind = v[cycle+1] + v[cycle+2] + v[cycle + 3];

        cycle++;

        if(wind>prev_wind)
            output++;
    }  
    
    return output;

}


int main(){

    int output = cont_lrg_than_prev_window("input_1.txt");

    cout << output << endl; 
    
    return 0;
}
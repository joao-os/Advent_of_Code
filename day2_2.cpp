#include <iostream>
#include <fstream>

using namespace std;



void get_pos(string file_name,int output[]){
    
    ifstream infile(file_name);
    
    
    string line;
    

    int horizontal = 0;
    int vertical = 0;
    int aim = 0;

    

    while(getline(infile, line)){
        //cout << line[0] << endl;
        switch(line[0]) {
            case 'f':
                horizontal += line[line.length() - 1] - 48;
                vertical += aim * (line[line.length() - 1] - 48);
            break;
            case 'u':
                aim -= line[line.length() - 1] - 48;
            break;
            case 'd':
                aim += line[line.length() - 1] - 48;
            break;
            default:
                cout << "ERROR" << endl;
        }    
        //cout << horizontal << endl;
        //cout << vertical << endl;

           
    }

    output[0] = horizontal;
    output[1] = vertical;

}


int main(){

    int output[2];
    get_pos("input_2.txt", output);

    cout << output[0]*output[1] << endl; 
    
    return 0;
}
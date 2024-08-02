#include <iostream>
#include <string>
#include <fstream>

/*
Two types of files: Text and Binary
1. Text file: every character is stored using ASCII
2. Binary file: .exe, .wav, .avi -> stored with binary formats 
*/

int main(){
    std::string data = "C++ APCS";
    std::fstream f; // declare f instances, used to read the file
   
    
    //ios::out -> output mode: open a file for writing. If the file DNE, it will create one
    f.open("sample.txt", std::ios::out);
    f << data;
    f.close();
    std::cout << "File Saved!" << std::endl;
    
    //ios::in -> input mode: open a file for reading. If the file DNE, it will fail
    f.open("sample.txt", std::ios::in);
    if(!f){
        std::cout << "Failed to open the file. Files might not exist." << std::endl;
        exit(1);
    }
    while(!f.eof()){
        getline(f, data);
        std::cout << data << std::endl;
    }
    f.close();
    
    std::cout << "Finished reading the file! " << std::endl;
    
    return 0;
}

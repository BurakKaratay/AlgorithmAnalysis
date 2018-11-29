#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main(){
ifstream myfile;
int x = 0;
string line;
myfile.open("questions.txt");
while(myfile>>line){
  if(x == 1 && line[line.length()-1] != '?'){
    cout << line << endl;
    x = 0;
    cout << x << endl;
}

  
    
  
if(line[line.   length()-1] == '?'){
    line.erase(line.length()-1);
}



}
return 0;
}

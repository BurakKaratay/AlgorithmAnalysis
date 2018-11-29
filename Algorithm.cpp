#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main(){
ifstream myfile;
int x = 0;
bool question;
string line;
myfile.open("questions.txt");
while(myfile>>line){
    question=false;
  if(x == 1 && line[line.length()-1] != '?'){
    x = 0;
    question=true;
}

    if(line == "Who" || line == "who" || line == "Where" || line == "where" || line == "what" || line == "What" || line == "How" || line == "how"  ){
    question=true;
    x = x + 1;

}
    
  
if(line[line.   length()-1] == '?'){
    line.erase(line.length()-1);
}

if(question){
}
else{
    cout << line << endl;
}


}
return 0;
}

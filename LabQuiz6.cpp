//Mohammad Hossain
//4/2/22
//Lab Quiz 6:
//Rectangle: Print 6 rows 5 columns * shape, each line is "*****", the last * is not followed by space
#include <iostream>
using namespace std;
int main(){
    int row = 6;
    for(int i = 0; i < row; i++){
        cout << "* * * * *" << endl;
    }
    return 0;
}
#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ofstream hamFile;
    hamFile.open("ham.txt");

    hamFile << "This is how you write something onto a file from C++!\n";
    hamFile.close();
}
/* Working with files in C++
- First off, you include a header file called fstream
which allows you to open, write and close files by creating
a file object.

- You need to include iostream header file which allows you to
input and output data onto the file.

- After that you need to create an fstream object using
ofstream keyword.

- Next you call an open function where you pass in
the file's name in quotation marks inside the parenthesis.

- Open function either opens an already existing file and if
there is no already existing file, it creates one and opens it.

- Next, to input some data onto the object file, you use
stream insertion operator <<

- Next, to close the file, you call the close function without any parameters
with the file object


*/

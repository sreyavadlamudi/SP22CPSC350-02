/*
This is the header file for the FileProcessor class
*/

#include <string>
using namespace std;

class FileProcessor{
private:
  string line;
public:
  FileProcessor();
  void processFile(string inputfile, string outputfile);
  ~FileProcessor();
};

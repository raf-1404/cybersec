#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <openssl/md5.h>

using namespace std;

int main() 
{
	

unsigned char result[MD5_DIGEST_LENGTH];


int main(int argc, char *argv[]) 
{
	char hash1[128];
	char hash2[128];

if(argc != 3) 
{
    cout << "Specify the file..." << endl;
    return 0;
}

ifstream::pos_type fileSize;
ifstream::pos_type fileSize2;
char * memBlock;
char * memBlock1;

ifstream file (argv[1], ios::ate);
ifstream file1 (argv[2], ios::ate);

//check if opened
if (file.is_open()) 
{ 
  cout<< "Using file\t"<< argv[1] <<endl; 
}

else if (file1.is_open())
{
	cout<< "Using file\t"<< argv[2] <<endl; 
}
else {
	  if (argv[1])
         cout<< "Unable to open\t"<< argv[1]<<endl;
	 else 
		 cout << "Unable to open\t" << argv[2]<<endl;

   
}


//get file size & copy file to memory
//~ file.seekg(-1,ios::end); // exludes EOF
fileSize = file.tellg();
fileSize2 = file1.tellg();
//cout << "File size \t"<< fileSize << endl;
memBlock = new char[fileSize];
memBlock1 = new char[fileSize2];
file.seekg(0,ios::beg);
file1.seekg(0, ios::beg);
file.read(memBlock, fileSize);
file1.read(memBlock1,fileSize2)
file.close();
file1.close();

//get md5 sum
hash1 = MD5((unsigned char*) memBlock, fileSize);
hash2 = MD5((unsigned char*) memBlock1, fileSize2);

//~ cout << "MD5_DIGEST_LENGTH = "<< MD5_DIGEST_LENGTH << endl;



}

//comparing hash values 	
ifstream file("C:\\Users\\Rafelia Fernandes\\Desktop\\md5hash.txt");
if (file.is_open()) {
    string line;
    while (std::getline(file, line)) {
        // using printf() in all tests for consistency
		int j = 0;
	if (line.size() == hash1.size())
	{ for (int i = 0; i < line.size(); i++)		
	  	{
         if (line.c_str() == hash1.c_str())
			 j++;
		     
			
		}
		
	if (j == line.size())
		cout << "Virus detected !!!!" << endl;
		
	}	
	
	else if (line.size() == hash2.size())
	{ for (int i = 0; i < line.size(); i++)		
	  	{
         if (line.c_str() == hash2.c_str())
			 j++;
		     
			
		}
		
	if (j == line.size())
		cout << "Virus detected !!!!" << endl;
		
	}
	
		else if (my_file.eof())
				break;
			
		else 
			continue;
    }

	my_file.close();
	return 0;
}


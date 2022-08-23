
'OPENS NOTEPAD AND Pastes current date to it 100 times  
Set wshshell = wscript.CreateObject("WScript.Shell") 
Wshshell.run "%windir%\system32\notepad.exe" 'opens notepad 
for i = 0 to step 100  'prints date on open notepad a 100 times 
  wscript.sleep 100 
  dim aDate  
  aDate = Date()
  wscript.sleep 2000
  wshshell.sendkeys aDate 
  wscript.sleep 1000
   
'Blocks input thru blockinput windows api 
Set oAutoIt = CreateObject("AutoItX.Control") 
oAutoIt.blockinput 1
wscript.sleep 1000
oAutoIt.blockinput 0

'opens a url in web browser and opens it 6 times 
dim urlg = "https://www.google.co.in"
for i to step 6
  wshshell.run(urli)

  

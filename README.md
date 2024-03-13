# HelloWorldEmintWeb
A trivial example (the typical HelloWorld) for the EmintWeb framework

First, create the HelloWorld_localconf.sh executing ./setup.sh

Then, you should be able to open the project HelloWorld.emw with emitweb (File Menu --> Load Project) and change the path to the include directories and libraries if the Poco header are not installed in /usr/include/Poco or the Poco libraries or gumbo parser library are not in /usr/lib64

It is assumed that you installed EmintWeb correctly so libhtcplus.a will be in /usr/local/lib. If not, change/add the library path appropriately.

Independently of the GUI, the project can be compiled using the command-line emintweb tool as:

eiwcli HelloWorld.emw -deb -gall
cd CodeFiles
make

and executed as

CodeFiles/MainProg/HelloWorld 20000

for the single server and

CodeFiles/MainProg/HelloWorld_Server <your_hostname> 25000 25001-25100

(or any other ports/port ranges at your choice).


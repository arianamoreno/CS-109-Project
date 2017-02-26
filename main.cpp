#include "common.h"
#include "Fact.cpp"
#include "Rule.cpp"
#include "Manipulator.cpp"
using namespace std;
int main(){
	Manipulator M;
	// load facts and rules from file "input.txt"
	M.load();
	// dump facts and rules to   file "output.txt"
	M.dump();
	//query(M.Fact_map,"Father");
	//query(M.Fact_map,"Mother");
	/* string str;
string command;
string rest;
    
	std::cout << "Type a command to start" << endl;
	
    getline(std::cin, str); //get input and store in str
    stringstream iss(str);//create ss object
	getline(iss, command, ' ');//parse first letter for command
	std::string k = getline(iss, rest);//parses rest of string and stores in rest
	ofstream fout;
	fout.open("write.txt");
	string s = "write.txt"
	if(command == "r"){	
		std::cout << "Rule" << k << endl;
			fout << k;
			
			Manipulator.load(s);
		}
		else if(command == "f"){
			std::cout << "Fact" << k << endl;
			fout << k;
			
			Manipulator.load(s);
		}		
		else if(command == "l"){
			std::cout << "load";
			Manipulator.load();}
	/*} else if(command == "d"){
			std::cout << "drop";
			if()
				Fact_Map.find(name)->
				else if ()
					Rule_map.find(name)->
					
			/* determine f or r. find data in vector and delete
			//Fact_map.find(name)->second->vstring.push_back(data);
		}
		
		else if(command == "i"){
			std::cout << "issuing query";}
		else if(command == "dump"){
				Manipulator.dump();
				std::cout << "dumped"; 
				//wrtieFile << std::flush ;} //print all changes to sri file}
		}else{ std::cout << "command not found";}
	return 0; */
}

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]){
	string url, result = "";
	// getline(cin, url);
	url = argv[1];
	
	for(int ind = 0; ind < url.size() - 1; ind++){
		result += url[ind];
		if(isdigit(url[ind]) && url[ind + 1] == '/'){
			result += url[ind + 1];
			break;
		}
	}
	
	cout << result;
}
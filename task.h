#pragma once

#include <string>

class Task {
public:
	Task();
	int deleteTask();
	int setGitUrl(std::string url);
	std::string getGitUrl();
		
private:
	std::string gitUrl;
	int taskID; // will be a randomly assigned and unique number
		
}

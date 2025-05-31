#include <string>
#include <ctime>
#include <iostream>

class Process {
private:
    int pid;
    std::string name;
    std::time_t creationTime;
    int totalLines;
    int currentLine;

public:
    Process(int pid, const std::string& name, int totalLines)
        : pid(pid), name(name), totalLines(totalLines), currentLine(0) {
        creationTime = std::time(nullptr);
    }

    int getPID() const { return pid; }
    std::string getName() const { return name; }
    std::time_t getCreationTime() const { return creationTime; }
    int getTotalLines() const { return totalLines; }
    int getCurrentLine() const { return currentLine; }

    void executeNextLine() {
        if (currentLine < totalLines)
            ++currentLine;
    }

    void printCurrentLine() const {
        std::cout << "Process [" << pid << "] - Current Line: " << currentLine << std::endl;
    }
};
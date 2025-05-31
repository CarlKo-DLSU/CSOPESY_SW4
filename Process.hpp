#include <string>
#include <chrono>
#include <ctime>

class Process {
private:
    int pid;
    std::string name;
    std::time_t creationTime;
    int totalLines;
    int currentLine;

public:
    Process(int pid, const std::string& name, int totalLines);

    int getPID() const;
    std::string getName() const;
    std::time_t getCreationTime() const;
    int getTotalLines() const;
    int getCurrentLine() const;

    void executeNextLine(); // Advances currentLine by 1
    void printCurrentLine() const; // Prints the current line number
};
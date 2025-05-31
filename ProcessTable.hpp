#include "Process.hpp"
#include <unordered_map>

class ProcessTable {
private:
    std::unordered_map<int, Process> processMap; // PID -> Process

public:
    void addProcess(const Process& process);
    Process* getProcess(int pid); // Returns pointer to allow modification
    bool removeProcess(int pid);
    bool contains(int pid) const;
};
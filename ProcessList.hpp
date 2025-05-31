#include "Process.hpp"
#include <vector>

class ProcessList {
private:
    std::vector<Process> processes;

public:
    void addProcess(const Process& process);
    const std::vector<Process>& getProcesses() const;

    // Traverse and perform an action on each process
    void traverseProcesses(void (*action)(const Process&)) const;
};
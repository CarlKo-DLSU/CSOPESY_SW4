#include "Process.hpp"
#include <vector>
#include <functional>

class ProcessList {
private:
    std::vector<Process> processes;

public:
    void addProcess(const Process& process) {
        processes.push_back(process);
    }

    const std::vector<Process>& getProcesses() const {
        return processes;
    }

    void traverseProcesses(const std::function<void(const Process&)>& action) const {
        for (const auto& process : processes) {
            action(process);
        }
    }
};
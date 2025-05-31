#include "Process.hpp"
#include <unordered_map>

class ProcessTable {
private:
    std::unordered_map<int, Process> processMap; // PID -> Process

public:
    void addProcess(const Process& process) {
        processMap[process.getPID()] = process;
    }

    Process* getProcess(int pid) {
        auto it = processMap.find(pid);
        if (it != processMap.end()) {
            return &it->second;
        }
        return nullptr;
    }

    bool removeProcess(int pid) {
        return processMap.erase(pid) > 0;
    }

    bool contains(int pid) const {
        return processMap.find(pid) != processMap.end();
    }
};
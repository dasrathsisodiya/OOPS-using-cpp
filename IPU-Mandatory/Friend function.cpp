#include <iostream>
using namespace std;

class Memory;  

class CPU
{
private:
    float cpuUtilization;

public:
    CPU(float cpu)
    {
        cpuUtilization = cpu;
    }

    
    friend void checkTask(CPU, Memory);
};

class Memory
{
private:
    float memoryUtilization;

public:
    Memory(float memory)
    {
        memoryUtilization = memory;
    }

    
    friend void checkTask(CPU, Memory);
};


void checkTask(CPU c, Memory m)
{
    if (c.cpuUtilization < m.memoryUtilization)
    {
        cout << "CPU-intensive task may be started." << endl;
    }
    else if (m.memoryUtilization < c.cpuUtilization)
    {
        cout << "Memory-intensive task may be started." << endl;
    }
    else
    {
        cout << "CPU and Memory utilization are equal." << endl;
    }
}

int main()
{
    float cpu, memory;

    cout << "Enter CPU utilization: ";
    cin >> cpu;

    cout << "Enter Memory utilization: ";
    cin >> memory;

    CPU c(cpu);
    Memory m(memory);

    checkTask(c, m);

    return 0;
}

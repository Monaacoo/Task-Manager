#ifndef TASK_H
#define TASK_H

#include <string>
#include <vector>

struct Task {
    std::string title;
    bool completed;
};

void addTask(std::vector<Task>& tasks);
void listTasks(const std::vector<Task>& tasks);
void completeTask(std::vector<Task>& tasks);
void removeTask(std::vector<Task>& tasks);

#endif
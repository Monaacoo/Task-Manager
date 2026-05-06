#include "task.h"
#include <iostream>

void addTask(std::vector<Task>& tasks) {
    std::string title;
    std::cout << "Enter task title: ";
    std::cin.ignore();
    std::getline(std::cin, title);

    tasks.push_back({title, false});
    std::cout << "Task added!\n";
}

void listTasks(const std::vector<Task>& tasks) {
    std::cout << "\n--- Task List ---\n";
    for (size_t i = 0; i < tasks.size(); i++) {
        std::cout << i << " - " << tasks[i].title
                  << " [" << (tasks[i].completed ? "Done" : "Pending") << "]\n";
    }
}

void completeTask(std::vector<Task>& tasks) {
    int index;
    std::cout << "Enter task index: ";
    std::cin >> index;

    if (index >= 0 && index < tasks.size()) {
        tasks[index].completed = true;
        std::cout << "Task completed!\n";
    } else {
        std::cout << "Invalid index\n";
    }
}

void removeTask(std::vector<Task>& tasks) {
    int index;
    std::cout << "Enter task index: ";
    std::cin >> index;

    if (index >= 0 && index < tasks.size()) {
        tasks.erase(tasks.begin() + index);
        std::cout << "Task removed!\n";
    } else {
        std::cout << "Invalid index\n";
    }
}
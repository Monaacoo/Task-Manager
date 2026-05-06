#include <iostream>
#include <vector>
#include "task.h"

int main() {
    std::vector<Task> tasks;
    int choice;

    do {
        std::cout << "\n1. Add Task\n2. List Tasks\n3. Complete Task\n4. Remove Task\n0. Exit\nChoice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: addTask(tasks); break;
            case 2: listTasks(tasks); break;
            case 3: completeTask(tasks); break;
            case 4: removeTask(tasks); break;
        }

    } while (choice != 0);

    return 0;
}
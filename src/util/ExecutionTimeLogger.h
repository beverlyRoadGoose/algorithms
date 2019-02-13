//
// Created by Oluwatobi Adeyinka on 2019-02-13.
//

#ifndef ALGORITHMS_EXECUTION_TIME_LOGGER_H
#define ALGORITHMS_EXECUTION_TIME_LOGGER_H

#include <string>
#include <chrono>
#include <iostream>

class ExecutionTimeLogger {
private:
  std::string processDescription;
  std::chrono::high_resolution_clock::time_point startTime;
  std::chrono::high_resolution_clock::time_point endTime;
public:
  explicit ExecutionTimeLogger(std::string & processDescription);
  void startProcess();
  void finishProcess();
};

ExecutionTimeLogger::ExecutionTimeLogger(std::string & processDescription) {
  this->processDescription = processDescription;
}

void ExecutionTimeLogger::startProcess() {
  std::cout << "Starting process: " << processDescription;
  this->startTime = std::chrono::high_resolution_clock::now();
}

void ExecutionTimeLogger::finishProcess() {
  this->endTime = std::chrono::high_resolution_clock::now();
  std::cout << "\nFinished process: " << processDescription;
  std::cout << "\nDuration: " << std::chrono::duration_cast<std::chrono::microseconds>(endTime - startTime).count() << " micro secs.\n";
}

#endif //ALGORITHMS_EXECUTION_TIME_LOGGER_H

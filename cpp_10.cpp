// Fresh business scenario to apply inheritance , polymorphism to emp based organization scenario.
// Create Emp based organization structure --- Emp , Mgr , Worker
// 10.1 Emp state--- id(int), name, deptId , basicSalary(double)
// Accept all of above in constructor arguments.
// Methods ---
// 10.2. Compute net salary ---ret 0
// (eg : public double computeNetSalary(){return 0;})
// 10.3 Mgr state ---id,name,basic,deptId , perfBonus
// Add suitable constructor
// Methods ----
// 1. Compute net salary (formula: basic+perfBonus) -- override computeNetSalary
// 10.4 Worker state --id,name,basic,deptId,hoursWorked,hourlyRate
// Methods:
// 1. Compute net salary (formula: = basic+ (hoursWorked*hourlyRate) --override computeNetSalary
// 2. Get hrlyRate of the worker -- add a new method to return hourly rate of a worker.(getter)
// Create suitable array to store organization details.
// Provide following options
// 1. Hire Manager
// I/P : all manager details
// 2. Hire Worker 
// I/P : all worker details
// 3. Display information of all employees net salary (by invoking computeNetSal), 
// 4. Exit

#include <iostream>

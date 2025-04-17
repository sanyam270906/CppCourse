#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string name[100]; int id[100]; int salary[100]; int count = 0; string er;

void showMenu(){                                                //Menu
    cout<<"\033[1;34m===============\033[0m \033[1;32mEMPLOYEE SYSTEM\033[0m \033[1;34m===============\033[0m\n";
    cout<<"\033[1;33m1. Add New Employee\033[0m\n";
    cout<<"\033[1;33m2. Display All Employees\033[0m\n";
    cout<<"\033[1;33m3. Search By ID\033[0m\n";
    cout<<"\033[1;33m4. Show Average Salary\033[0m\n";
    cout<<"\033[1;33m5. Show Highest Salary\033[0m\n";
    cout<<"\033[1;33m6. Exit\033[0m\n";
    cout<<"\033[1;34m=================================================\033[0m\n";
}

void addEmployee(){                                             //Add Employee           
    for(int i = 0; i < 100; i++){
        cout<<"\033[1;32mType the details: \033[0m\n";
        cout<<"\033[1;35mName: \033[0m";
        cin.ignore();
        getline(cin, name[i]);
        for(;;){
        cout<<"\033[1;35mEmployee ID: \033[0m";
        cin>>id[i];
            if(id[i] >= 1000 && id[i]<= 9999){
            break;
            }
            else{ 
        cout<<"	\033[1;31mType a valid 4-digit ID!\033[0m\n";
            }
        }
        cout<<"\033[1;35mSalary: \033[0m";
        cin>>salary[i];
        count++;   
        cout<<"\033[1;33mDo you wish to add another employee?\033[0m[\033[1;32myes\033[0m/\033[1;31mno\033[0m]\n";
        string yn;
        cin>>yn;
        if(yn == "no"){
            cout<<"You have successfully added the employee(s) to the system!\n";
            break;
        }
    }
}

void displayEmployee(){                                         //Display Employee
            cout<<left;
            cout<<"\033[1;34m=================================================\033[0m\n";
            cout<<setw(5)<<"No.";
            cout<<setw(20)<<"Name";
            cout<<setw(12)<<"ID";
            cout<<setw(10)<<"Salary($)"<<endl;
            cout<<"\033[1;34m=================================================\033[0m\n";
    for(int i = 0; i < count; i++){
            cout<<setw(5)<<i+1;
            cout<<setw(20)<<name[i];
            cout<<setw(12)<<id[i];
            cout<<setw(10)<<salary[i]<<endl;
        
    }
}

void searchByID(){                                              //Search By ID
    int idt; bool found = false;
    cout<<"\033[1;32mType the ID: \033[0m";
    cin>>idt;
    for(int i = 0; i < count; i++){
        if(idt == id[i]){
            cout<<"\033[1;33mName: \033[0m"<<name[i]<<"\033[1;33m  Employee ID: \033[0m"<<id[i]<<"\033[1;33m    Salary: \033[0m"<<salary[i]<<endl;
            found = true;
        }    
    }   
        if(!found){
            cout<<"\033[1;31mNo employee found with that ID!\033[0m\n";
        }

}
void showAverage(){                                             //Show Average
    int sum = 0; int average;
        for(int i = 0; i < count; i++){
                sum += salary[i];
        }
        average = sum/count;
        cout<<"\033[1;33mThe average salary of an employee is $\033[0m"<<average<<endl;    
}

void showHighest(){                                             //Show Highest
    int highest = salary[0]; string highestName = name[0];
    for(int i = 0; i < count; i++){
            if(salary[i] > highest){
                highest = salary[i]; highestName = name[i];
        }
    }
    cout<<"\033[1;33mThe highest salary of an employee is $\033[0m"<<highest<<"\033[1;33m, given to \033[0m"<<highestName<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    for(;;){
        
        showMenu(); int option; 
        cout<<"\033[1;31mChoose an Option: \033[0m";
        cin>>option;

        switch(option){
            case 1:
            addEmployee();
            system("cls");
            for(;;){                                   //Return or Exit 
                cout<<"\033[1;32mType [return] to go back...\033[0m\n";
                cin>>er;
                if(er == "return"){
                    break;
                }else{
                    cout<<"\033[1;31mInvalid!\033[0m\n";
                }
            }
            break;

            case 2: 
            displayEmployee(); 
            for(;;){                                   //Return or Exit 
                cout<<"\033[1;32mType [return] to go back...\033[0m\n";
                cin>>er;
                if(er == "return"){
                    break;
                }else{
                    cout<<"\033[1;31mInvalid!\033[0m\n";
                }
            }
            break;

            case 3:
            searchByID();
            for(;;){                                   //Return or Exit 
                cout<<"\033[1;32mType [return] to go back...\033[0m\n";
                cin>>er;
                if(er == "return"){
                    break;
                }else{
                    cout<<"\033[1;31mInvalid!\033[0m\n";
                }
            }
            break;

            case 4: 
            showAverage();
            for(;;){                                   //Return or Exit 
                cout<<"\033[1;32mType [return] to go back...\033[0m\n";
                cin>>er;
                if(er == "return"){
                    break;
                }else{
                    cout<<"\033[1;31mInvalid!\033[0m\n";
                }
            }
            break;

            case 5:
            showHighest();
            for(;;){                                   //Return or Exit 
                cout<<"\033[1;32mType [return] to go back...\033[0m\n";
                cin>>er;
                if(er == "return"){
                    break;
                }else{
                    cout<<"\033[1;31mInvalid!\033[0m\n";
                }
            }
            break;

            case 6: 
            cout<<"\033[1;32mYou have exited the system!\033[0m\n";
            return 0;
            break;
            
            default: 
            cout<<"\033[1;31mChoose a valid option!\033[0m\n";
            break;
        }
    
    }

    return 0;
}
//

#include "lab5.h"


void mathCalculator()
{

    string command;
    double argument1, argument2, answer;
    
    cin >> command >> argument1;

    cout << "Command    Argument1   [Argument2]     Answer"<< endl;
    
    while(!cin.fail())//test
    {
        //process

        if(command == "exponential")
        {
            answer = exp(argument1);
            cout << command << " \t" << argument1 << " \t\t\t" <<  answer << endl;
        }
        else if(command == "natural-log")
        {
            answer = log(argument1);
            cout << command << " \t" << argument1 << " \t\t\t" <<  answer << endl;
        }
        else if(command == "log")
        {
            answer = log10(argument1);
            cout << command << " \t" << argument1 << " \t\t\t" <<  answer << endl;
        }
        else if(command == "raised-to-the-power")
        {
            cin >>  argument2;
            answer = pow(argument1, argument2);
            cout << command << " \t" << argument1 << " \t\t\t" << argument2 <<
            "\t\t\t"<<  answer << endl;
        }
        else if(command == "square-root")
        {
            answer = sqrt(argument1);
            cout << command << " \t" << argument1 << " \t\t\t" <<  answer << endl;
        }
        else if(command ==  "ceiling")
        {
            answer = ceil(argument1);
            cout << command << " \t" << argument1 << " \t\t\t" <<  answer << endl;
        }
        else if(command ==  "floor")
        {
            answer = floor(argument1);
            cout << command << " \t" << argument1 << " \t\t\t" <<  answer << endl;
        }
        else
        {
            cout << "Unknown command:" << " " << command << endl;
        }
        
        cin >> command;//re-prime
        cin >> argument1;
    }
    
}

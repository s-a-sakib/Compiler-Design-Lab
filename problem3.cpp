/*
    Write a program that abbreviates the following code:
    CSE-3141 as Computer Science & Engineering, 3rd Year, 1st Semester, Compiler Design, Theory.
*/ 


#include <bits/stdc++.h>
using namespace std;

string dept(string str){
    map < string, string > departments;
    departments.insert({"CSE", "Computer Science & Engineering"});
    departments.insert({"EEE", "Electircal & Electronic Engineering"});
    departments.insert({"ICE", "Information & Communication Engineering"});
    departments.insert({"Chem", "Chemistry"});
    departments.insert({"Math", "Mathematics"});
    departments.insert({"ENG", "English"});
    departments.insert({"STAT","Statistics"});

    return departments[str];
}

string year(char c){

    map < char , string > years;
    years['1'] = "1st Year";
    years['2'] = "2nd Year";
    years['3'] = "3rd Year";
    years['4'] = "4th Year";

    return years[c];
}

string semester(char c){
    if(c == '1') return "First Semester";
    else if(c == '2') return "Second Semester";
}

string Type(char c){
    if(c == '1') return "Theory";
    else if(c == '2') return "Lab";
}


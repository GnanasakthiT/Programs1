//g++ file.cpp -o file.exe
//./file.exe

#include <string>
#include <iostream>
#include <fstream>
#include <ctime>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>

using namespace std;

// class bank{
//     private:
//         int treasury;
    
//     public:
//         void setter(int amount){
//             treasury = amount;
//         }

//         void getter(){
//             cout << treasury;
//         }
    
// };

// class mother{
//     public:
//     void mout(){
//         cout << "From mother class" << endl;
//     }
//     protected:
//         int income = 100;
// };

// class father{
//     public:
//     void fout(){
//         cout << "From father class" << endl;
//     }
// };

// class son : public mother, public father{
//     public:
//     void sout(){
//         cout << "From son class" << endl << income << endl;
//     }
// };


// class car{
//     public:
//         int year;
//         string model;
//         void FullThrottle(string comp);
//         car(){
//             year = 2009;
//             model = "Model T";
//         }
//         car(int x, string y, string z){
//             year = x;
//             model = y;
//             FullThrottle(z);
//         }
//     protected:
//         int chasisno;
// };

// void car :: FullThrottle(string comp){
//     cout << "Your " << comp << " is going in its maximum speed";
// }


// struct stud{
//     string name;
//     int age;
//     char grade;
// };

// template <typename t>
// class stud{
//     public:
//         t details;
//     stud(t val){
//         details = val;
//     }
//     void show(){
//         cout << details << endl;
//     }
// };

// template <typename T>
// T add(T a, T b){
//     return a + b;
// }




int main(){

    cout << "From learning file" << endl;
    cout << "Other codes are commented" << endl;
    // map<int, int> num = {{1,11},{2,22},{3,33}};
    // num.insert({4,44});
    // num[5] = 55;
    // for(auto ele : num){
    //     cout << ele.first << "-" << ele.second << endl;
    // }
    // set<int> uniques;
    // int arr[12] = {1,2,3,1,2,3,1,2,3,1,2,3};
    // for(int x : arr){
    //     uniques.insert(x);
    // }
    // for(int y : uniques){
    //     cout << y << "-";
    // }
    // deque<int> yep = {5,23,56,4,1,78,5,2,98,556,565,165};
    // yep.push_front(23);
    // yep.pop_back();
    // yep.push_back(34);
    // yep.pop_front();
    // for(int m : yep){
    //     cout << m << "-";
    // }
    // queue<int> market;
    // market.push(23);
    // market.push(34);
    // market.push(93);
    // market.push(83);
    // market.pop();
    // cout << market.front() << "..." << market.back();
    // stack<char> braces;
    // braces.push('a');
    // braces.push('b');
    // braces.push('c');
    // cout << braces.top();

//     list<int> height = {3,4,5,6,7,8};
//     cout << height.front() << endl;
//     }
//     cout << endl;
//     cout << "Front: " << ages.front() << endl;
//     ages.pop_back();
//     cout << "Back: " << ages.back();
    
//     try
//     {
//         int x = 15;
//         if(x < 18){
//             throw x;
//         }
//     }
//     catch(int err)
//     {
//         cout << "Error " << err ;
//     }

//     time_t curtime;
//     time(&curtime);
//     cout << ctime(&curtime);
        
//     ifstream myf("Text.txt");
//     string line;
//     while(getline(myf, line)){
//         cout << line << endl;
//     }
//     myf.close();

//     ofstream myf("Text.txt");
//     myf << "Insert this new content";
//     myf.close();

//     cout << add<int>(10, 55) << endl;
//     stud<int> xyz(30);
//     xyz.show();

//     bank yesbank;
//     yesbank.setter(1500);
//     yesbank.getter();

//     son myson;
//     myson.fout();
//     myson.mout();
//     myson.sout();

//     car mycar(2008, "series 7", "bmw");
//     car BMW;
//     BMW.model = "X5";
//     BMW.year =  2005;
//     BMW.FullThrottle("BMW");

//     const float pi = 3.1428;
//     cout << "Hello world" << endl;
//     cout << 9 * 8 << endl;
//     bool flag = false;
//     cout << flag << endl << "Enter a value: ";
//     int val;
//     cin >> val;
//     int num1, num2;
//     cout << "Enter value 1: ";
//     cin >> num1;
//     cout << "Enter value 2: ";
//     cin >> num2;
//     cout << num1 + num2;
//     string str;
//     cout << "Enter a string: ";
//     getline(cin, str);
//     cout << str << endl;
    
//    cout << boolalpha;
//    cout << true;
//    cout << noboolalpha;
//    cout << true;
   
//     stud myClass;
//     myClass.age = 10;
//     myClass.name = "Govindan";
//     myClass.grade = 'A';

    return 0;
}
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string question;
    int answer;
    
    // Seed the random number generator with the current time
    srand (time(NULL));
    
    //propt to ask question
    cout << "Ask a question : ";
    getline (cin, question);
    
    // Generate a random answer
    answer = rand() % 10;
    
    // Output the answer based on the random number
    switch(answer) {
        case 0: 
            cout <<"It is certain." << endl;
            break;
        case 1: 
            cout <<"It is decidedly so." << endl;
            break;
        case 2: 
            cout <<"Without a doubt." << endl;
            break;
        case 3: 
            cout <<"Yes - definitely." << endl;
            break;
        case 4: 
            cout <<"You may rely on it." << endl;
            break;
        case 5: 
            cout <<"As I see it, yes." << endl;
            break;
        case 6: 
            cout <<"Most likely." << endl;
            break;
        case 7: 
            cout <<"Outlook good." << endl;
            break;
        case 8: 
            cout <<"Yes." << endl;
            break;
        case 9: 
            cout <<"Signs point to yes." << endl;
            break;
        default: 
            cout <<"Invalid for this universe. Try in another universe" << endl;
            break;
    }
    
    return 0;
}

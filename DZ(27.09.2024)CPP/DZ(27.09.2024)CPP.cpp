#include <iostream>
#include <string>

using namespace std;

int main()
{
    
    string txt[5] = {
        "Are you feel good today? (Yes/No)",
        "Are you like travel? (Yes/No)",
        "Are you like sport? (Yes/No)",
        "Are you like read books? (Yes/No)",
        "Are you like cook? (Yes/No)"
    };
    int sc[5] = { 1, 1, 1, 1, 1 };
    string answer;
    int totalSc = 0;
    for (int i = 0; i < 5; i++) {
        cout << txt[i] << endl;
        cin >> answer;
        if (answer == "yes" || answer == "Yes") {
            totalSc += sc[i]; 
        }
    }
    cout << "You finish test, Your result: " << totalSc << " of 5." << endl;
}


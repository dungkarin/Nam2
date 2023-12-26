#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

bool dd[1000];
int dem = 1, n;
int a[1000][1000];
int b[1000];

void duyetDoThi(int i) {
    for (int j = 1; j <= n; j++) {
        if (a[i][j] != 0 && dd[j] == 0) {
            dd[j] = 1;
            b[dem++] = j;
            duyetDoThi(j);
        }
    }
}

void inDoThi(ofstream& outputFile) {
    for (int i = 0; i < n; i++) {
        outputFile << b[i] << " ";
    }
}

int main() {
    ifstream inputFile("input.txt"); // Open the input file
    if (!inputFile.is_open()) {
        cout << "Failed to open input file." << endl;
        return 1;
    }

    inputFile >> n;
    cout << "Ma tran do thi: \n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            inputFile >> a[i][j];
    }

    inputFile.close(); // Close the input file

    ofstream outputFile("output.txt"); // Create the output file
    if (!outputFile.is_open()) {
        cout << "Failed to create output file." << endl;
        return 1;
    }

    cout << "\n\nDuyet do thi: ";
    b[0] = 1;
    dd[1] = 1;
    duyetDoThi(1);
    inDoThi(outputFile); // Write the output to the file

    outputFile.close(); // Close the output file

    return 0;
}

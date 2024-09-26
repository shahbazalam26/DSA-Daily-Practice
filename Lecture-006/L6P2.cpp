#include <iostream>
#include <bitset>
using namespace std;

// Function to convert negative number to binary using two's complement
string negativeToBinary(int num) {
    if (num >= 0) {
        // If num is non-negative, return its binary representation
        return bitset<32>(num).to_string();
    } else {
        // For negative numbers, convert to two's complement manually
        // Ensure num is within 32-bit range
        unsigned int positiveNum = static_cast<unsigned int>(-num);
        bitset<32> bs(positiveNum);
        bs.flip();  // Flip the bits
        bs = bs << 1;  // Add 1 to complete two's complement
        return bs.to_string();
    }
}

int main() {
    int num;

    // Input the negative number
    cout << "Enter a negative number: ";
    cin >> num;

    // Convert negative number to binary using two's complement
    string binary = negativeToBinary(num);

    // Display the binary representation
    cout << "Binary representation of " << num << " is: " << binary << endl;

    return 0;
}

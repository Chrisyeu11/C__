    #include<iostream>
    using namespace std;

    int main() {
        int num = 3568797;
        int digits[7];
        int sum = 0;

        // Store each digit of the number in an array
        for(int i = 0; i < 7; i++) {
            digits[i] = num % 10;
            num /= 10;
        }

        // Calculate the sum of the digits
        for(int i = 0; i < 7; i++) {
            sum += digits[i];
        }

        // Output the sum of the digits
        cout << "Sum of the digits: " << sum << endl;

        return 0;
    }
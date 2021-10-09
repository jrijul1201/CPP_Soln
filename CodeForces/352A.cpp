// Question

// Jeff's got n cards, each card contains either digit 0, or digit 5. Jeff can choose several cards and put them in a line so that he gets some number. What is the largest possible number divisible by 90 Jeff can make from the cards he's got?

// Jeff must make the number without leading zero. At that, we assume that number 0 doesn't contain any leading zeroes. Jeff doesn't have to use all the cards.

// Input
// The first line contains integer n (1 ≤ n ≤ 103). The next line contains n integers a1, a2, ..., an (ai = 0 or ai = 5). Number ai represents the digit that is written on the i-th card.

// Output
// In a single line print the answer to the problem — the maximum number, divisible by 90. If you can't make any divisible by 90 number from the cards, print -1.


// Solution

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int a;
    int number_of_fives(0);
    int number_of_zeros(0);
    scanf("%d", &n);

    int i = 0;
    while(i < n){
        scanf("%d", &a);
        if (t == 0)
            number_of_zeros++;
        else if (t == 5)
            number_of_fives++
        i++;
    }

    if (number_of_zeros == 0)
    {
        // we can't make any number which is divisible by 90 from the cards
        cout << -1 << endl
    }
    else if (number_of_fives < 9)
    {
        // it is not possible to make any number if there are less than 9 cards onumber_of_fives 5 
        cout << 0 << endl;
    }
    else
    {
        number_of_fives -= number_of_fives % 9;
        for (int i = 0; i < number_of_fives; i++)
            cout << 5;
        for (int i = 0; i < number_of_zeros; i++) 
            cout << 0;
    }

    return 0;
}
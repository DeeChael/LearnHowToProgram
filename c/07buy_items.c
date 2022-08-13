#include <stdio.h>

// This is extended from 05

/*
 * The prize of pen is 5 cny.
 * The prize of notebook is 3 cny.
 * If the amount of notebooks you want to buy is larger than 20, you will have a discount of 90%.
 * If the amount of pens you want to buy is larger than 10, you will have a discount of 95%.
 * Question: How much if you want to buy 57 notebooks and 24 pens?
 */

int main07() {
    const int prize_of_pen = 5;
    const int prize_of_notebook = 3;
    int amount_of_pen = 24;
    int amount_of_notebook = 57;
    double total = 0;
    if (amount_of_pen >= 10) {
        total += amount_of_pen * prize_of_pen * 0.95;
    } else {
        total += amount_of_pen * prize_of_pen;
    }
    if (amount_of_notebook >= 20) {
        total += amount_of_notebook * prize_of_notebook * 0.90;
    } else {
        total += amount_of_notebook * prize_of_notebook;
    }
    printf("You should pay %.2f\n", total);
    return 0;
}
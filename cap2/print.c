/* 2.26 (Separating Digits in an Integer) Write a program that inputs one five-digit
number, separates the number into its individual digits and displays the digits sepa-
rated from one another by three spaces each. [Hint: Use combinations of integer di-
vision and the remainder operation.] For example, if the user types in 42139, the
program should display
4 2 1 3 9  */



int main(int argc, char const *argv[])
{
    int num = 42139;

    int dig5 = num / 10000;

    int prox4 = num % 10000;
    int dig4 = prox4 / 1000;

    int prox3 = prox4 % 1000;
    int dig3 = prox3 / 100;

    int prox2 = prox3 % 100;
    int dig2 = prox2 / 10;

    int prox1 = prox2 % 10;
    int dig1 = prox1 / 1;

    printf( "%d   %d   %d   %d   %d\n", dig5, dig4, dig3, dig2, dig1);

    return 0;
}

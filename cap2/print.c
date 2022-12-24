/* 2.29 (Sort in Ascending Order) Write a program that inputs three different numbers
from the user. Display the numbers in increasing order. Recall that an if statement’s
body can contain more than one statement. Prove that your script works by running
it on all six possible orderings of the numbers. Does your script work with duplicate
numbers? [This is challenging. In later chapters you’ll do this more conveniently and
with many more numbers.]
 */

int main(int argc, char const *argv[])
{
    int a, b, c, aux;
    puts("Input 3 numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a >= b){
        aux = a;
        a = b;
        b = aux;
    }

    if(b >= c){
        aux = c;
        c = b;
        b = aux;
    }

    if(a >= b){
        aux = a;
        a = b;
        b = aux;
    }

    

    printf("Os valores em ordem são %d %d %d", a, b, c);



    return 0;
}

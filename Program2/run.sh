g++ -W -Wall -Werror -g -std=c++11 main.cpp -o main.out
./main.out

for i in {1..6}
do
    g++ -W -Wall -Werror -g -std=c++11 test_infix_to_postfix.cpp -o inf2post.out
    ./inf2post.out infix$i.txt
done

for i in {1..7}
do
    g++ -W -Wall -Werror -g -std=c++11 test_postfix.cpp -o rpn.out
    ./rpn.out postfix$i.txt
done
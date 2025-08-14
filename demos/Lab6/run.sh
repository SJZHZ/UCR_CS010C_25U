# usage: bash run.sh > demo.log

# for Amazon Linux 2
# sudo yum -y remove java-11-amazon-corretto-headless golang-bin docker
# sudo debuginfo-install $(rpm -q libgcc libstdc++)

# for Amazon Linux 2023
# sudo dnf debuginfo-install glibc-2.34-52.amzn2023.0.10.x86_64 libgcc-11.4.1-2.amzn2023.0.2.x86_64 libstdc++-11.4.1-2.amzn2023.0.2.x86_64

# If you don't remember, try both commands above.

g++ -W -Wall -Werror -g -std=c++14 main-hard-code.cpp 
./a.out
gdb -x test_gdb.txt ./a.out
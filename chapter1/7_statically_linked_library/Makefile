main: main.o libab.a
	gcc main.o -o main -L. -lab

# 编译主程序时，将链接器参数设置为-L.，就可以将当前目录作为链接库的搜索路径。
# -lab指链接名为ab 的库。此处并没有写静态库的完整文件名，因为GCC编译器会自动根据这个基本名称，加上前缀“lib”和扩展名“.a”去 搜索

main.o: main.c
	gcc -c main.c -o main.o

libab.a: a.o b.o
	ar rcs libab.a a.o b.o

# 通过ar归档命令，将目标文件a.o和 b.o打包为静态库。
# 这里的ar命令有三组参数，分别:
# rcs
# 输出的静态库（归档）文件名
# 输入的目标文件名
# 其中，rcs是三个参数的开关：r代表将目标文件归档，c代表创建新归档文件时不输出警告信息，s代表要为归档创建索引。
# 如果想指定链接库的完整名称，可以在名称前加一个冒号，如-l:libab.a。

a.o: a.c
	gcc -c a.c -o a.o

b.o: b.c
	gcc -c b.c -o b.o
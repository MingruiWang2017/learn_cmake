# 使用自己编译的Boost库
# BOOST_DIR = $${HOME}/workspace/boost
# BOOST_LIB_DIR = $${BOOST_DIR}/stage/lib 

# CXXFLAGS = -I $(BOOST_DIR)
# LDFLAGS = -L $(BOOST_LIB_DIR) -Wl,-R$(BOOST_LIB_DIR)

# 注释掉上面的内容，则会使用系统安装的boost二进制库

all: static_boost shared_boost

static_boost: main.cpp
	g++ main.cpp $(CXXFLAGS) $(LDFLAGS) -l:libboost_regex.a -o static_boost
# 由于链接库时，-l参数默认接受的是库的名称，而非文件名。
# 所以，链接静态库libboost_regex.a或动态库libboost_regex.so时，
# 应该指定参数-lboost_regex，这就冲突了，此时 GCC会优先链接动态库。
# 为了能够实现对Boost静态库的链接，这里需要使用-l:加静态库文件全名的参数形式。

shared_boost: main.cpp
	g++ main.cpp $(CXXFLAGS) $(LDFLAGS) -lboost_regex -o shared_boost

clean:
	rm *_boost || true
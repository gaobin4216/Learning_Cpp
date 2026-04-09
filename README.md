# 打开工作包后，单独打开cmake和normal两个文件

**建议全部使用cmake，不要再一个个放包的路径，配置来配置去的了**

## windows上运行Cpp
### 配置说明
- 安装msys2，使用pacman安装mingw和GCC，也可以安装第三方库，并使用cmake构建，不过使用make时命令是mingw32-make
- 环境变量设置为C:/msys64/mingw64/bin

注意：vcpkg和vs搭配比较好，和vscode就算了，vcpkg在windows上是和msvc绑定的，编译也要使用windows版的cmake，若使用g++，库文件调不到，所以平台之间还是不能杂交。

### 最佳搭配：
Visiual Studio + vcpkg + windows版cmake（编译vcpkg）   
Vscode + msys2的mingw的g++和gdb + cmake，pacman安装第三方库，工具链选择msys2下mingw的gcc就行。


## Linux运行Cpp
    一个文件夹下包含include、src、bulid、CmakeLists.txt
    在bulid下先cmake..，然后make，然后运行生成的可执行文件
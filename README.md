# 配置说明
- 安装msys2，使用pacman安装mingw和GCC
- 环境变量设置为C:/msys64/mingw64/bin，不要ucrt64
- vcpkg和vs搭配比较好，和vscode就算了，vcpkg在windows上是和msvc绑定的，编译也要使用windows版的cmake，若使用g++，库文件调不到，所以平台之间还是不能杂交。

### 最佳搭配：
Visiual Studio + vcpkg + windows版cmake（编译vcpkg）   
Vscode + msys2的mingw的g++和gdb + cmake，不使用三方库


# Cmake的逻辑
    一个文件夹下包含include、src、bulid、CmakeLists.txt
    在bulid下先cmake..，然后make，然后运行生成的可执行文件
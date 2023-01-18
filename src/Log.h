// demonstrate how header files are processed by the compiler
// NOTE: the linker only links object files
// resolve 'duplicate symbol' error by removing func definition and only declaring it
void Log(const char * message);

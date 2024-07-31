#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

void replaceStringInFile(const std::string &filename, const std::string &s1, const std::string &s2) {
    // 打開輸入文件
    std::ifstream inFile(filename.c_str());  // 使用 c_str() 轉換 std::string 為 const char*
    if (!inFile) {
        std::cerr << "Error: Could not open the file " << filename << std::endl;
        return;
    }

    std::stringstream buffer;
    buffer << inFile.rdbuf();
    std::string content = buffer.str();
    inFile.close();

    // 替換字符串
    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos) {
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos += s2.length();
    }

    // 打開輸出文件
    std::ofstream outFile((filename + ".replace").c_str());  // 使用 c_str() 轉換 std::string 為 const char*
    if (!outFile) {
        std::cerr << "Error: Could not create the file " << filename << ".replace" << std::endl;
        return;
    }

    outFile << content;
    outFile.close();
}

int main(int ac, char** av) {
    if (ac != 4) {
        std::cerr << "Usage: " << av[0] << " <filename> <string1> <string2>" << std::endl;
        return 1;
    }

    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    if (s1.empty()) {
        std::cerr << "Error: The string to be replaced (s1) cannot be empty." << std::endl;
        return 1;
    }

    replaceStringInFile(filename, s1, s2);

    return 0;
}

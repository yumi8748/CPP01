/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-chen <yu-chen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 18:00:24 by yu-chen           #+#    #+#             */
/*   Updated: 2024/08/02 14:32:45 by yu-chen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

void replaceStringInFile(const std::string &filename, const std::string &s1, const std::string &s2) {
    std::ifstream inFile(filename.c_str());
    if (!inFile) {
        std::cerr << "Error: Could not open the file " << filename << std::endl;
        return;
    }

    std::stringstream buffer;
    buffer << inFile.rdbuf();
    std::string content = buffer.str();
    inFile.close();

	if (content.find(s1) == std::string::npos) {
		std::cerr << "Error: The string \"" << s1 << "\" was not found in the file " << filename << std::endl;
        return;
    }

    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos) {
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos += s2.length();
    }

    std::ofstream outFile((filename + ".replace").c_str());
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

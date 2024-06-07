/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:33:19 by bszabo            #+#    #+#             */
/*   Updated: 2024/06/07 11:30:48 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

// print an error message to the standard error output
static int error(std::string message) {
	std::cerr << message << std::endl;
	return (1);
}

// replace all occurrences of s1 with s2 in the inputFile and write the result to the outputFile
static void replaceStringInFile(std::ifstream &inputFile, std::ofstream &outputFile,
								std::string s1, std::string s2) {
	if (s1.empty())
		s1 = s2;

	// read the inputFile line by line
	std::string line;
	while (std::getline(inputFile, line)) {
		size_t pos = 0;
		// while s1 is found in the line, replace it with s2
		while (pos = line.find(s1, pos), pos != std::string::npos) {
			std::string newLine = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
			line = newLine;
			pos += s2.length();
		}
		outputFile << line << std::endl;
	}
}

int main(int argc, char *argv[]) {
	if (argc != 4)
		return (error("Invalid number of arguments."));
	
	// open the input file (2 ways)
	std::ifstream inputFile;
	inputFile.open(argv[1]);
	// std::ifstream inputFile(argv[1]);
	if (!inputFile.is_open())
		return (error("Could not open the input file."));

	// open the output file (2 ways)
	std::ofstream outputFile;
	outputFile.open(argv[1] + std::string(".replace"));
	// std::ofstream outputFile(argv[2]);
	if (!outputFile.is_open()) {
		inputFile.close();
		return (error("Could not open the output file."));
	}
	
	replaceStringInFile(inputFile, outputFile, argv[2], argv[3]);

	// close the files
	inputFile.close();
	outputFile.close();
}
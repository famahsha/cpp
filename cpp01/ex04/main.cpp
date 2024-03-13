/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Famahsha < famahsha@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:51:09 by Famahsha          #+#    #+#             */
/*   Updated: 2024/02/20 15:35:30 by Famahsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <fstream>
#include <string>

int	main(int ac, char **av) {
	if (ac != 4) {
		std::cout << "Error: invalid number of arguments" << std::endl;
		return (1);
	}

	std::string filename(av[1]);
	std::string find(av[2]);
	std::string replace(av[3]);
	if (filename.empty() || find.empty() || replace.empty()) {
		std::cout << "Error: empty arguments provided" << std::endl;
		return (2);
	}

	std::ifstream infile(filename);
	std::string content;
	if (infile.is_open()) {
		content.assign((std::istreambuf_iterator<char>(infile)), (std::istreambuf_iterator<char>()));
	} else {
		std::cout << "Error: failed to open input file" << std::endl;
		return (3);
	}
	infile.close();

	std::ofstream outfile(filename.append(".replace"));
	if (outfile.is_open()) {
		size_t pos = 0;
		while (pos != std::string::npos) {
			pos = content.find(find, pos);
			if (pos != std::string::npos) {
				content.erase(pos, find.length());
				content.insert(pos, replace);
			} else {
				outfile << content;
			}
		}
	} else {
		std::cout << "Error: failed to open output file" << std::endl;
		return (4);
	}
	outfile.close();

	return (0);
}

// void replaceStrings(const std::string& filename, const std::string& s1, const std::string& s2) {
//     try {
//         // Read the content of the file
//         std::ifstream inputFile(filename);
//         if (!inputFile.is_open()) {
//             std::cerr << "Error: Unable to open file." << std::endl;
//             return;
//         }
        
//         std::string content((std::istreambuf_iterator<char>(inputFile)),
//                              std::istreambuf_iterator<char>());
        
//         // Perform the replacement
//         size_t pos = 0;
//         while ((pos = content.find(s1, pos)) != std::string::npos) {
//             content.replace(pos, s1.length(), s2);
//             pos += s2.length();
//         }
        
//         // Write the replaced content to a new file
//         std::ofstream outputFile(filename + ".replace");
//         if (!outputFile.is_open()) {
//             std::cerr << "Error: Unable to create output file." << std::endl;
//             return;
//         }
        
//         outputFile << content;
        
//         std::cout << "Replacement completed. Check " << filename << ".replace" << std::endl;
//     } catch (const std::exception& e) {
//         std::cerr << "An error occurred: " << e.what() << std::endl;
//     }
// }

// int main(int argc, char* argv[]) {
//     if (argc != 4) {
//         std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
//         return 1;
//     }
    
//     std::string filename = argv[1];
//     std::string s1 = argv[2];
//     std::string s2 = argv[3];
    
//     replaceStrings(filename, s1, s2);
    
//     return 0;
// }




// int	main(int argc, char **argv)
// {
// 	if(argc != 4)
// 	{
// 		std::cout << "wrong  no of arguments" << std::endl <<
// 		"Usage:\t./filestream <file_name> <search> <replace>" << std::endl;
// 	}
// 	std::string filename = argv[1];
//     std::string s1 = argv[2];
//     std::string s2 = argv[3];
    
//     replaceStrings(filename, s1, s2);

// 	return (0);

// }
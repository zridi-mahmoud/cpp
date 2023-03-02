/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:53:13 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/02 23:51:44 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void replace(std::string *content, size_t pos, long long len, std::string s2)
{
    long long i = 0;
    while (i < len)
    {
        content->erase(pos, 1);
        i++;
    }
    content->insert(pos, s2);
}


int main(int argc, char **argv)
{
    std::string filename;
    if (argc != 4)
    {
        std::cout << "Error: wrong number of arguments" << std::endl;
        return (1);        
    }
    filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    if (s1.empty() || filename.empty())
    {
        std::cout << "Error: empty string" << std::endl;
        return (1);
    }
    std::ifstream ifs(filename);
    if (!ifs.is_open())
    {
        std::cout << "Error: file not found" << std::endl;
        return (1);
    }
    std::string content;
    std::string line;
    while (std::getline(ifs, line))
    {
        content += line;
        if (!ifs.eof())
            content += "\n";
    }
    ifs.close();
    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos)
    {
        replace(&content, pos, s1.length(), s2);
        pos += s2.length();
    }
    try {
        std::ofstream ofs(filename + ".replace");
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
        return (1);
    }
    // ofs << content;
    // ofs.close();
    return (0);
}
    
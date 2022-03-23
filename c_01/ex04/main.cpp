#include <iostream>
#include <fstream>


std::string	ft_sed(std::string buffer, std::string s1, std::string s2)
{
	std::string ret;
	size_t		pos;

	if (s1.empty() || s2.empty())
		return (buffer);
	pos = buffer.find(s1);
	if (pos != std::string::npos)
	{
		while (pos != std::string::npos)
		{
			ret += buffer.substr(0, pos);
			ret += s2;
			buffer.erase(0, pos + s1.length());
			pos = buffer.find(s1);
			if (pos == std::string::npos)
				ret += buffer;
		}
	}
	else
		ret = buffer;
	return (ret);
}

int main(int argc, char **argv)
{
	std::string		buffer;
	std::string		out_name;
	std::ifstream	ifs(argv[1]);

	if (ifs == 0)
	{
		std::cout << "The filename does not exist" << std::endl;
		return (1);
	}
	if (argc != 4)
	{
		std::cout << "You must provide 3 arguments: filename, and two strings" << std::endl;
		return (1);
	}
	out_name = argv[1];
	out_name += ".replace";
	std::ofstream	ofs(out_name);
	while (std::getline(ifs, buffer))
	{
		buffer = ft_sed(buffer, argv[2], argv[3]);
		ofs << buffer << std::endl;
	}
	return (0);
}

#include "SCException.h"
#include <sstream>

SCException::SCException(int line, const char* file) noexcept
	:
	line(line), 
	file(file)
{
}

const char* SCException::what() const noexcept
{
	std::ostringstream oss;
	oss << GetType() << std::endl << GetOriginString();
	whatBuffer = oss.str();
	return whatBuffer.c_str();
}

const char* SCException::GetType() const noexcept
{
	return "SamCam Exception: ";
}

int SCException::GetLine() const noexcept
{
	return line;
}

const std::string& SCException::GetFile() const noexcept
{
	return file;
}

std::string SCException::GetOriginString() const noexcept
{
	std::ostringstream oss;
	oss << "[File] " << file << std::endl << "[Line] " << line; 
	return oss.str();
}

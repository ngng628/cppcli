# pragma once
# include <cassert>
# include <string>
# include <cmath>

namespace Font
{
    namespace Fore
    {
        const std::string Black   = "\e[30m"; 
        const std::string Red     = "\e[31m"; 
        const std::string Green   = "\e[32m"; 
        const std::string Yellow  = "\e[33m"; 
        const std::string Blue    = "\e[34m"; 
        const std::string Magenta = "\e[35m"; 
        const std::string Cyan    = "\e[36m"; 
        const std::string White   = "\e[37m";

        std::string CODE(unsigned int code)
        {
            return "\e[38;5;" + std::to_string(code) + "m";
        }

        std::string RGB(unsigned int red, unsigned int green, unsigned int blue)
        {
            std::string r = std::to_string(red);
            std::string g = std::to_string(green);
            std::string b = std::to_string(blue);
            return "\e[38;2;" + r + ";" + g + ";" + b + "m";
        }

        /// Note: "#FFFFFF" か "FFFFFF" の形式（小文字可能）
        std::string RGB(std::string hex)
        {
            if (hex == "") return "";
            if (hex[0] == '#') hex = hex.substr(1, 6);
            unsigned int rgb = (uint32_t) strtol((const char*) &hex[1], NULL, 16);
            unsigned int red = (rgb >> 16) & 0xFF;
            unsigned int green = (rgb >> 8) & 0xFF;
            unsigned int blue = (rgb >> 0) & 0xFF;
            return RGB(red, green, blue);
        }
    }
    namespace Back
    {
        const std::string Black   = "\e[40m"; 
        const std::string Red     = "\e[41m"; 
        const std::string Green   = "\e[42m"; 
        const std::string Yellow  = "\e[44m"; 
        const std::string Blue    = "\e[44m"; 
        const std::string Magenta = "\e[45m"; 
        const std::string Cyan    = "\e[46m"; 
        const std::string White   = "\e[47m"; 

        std::string CODE(int code)
        {
            return "\e[48;5;" + std::to_string(code) + "m";
        }

        std::string RGB(unsigned int red, unsigned int green, unsigned int blue)
        {
            std::string r = std::to_string(red);
            std::string g = std::to_string(green);
            std::string b = std::to_string(blue);
            return "\e[48;2;" + r + ";" + g + ";" + b + "m";
        }

        /// Note: "#FFFFFF" か "FFFFFF" の形式（小文字可能）
        std::string RGB(std::string hex)
        {
            if (hex == "") return "";
            if (hex[0] == '#') hex = hex.substr(1, 6);
            unsigned int rgb = (uint32_t) strtol((const char*) &hex[1], NULL, 16);
            unsigned int red = (rgb >> 16) & 0xFF;
            unsigned int green = (rgb >> 8) & 0xFF;
            unsigned int blue = (rgb >> 0) & 0xFF;
            return RGB(red, green, blue);
        }
    }
    namespace Style
    {
        const std::string Reset         = "\e[0m";
        const std::string Bold          = "\e[1m";
        const std::string Bright        = Bold;
        const std::string Fait          = "\e[2m";
        const std::string Dim           = Fait;
        const std::string Normal        = "\e[22m";
        const std::string Italic        = "\e[3m";
        const std::string Underline     = "\e[4m";
        const std::string Reverse       = "\e[7m";
        const std::string Conceal       = "\e[8m";
        const std::string Hide          = Conceal;
        const std::string CrossOut      = "\e[9m";
        const std::string Strikethrough = CrossOut;

        const std::string BoldOff       = "\e[21m";
        const std::string ItalicOff     = "\e[23m";
        const std::string UnderlineOff  = "\e[24m";
        const std::string ReverseOff    = "\e[27m";
        const std::string Reveal        = "\e[28m";
        const std::string CrossOutOff   = "\e[29m";
    }
}

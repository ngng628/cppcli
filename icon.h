# include "font.h"

namespace Icon
{
    static const std::string Add     = "[" + Font::Fore::Green   + "+" + Font::Style::Reset + "] ";
    static const std::string Check   = "[" + Font::Fore::Magenta + "v" + Font::Style::Reset + "] ";
    static const std::string Display = "[" + Font::Fore::Green   + "*" + Font::Style::Reset + "] ";
    static const std::string Failure = "[" + Font::Fore::Red     + "x" + Font::Style::Reset + "] ";
    static const std::string Hint    = "[" + Font::Fore::Yellow  + "?" + Font::Style::Reset + "] ";
    static const std::string Input   = "[" + Font::Fore::Green   + ">" + Font::Style::Reset + "] ";
    static const std::string Success = "[" + Font::Fore::Blue    + "o" + Font::Style::Reset + "] ";
}

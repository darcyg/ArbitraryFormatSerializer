/////////////////////////////////////////////////////////////////////////////
/// ArbitraryFormatSerializer
///    Library for serializing data in arbitrary formats.
///
/// generic_formatter.h
///
/// This file contains generic_formatter that formats a type using a save_or_load() function found using Argument Dependent Lookup.
///
/// Distributed under Apache License, Version 2.0 (http://www.apache.org/licenses/LICENSE-2.0)
/// (c) 2014 Zbigniew Skowron, zbychs@gmail.com
///
/////////////////////////////////////////////////////////////////////////////

#ifndef ArbitraryFormatSerializer_generic_formatter_H
#define ArbitraryFormatSerializer_generic_formatter_H

#include <arbitrary_format/implement_save_load_serialize.h>

namespace arbitrary_format
{

class generic_formatter : public implement_save_load<generic_formatter>
{
public:
    template<typename T, typename TSerializer>
    void save_or_load(TSerializer& serializer, T& object) const
    {
        save_or_load(serializer, object);    // function found using Argument Dependent Lookup
    }
};

} // namespace arbitrary_format

#endif // ArbitraryFormatSerializer_generic_formatter_H

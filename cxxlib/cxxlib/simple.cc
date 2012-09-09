//
//  simple.cc
//  cxxlib
//
//  Created by Eskil Olsen on 9/9/12.
//  Copyright (c) 2012 Eskil Olsen. All rights reserved.
//

#include <iostream>
#include <boost/format.hpp>

namespace cxxlib {
    std::string example() { return (boost::format("%s %s") % "Hello" % "World").str(); }
}

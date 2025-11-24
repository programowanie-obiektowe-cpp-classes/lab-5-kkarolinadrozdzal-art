#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > bernard = std::vector< char >();

    for (auto& p : people) {
        p.birthday();
    }
    for (auto x : people) {
        if (x.isMonster() == true)
        {
            bernard.push_back('n');
        }
        else {
            bernard.push_back('y');
        }
    }
    std::reverse(bernard.begin(), bernard.end());

    return bernard;
}

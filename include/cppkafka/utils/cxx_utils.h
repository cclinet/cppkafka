#ifndef CPPKAFKA_CXX_UTILS_H
#define CPPKAFKA_CXX_UTILS_H

#ifdef USE_BOOST
#define CPPKAFKA_USE_BOOST
#include <boost/optional.hpp>
namespace cppkafka {
using boost::optional;
}
#else
#include <any>
#include <optional>
namespace cppkafka {
using std::any;
using std::optional;
} // namespace cppkafka
#endif
#endif
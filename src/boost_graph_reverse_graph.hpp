#ifndef FREECAD_REVERSE_GRAPH_HPP_WORKAROUND
#define FREECAD_REVERSE_GRAPH_HPP_WORKAROUND

// Workaround for boost >= 1.75
#define BOOST_ALLOW_DEPRECATED_HEADERS
#include <boost/graph/reverse_graph.hpp>
#undef BOOST_ALLOW_DEPRECATED_HEADERS

#endif // #ifndef FREECAD_REVERSE_GRAPH_HPP_WORKAROUND

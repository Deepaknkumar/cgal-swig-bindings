#ifndef SWIG_CGAL_SPATIAL_SEARCHING_NN_SEARCH_H
#define SWIG_CGAL_SPATIAL_SEARCHING_NN_SEARCH_H

#include "../Common/Macros.h"
#include "../Common/Input_iterator.h"


DECLARE_ITERATOR_CLASS_2(iterator,NN_search_iterator)

template <class Cpp_base,class Query,class Tree>
class NN_search_wrapper
{
  Cpp_base data;
public:
  typedef Cpp_base cpp_base;
  typedef Query Point_d;
  typedef std::pair<Point_d,double>  Point_with_transformed_distance;
  typedef NN_search_iterator<cpp_base,Point_with_transformed_distance> Iterator;
//Creation
  NN_search_wrapper(Tree& tree,const Point_d& query):data(tree.get_data_ref(),query.get_data()){}
  NN_search_wrapper(Tree& tree,const Point_d& query,int k):data(tree.get_data_ref(),query.get_data(),k){}
  NN_search_wrapper(Tree& tree,const Point_d& query,int k,double eps):data(tree.get_data_ref(),query.get_data(),k,eps){}
  NN_search_wrapper(Tree& tree,const Point_d& query,int k,double eps,bool search_nearest):data(tree.get_data_ref(),query.get_data(),k,eps,search_nearest){}
//Operations
  Iterator iterator() {
    return Iterator(data.begin(),data.end());
  }
};


#endif //SWIG_CGAL_SPATIAL_SEARCHING_NN_SEARCH_H

//Operations
// std::ostream&  s.statistics ( std::ostream& s)  Inserts statistics of the search process into the output stream s. 
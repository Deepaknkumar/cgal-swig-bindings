#ifndef SWIG_CGAL_KERNEL_ARR_WALK_ALONG_LINE_POINT_LOCATION_DEF_H
#define SWIG_CGAL_KERNEL_ARR_WALK_ALONG_LINE_POINT_LOCATION_DEF_H

#include <sstream>
#include <SWIG_CGAL/Kernel/include_conflicts_2.h>
#include <SWIG_CGAL/Common/Macros.h>
#include <SWIG_CGAL/Kernel/typedefs.h>
#include <SWIG_CGAL/Kernel/Curve_2.h>
#include <SWIG_CGAL/Kernel/Arr_2_halfedge_decl.h>
//#include <SWIG_CGAL/Kernel/PointLocation.h>
#include <SWIG_CGAL/Kernel/Arrangement_2.h>

// Direct CGAL includes
#include <CGAL/Arrangement_2.h>
#include <CGAL/Arr_linear_traits_2.h>
#include <CGAL/Arr_extended_dcel.h>
#include <CGAL/Arrangement_on_surface_2.h>
#include <CGAL/Arrangement_2/Arr_default_planar_topology.h>
#include <CGAL/Arr_walk_along_line_point_location.h>
#include <SWIG_CGAL/Kernel/Arr_Cglab_arr_datum.h>

typedef CGAL::Arr_linear_traits_2<EPIC_Kernel> Arr_traits;
typedef CGAL::Arr_extended_dcel<Arr_traits, Cglab_arr_datum, Cglab_arr_datum, Cglab_arr_datum> Arr_dcel;
typedef CGAL::Arrangement_2<Arr_traits,Arr_dcel> Arrangement_2d;
//typedef CGAL::Arrangement_2<Arr_traits,Arr_dcel> Arrangement_2d;

//typedef ArrangementPointLocation_2 awalp_2;
typedef Curve_2 X_monotone_curve_2;
typedef CGAL::Arr_walk_along_line_point_location<Arrangement_2d> awalp_2d;

//template <Arrangement_2>
class SWIG_CGAL_KERNEL_DECL Arr_walk_along_line_point_location{
	awalp_2d data;
public:
     #ifndef SWIG
     typedef awalp_2d cpp_base;
     const cpp_base& get_data() const {return data;}
           cpp_base& get_data()       {return data;}
     Arr_walk_along_line_point_location(const cpp_base& base):data(base){}
     #endif

//creation
Arr_walk_along_line_point_location():data(){}


//Query functions - Not Required
//SWIG_CGAL_DECLARE_CALL_AND_REF_1(aplr_2d,locate,Point_2)

//Operations - Not Required
//SWIG_CGAL_FORWARD_CALL_1(void,attach,Arrangement_2)
//SWIG_CGAL_FORWARD_CALL_0(void,detach)

//No deepcopy for this class
};

#endif //SWIG_CGAL_KERNEL_ARR_WALK_ALONG_LINE_POINT_LOCATION_DEF_H


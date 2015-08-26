//-----------------------------------------------------------------------------
// Function Wrapper file for Class of CGAL's free functions for 
// Arrangement_2 Package for Computational Coinvex Analysis 2 Toolbox
// For Scilab Platform
//	Authors:
//		Deepak Kumar (2015)
//-----------------------------------------------------------------------------

#ifndef SWIG_CGAL_KERNEL_FREE_FUNC_DEF_H
#define SWIG_CGAL_KERNEL_FREE_FUNC_DEF_H

#include <sstream>
#include <SWIG_CGAL/Kernel/include_conflicts_2.h>
#include <SWIG_CGAL/Common/Macros.h>
#include <SWIG_CGAL/Kernel/typedefs.h>
#include <SWIG_CGAL/Kernel/Curve_2.h>
#include <SWIG_CGAL/Kernel/Arr_2_halfedge_decl.h>
#include <SWIG_CGAL/Kernel/Arrangement_2.h>
#include <SWIG_CGAL/Kernel/Arr_walk_along_line_point_location_decl.h>
//#include <SWIG_CGAL/Kernel/Arr_point_location_result_decl.h>

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


typedef Curve_2 X_monotone_curve_2;
//typedef CGAL::Arr_walk_along_line_point_location<Arrangement_2d> awalp_2;
typedef Arr_walk_along_line_point_location awalp_2;

//Free Functions
SWIG_CGAL_FORWARD_CALL_STATIC_3(void,insert,Arrangement_2,Curve_2,awalp_2)
SWIG_CGAL_FORWARD_CALL_STATIC_3(CGAL_Halfedge_handle,insert_non_intersecting_curve,Arrangement_2,X_monotone_curve_2,awalp_2)

#endif //SWIG_CGAL_KERNEL_FREE_FUNC_DEF_H

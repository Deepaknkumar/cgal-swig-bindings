exec('build/SWIG_CGAL/Kernel/sciloader.sce', -1);
p1 = new_Point_2(1,2);
p2 = new_Point_2(0,0);

r1 = new_Ray_2(p2,p1);

p4 = cgal.Ray_2.point(r1,24);
cgal.Point_2.toString(p4)

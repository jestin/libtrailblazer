#ifndef CGALDEFS_H
#define CGALDEFS_H

//#include <CGAL/Simple_cartesian.h>
#include <CGAL/Polyhedron_3.h>
#include <CGAL/Nef_polyhedron_3.h>


//typedef CGAL::Simple_cartesian<double>  Kernel;
typedef CGAL::Gmpz  NT;
struct Kernel : public CGAL::Extended_homogeneous<NT> {};

typedef Kernel::FT                      FT;
typedef Kernel::Point_3                 Point_3;
typedef Kernel::Vector_3                Vector;
typedef CGAL::Polyhedron_3<Kernel>      Polyhedron;
typedef CGAL::Nef_polyhedron_3<Kernel>  Nef_polyhedron;
typedef Kernel::Plane_3                 Plane;
typedef Kernel::Segment_3               Segment;
typedef Polyhedron::Vertex_iterator     Vertex_iterator;
typedef Polyhedron::Facet_iterator      Facet_iterator;
typedef Polyhedron::Halfedge_handle     Halfedge_handle;


#endif // CGALDEFS_H

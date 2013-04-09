#include "Slicer.h"

#include <cstddef>
#include "cgaldefs.h"

#include <CGAL/AABB_intersections.h>
#include <CGAL/AABB_tree.h>
#include <CGAL/AABB_traits.h>
#include <CGAL/AABB_polyhedron_segment_primitive.h>
#include <CGAL/AABB_polyhedron_triangle_primitive.h>

Slicer::Slicer()
{
}

Layer Slicer::Slice(Mesh &mesh, double layerHeight)
{
    typedef CGAL::AABB_polyhedron_triangle_primitive<Kernel,Polyhedron> Primitive;
    typedef CGAL::AABB_traits<Kernel, Primitive> Traits;
    typedef CGAL::AABB_tree<Traits> Tree;
    typedef Tree::Object_and_primitive_id Object_and_primitive_id;

    Polyhedron p = ConvertToPolyhedron(mesh);

    Tree tree(p.facets_begin(),p.facets_end());


    Layer l;
    return l;
}

Polyhedron Slicer::ConvertToPolyhedron(Mesh &mesh)
{
    Polyhedron p;

    for (vector<Facet>::size_type i = 0; i < mesh.facets.size(); i++)
    {
        Point_3 a(mesh.facets[i].vertices[0].x, mesh.facets[i].vertices[0].x, mesh.facets[i].vertices[0].x);
        Point_3 b(mesh.facets[i].vertices[1].x, mesh.facets[i].vertices[1].x, mesh.facets[i].vertices[1].x);
        Point_3 c(mesh.facets[i].vertices[2].x, mesh.facets[i].vertices[2].x, mesh.facets[i].vertices[2].x);
        p.make_triangle(a, b, c);
    }

    return p;
}

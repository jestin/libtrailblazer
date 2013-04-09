#include "Slicer.h"

#include <cstddef>
#include "cgaldefs.h"

#include <CGAL/AABB_intersections.h>
#include <CGAL/AABB_tree.h>
#include <CGAL/AABB_traits.h>
#include <CGAL/AABB_polyhedron_segment_primitive.h>
#include <CGAL/AABB_polyhedron_triangle_primitive.h>

using namespace std;

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

    Vector normal((FT)0.0,(FT)0.0,(FT)1.0);
    Point_3 planePoint((FT)0.0, (FT)0.0, layerHeight);
    Plane plane(planePoint, normal);

    list<Object_and_primitive_id> intersections;
    tree.all_intersections(plane, back_inserter(intersections));

    list<Segment> segments;
    list<Object_and_primitive_id>::iterator it;
    for(it = intersections.begin();
        it != intersections.end();
        it++)
    {
        Object_and_primitive_id op = *it;
        CGAL::Object object = op.first;
        Segment segment;
        if(CGAL::assign(segment,object))
        {
            segments.push_back(segment);
        }
    }

    return ConvertSegmentsToLayer(segments);
}

Polyhedron Slicer::ConvertToPolyhedron(Mesh &mesh)
{
    Polyhedron p;

    for (vector<Facet>::iterator it = mesh.facets.begin(); it != mesh.facets.end(); ++it)
    {
        Facet f = *it;

        if(f.vertices.size() == 3)
        {
            Point_3 a(f.vertices[0].x, f.vertices[0].y, f.vertices[0].z);
            Point_3 b(f.vertices[1].x, f.vertices[1].y, f.vertices[1].z);
            Point_3 c(f.vertices[2].x, f.vertices[2].y, f.vertices[2].z);
            p.make_triangle(a, b, c);
        }
    }

    return p;
}

Layer Slicer::ConvertSegmentsToLayer(list<Segment> segments)
{
    Layer l;

    for (list<Segment>::iterator it = segments.begin(); it != segments.end(); ++it)
    {
        Segment s = *it;
    }

    return l;
}

#include "Slicer.h"

#include <cstddef>
#include <stdio.h>
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

Layer* Slicer::Slice(Mesh *mesh, double layerHeight)
{

    typedef CGAL::AABB_polyhedron_triangle_primitive<Kernel,Polyhedron> Primitive;
    typedef CGAL::AABB_traits<Kernel, Primitive> Traits;
    typedef CGAL::AABB_tree<Traits> Tree;
    typedef Tree::Object_and_primitive_id Object_and_primitive_id;

    printf("%d facets\n", mesh->numFacets);

    if(mesh->numFacets > 0)
    {
        Facet* pFacet = mesh->facets[0];
        printf("%d vertices\n", pFacet->numVertices);
    }

    Polyhedron poly = ConvertToPolyhedron(mesh);

    list<Segment> segments;

    if(poly.size_of_facets() > 0)
    {
        Tree tree(poly.facets_begin(), poly.facets_end());

        Vector normal((FT)0.0,(FT)0.0,(FT)1.0);
        Point_3 planePoint((FT)0.0, (FT)0.0, layerHeight);
        Plane plane(planePoint, normal);

        list<Object_and_primitive_id> intersections;
        tree.all_intersections(plane, back_inserter(intersections));

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
    }

    return NULL;

    //return ConvertSegmentsToLayer(segments);
}

Polyhedron Slicer::ConvertToPolyhedron(Mesh *mesh)
{
    Polyhedron p;

    for (int i = 0; i < mesh->numFacets; i++)
    {
        Facet* f = mesh->facets[i];

        if(f->numVertices == 3)
        {
            Point_3 a(f->vertices[0]->x, f->vertices[0]->y, f->vertices[0]->z);
            Point_3 b(f->vertices[1]->x, f->vertices[1]->y, f->vertices[1]->z);
            Point_3 c(f->vertices[2]->x, f->vertices[2]->y, f->vertices[2]->z);
            p.make_triangle(a, b, c);
        }
    }

    return p;
}

Layer* Slicer::ConvertSegmentsToLayer(list<Segment> segments)
{
    Layer* l;

    for (list<Segment>::iterator it = segments.begin(); it != segments.end(); ++it)
    {
        Segment s = *it;
    }

    return l;
}

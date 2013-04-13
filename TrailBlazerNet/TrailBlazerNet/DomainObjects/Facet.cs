using System;
using System.Collections.Generic;

namespace TrailBlazerNet.DomainObjects
{
	public class Facet
    {
        public Point Normal { get; set; }
        public ICollection<Point> Vertices { get; set; }
    }
}
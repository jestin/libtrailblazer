using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;

namespace TrailBlazerNet.DomainObjects
{
	[StructLayout(LayoutKind.Sequential)]
	public class Facet
    {
        public Point Normal { get; set; }
        public ICollection<Point> Vertices { get; set; }
    }
}
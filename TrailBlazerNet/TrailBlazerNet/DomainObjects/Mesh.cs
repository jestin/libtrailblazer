using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;

namespace TrailBlazerNet.DomainObjects
{
	[StructLayout(LayoutKind.Sequential)]
	public class Mesh
    {
        public ICollection<Facet> Facets;
    }
}
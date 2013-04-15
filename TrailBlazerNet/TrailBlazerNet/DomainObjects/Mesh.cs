using System;
using System.Runtime.InteropServices;

namespace TrailBlazerNet.DomainObjects
{
	[StructLayout(LayoutKind.Sequential)]
	public class Mesh
    {
		public Facet[] facets;
		public long numFacets;
    }
}
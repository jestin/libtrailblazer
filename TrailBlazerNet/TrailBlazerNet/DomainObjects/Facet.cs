using System;
using System.Runtime.InteropServices;

namespace TrailBlazerNet.DomainObjects
{
	[StructLayout(LayoutKind.Sequential)]
	public class Facet
    {
		public Point Normal;
		public Point[] vertices;
		public long numVertices;
    }
}
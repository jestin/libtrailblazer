using System;
using System.Runtime.InteropServices;

namespace TrailBlazerNet.DomainObjects
{
	[StructLayout(LayoutKind.Sequential)]
	public class Path
    {
		public PathSegment[] segments;
		public long numSegments;
    }
}
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;

namespace TrailBlazerNet.DomainObjects
{
	[StructLayout(LayoutKind.Sequential)]
	public class Path
    {
        public IEnumerable<PathSegment> Segments { get; set; }
    }
}
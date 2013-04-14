using System;
using System.Runtime.InteropServices;

namespace TrailBlazerNet.DomainObjects
{
	[StructLayout(LayoutKind.Sequential)]
	public class PathSegment
    {
        public Line Segment { get; set; }
        public int Speed { get; set; }

        public int ExtrusionSpeed { get; set; }
        public double ExtrusionVolume { get; set; }
    }
}
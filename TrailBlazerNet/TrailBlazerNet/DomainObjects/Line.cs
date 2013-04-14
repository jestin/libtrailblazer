using System;
using System.Runtime.InteropServices;

namespace TrailBlazerNet.DomainObjects
{
	[StructLayout(LayoutKind.Sequential)]
	public class Line
    {
        public Point Start { get; set; }
        public Point End { get; set; }
    }
}
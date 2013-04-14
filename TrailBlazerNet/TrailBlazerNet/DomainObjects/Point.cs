using System;
using System.Runtime.InteropServices;

namespace TrailBlazerNet.DomainObjects
{
	[StructLayout(LayoutKind.Sequential)]
	public class Point
    {
        public float X { get; set; }
        public float Y { get; set; }
        public float Z { get; set; }
    }
}
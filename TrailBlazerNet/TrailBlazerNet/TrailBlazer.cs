using System;
using System.Runtime.InteropServices;
using TrailBlazerNet.DomainObjects;

namespace TrailBlazerNet
{
	public class TrailBlazer
	{
		[DllImport("libtrailblazer")]
		public static extern Layer Slice(Mesh mesh, double layerHeight);
	}
}


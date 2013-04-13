using System;
using System.Runtime.InteropServices;
using TrailBlazerNet.DomainObjects;

namespace TrailBlazerNet
{
	public class TrailBlazer
	{
		[DllImport("liblibtrailblazer")]
		public static extern Layer Slice(Mesh mesh, double layerHeight);

		[DllImport("liblibtrailblazer")]
		public static extern Path GeneratePath(Layer[] layers);

		[DllImport("liblibtrailblazer")]
		public static extern int Test(double testDouble);
	}
}


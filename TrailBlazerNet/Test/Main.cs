using System;
using TrailBlazerNet;
using TrailBlazerNet.DomainObjects;
using System.Collections.ObjectModel;

namespace Test
{
	class MainClass
	{
		public static void Main(string[] args)
		{
			var mesh = new Mesh
			{
				facets = new Facet[]
				{
					new Facet
					{
						vertices = new Point[]
						{
							new Point
							{
								X = 0,
								Y = 0,
								Z = 0
							}
						},
						numVertices = 1
					}
				},
				numFacets = 1
			};

			Console.WriteLine("Managed facets: {0}", mesh.numFacets);
			Console.WriteLine("Managed vertices: {0}", mesh.facets[0].numVertices);

			TrailBlazer.Slice(mesh, 1.0);
		}
	}
}

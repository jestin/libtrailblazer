using System;
using TrailBlazerNet;
using TrailBlazerNet.DomainObjects;

namespace Test
{
	class MainClass
	{
		public static void Main(string[] args)
		{
			var result = TrailBlazer.Test(2.5);
			Console.WriteLine("{0}", result);

			TrailBlazer.Slice(new Mesh(), 1.0);
		}
	}
}

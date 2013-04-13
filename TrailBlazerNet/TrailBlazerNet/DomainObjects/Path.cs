using System;
using System.Collections.Generic;

namespace TrailBlazerNet.DomainObjects
{
	public class Path
    {
        public IEnumerable<PathSegment> Segments { get; set; }
    }
}
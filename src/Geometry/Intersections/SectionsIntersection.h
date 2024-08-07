#ifndef SECTIONSINTERSECTION_H_INCLUDED
#define SECTIONSINTERSECTION_H_INCLUDED

#include "Geometry/Primitives/Section.h"
#include "LinesIntersection.h"

std::optional<Intersection> section_intersection(const Section<2>& O, const Section<2>& P);

#endif // SECTIONSINTERSECTION_H_INCLUDED

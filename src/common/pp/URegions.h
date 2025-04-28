#pragma once

#include "../typedefs.h"

/// @brief A class that represents a region in an application.
class SRegion
{
public:
	/// @brief Default constructor that initializes the region to an empty state.
	SRegion();

	/**
	 * @brief Constructor that initializes the region with a specified rectangle.
	 *
	 * @param inRect The rectangle to initialize the region with.
	 */
	SRegion(RectT &inRect);

	/// @brief Destructor that cleans up the region.
	virtual ~SRegion();

private:
	RegionT mRegionH;
};

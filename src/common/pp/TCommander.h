#pragma once

#include <vector>

#include "../cfg.h"

class CAAPI TCommander
{
public:
	/**
	 * @brief Constructor for TCommander.
	 * 
	 * @param inSuper Pointer to the super commander.
	 */
	TCommander(TCommander *inSuper = nullptr):
		mSuperCommander(inSuper)
	{
	}

	/// @brief Destructor for TCommander.
	virtual ~TCommander();

	void SetSuperCommander(TCommander *inSuper)
	{
		mSuperCommander = inSuper;
	}
protected:
	static TCommander *sDefaultCommander;

	TCommander *mSuperCommander;
	std::vector<TCommander *> mSubCommanders;
};

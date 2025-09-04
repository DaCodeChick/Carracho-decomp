#pragma once

#include "PP_Types.h"
#include "../cfg.h"

/// @brief A class to handle file operations.
class CAAPI TFile
{
public:
	/**
	 * @brief Constructor to create a file object with the specified path.
	 * 
	 * @param inPath The path to the file.
	 */
	TFile(const CharT *inPath);
	
	TFile(const TFile &inFile) = delete;
	TFile &operator=(const TFile &inFile) = delete;

	/// @brief Destructor to clean up the file object.
	virtual ~TFile();

	/// @brief Create a new file.
	void CreateNewFile();

	/// @brief Delete the file.
	void DeleteFile();
protected:
};

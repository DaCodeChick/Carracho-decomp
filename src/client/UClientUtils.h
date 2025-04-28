#pragma once

/**
 * @brief Utility class for client-side operations.
 */
class UClientUtils
{
public:
	/**
	 * @brief Encrypts or decrypts the given password text.
	 * 
	 * @param ioText The password text to be encrypted or decrypted. This is modified in place.
	 *              The text should be a null-terminated string.
	 */
	static void EncryptDecryptPassword(char *ioText);
};

#pragma once

#include "cfg.h"

/**
 * @brief Encrypts or decrypts the given password text.
 *
 * @param ioText The password text to be encrypted or decrypted. This is modified in place.
 *              The text should be a null-terminated string.
 */
CAAPI void EncryptDecryptPassword(char *ioText);

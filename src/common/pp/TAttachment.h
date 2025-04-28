#pragma once

#include "../typedefs.h"

class TAttachable;

class TAttachment
{
public:
	TAttachment(int inMessage, bool inExecuteHost = true)
	    : mMessage(inMessage), mExecuteHost(inExecuteHost), mOwnerHost(nullptr)
	{
	}

	/**
	 * @brief Returns the message associated with this attachment.
	 *
	 * @return int
	 */
	int GetMessage() const
	{
		return mMessage;
	}

	/**
	 * @brief Returns the execute host flag.
	 *
	 * @return true if the host should be executed when this attachment is executed.
	 * @return false if the host should not be executed when this attachment is executed.
	 */
	bool GetExecuteHost() const
	{
		return mExecuteHost;
	}

	/**
	 * @brief Returns the host object that owns this attachment.
	 *
	 * @return * TAttachable*
	 */
	TAttachable *GetOwnerHost() const
	{
		return mOwnerHost;
	}

protected:
	TAttachable *mOwnerHost; ///< The host object that owns this attachment.
	int mMessage;            ///< The message associated with this attachment.
	bool mExecuteHost; ///< Flag to indicate if the host should be executed when this attachment is
	                   ///< executed.
};

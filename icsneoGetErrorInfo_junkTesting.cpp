int LegacyDLLExport icsneoGetErrorInfo(int lErrorNumber, char* szErrorDescriptionShort, char* szErrorDescriptionLong,
	int* lMaxLengthShort, int* lMaxLengthLong, int* lErrorSeverity, int* lRestartNeeded)
{
	//set and send back pointless variable
	*lRestartNeeded = 0;

	//need to iterate through char arrays of returned values, byte by byte, until maxlength is reached (end of array)
	const char* tempDescription = APIEvent::DescriptionForType(APIEvent::Type(lErrorNumber));
	
	//check to make sure the length of the error is not larger than the buffer
	int descrLength = std::strlen(tempDescription);  //returns 45 if INVALID_NEODEVICE for example
	if (descrLength > *lMaxLengthShort || descrLength > *lMaxLengthLong)
	{
		//ideally would want to push an event error, but this works for now
		return false;
	}

	//copy the chars in
	//change to use std::copy()
	for (int i = 0; i < descrLength; i++)
	{
		szErrorDescriptionShort[i] = tempDescription[i];
		szErrorDescriptionLong[i] = tempDescription[i];
	}

	//update the inout variables to what the actual length of the error is.
	*lMaxLengthShort = *lMaxLengthLong = descrLength;

	*lErrorSeverity = int(APIEvent::Severity::Any);

	return true;

	//null terminator '/0' 
	//const char* tempString = "hi" << adds '/0' as tempString[2]; = array of 3

	//WRONG IMPLEMENTATION
	/*
	APIEvent event;
	APIEvent::DescriptionForType();
	*szErrorDescriptionShort = (char)event.DescriptionForType(event.getType());//WRONG

	*szErrorDescriptionShort = (char)event.DescriptionForType((uint32_t)lErrorNumber);
	*szErrorDescriptionShort = (char)APIEvent::DescriptionForType((uint32_t)lErrorNumber);

	*szErrorDescriptionLong = APIEvent::DescriptionForType(APIEvent::Type(lErrorNumber));
	*szErrorDescriptionLong = (char)event.DescriptionForType((uint32_t)lErrorNumber);
	DescriptionForType(event.getDescription());

	neoevent_t error;

	neither of this works
	*szErrorDescriptionShort = (char)*error.description;
	*szErrorDescriptionLong = (char)*error.description;
	OR
	*szErrorDescriptionLong = *szErrorDescriptionShort;
	*lMaxLengthShort
	*lMaxLengthLong
	*lErrorSeverity = error.severity;
	*lRestartNeeded
	*/
}
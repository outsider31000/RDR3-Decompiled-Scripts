void __EntryFunction__()
{
	Global_1899847 = -1;
	Global_1905941 = -1;
	Global_1905942 = -1;
	Global_1955499 = -1;
	if (SCRIPTS::_DOES_COMPRESSED_GLOBAL_BLOCK_BUFFER_EXIST(7))
	{
		SCRIPTS::_RESTORE_GLOBAL_BLOCK(7);
	}
	else
	{
		SCRIPTS::_STORE_GLOBAL_BLOCK(7);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

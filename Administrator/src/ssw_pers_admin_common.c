/*********************************************************************************************************************
/* ---------------------- include files  --------------------------------- */

#define CRC16_FILE_CHUNK_SIZE 		(10 * 1024)
#define GetApplicationRootPath( RootPath, FullPath )                                            \
/* ---------------------- local types -------------------------------------- */



    if( (NIL == absPathApplicationFolder) || (NIL == absPathExportFolder))
    if(bEverythingOK)
    if(bEverythingOK && (! bNothingToExport))
        if( (lenPathExport + 1 + lenLinkFilename) < PERSADMIN_MAX_PATH_LENGHT )
            fileExport = fopen(completePath, "w") ;
    if(bEverythingOK && (! bNothingToExport))
    if(NIL != buffer)
    if(NIL != fileExport)
    return bEverythingOK ? exportedLinks : PAS_FAILURE;
/*
    if( (NIL == absPathImportFolder) || (NIL == absPathApplicationFolder))
    if(bEverythingOK)
    if(bEverythingOK)
        if( (lenPathImport + 1 + lenLinkFilename) < PERSADMIN_MAX_PATH_LENGHT )
            fileImport = fopen(completePath, "r") ;
    if(bEverythingOK && (! bNothingToImport))
        str_t appFolderPath[PERSADMIN_MAX_PATH_LENGHT] ;
        if(lenAppFolder + 1 < PERSADMIN_MAX_PATH_LENGHT)
                    if( ! bIgnoreLine)
                        if(bEverythingOK)
        }
    if(NIL != fileImport)
    return bEverythingOK ? importedLinks : PAS_FAILURE;

/* 
    if(strlen(linkName) > lenPrefix)
    return groupID ;    
/* 
    if((len > 1) && (('\r' == line[len-2]) || ('\n' == line[len-2])))

  if ( ( rootPath != 0 ) && ( list != 0 ) && ( listSize > 0 ) ) {
    // Clear the output buffer before retrieving the actual list
    result = persadmin_list_folder( completeRootPath, list, listSize, PersadminFilterFolders, false );
    if ( result >= 0 ) {
  return result;
sint_t persadmin_list_application_folders_get_size( pconststr_t rootPath ) {
  GetApplicationRootPath( rootPath, completeRootPath );
  if ( result > 0 ) {
  return result;
bool_t persadmin_is_shared_folder( pconststr_t name, int length ) {
  if ( ( name != 0 ) && ( length == compLen ) ) {
  return result;
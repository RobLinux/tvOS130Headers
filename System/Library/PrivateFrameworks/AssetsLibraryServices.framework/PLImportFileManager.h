/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLPhotoLibraryPathManager;

@interface PLImportFileManager : NSObject {

	PLPhotoLibraryPathManager* _pathManager;

}
+(BOOL)isImportDirectoryFolderName:(id)arg1 ;
+(BOOL)isCameraDirectoryFolderName:(id)arg1 ;
-(id)init;
-(id)_dcimDirectory;
-(id)initWithPathManager:(id)arg1 ;
-(id)_DCIMFolderNameWithNumber:(long long)arg1 ;
-(id)urlForNewDCIMFolderWithFolderNumber:(long long*)arg1 ;
-(id)nextAvailableFilePathInDirectory:(id)arg1 withExtension:(id)arg2 ;
-(BOOL)removeUnusedDCIMDirectoryAtPath:(id)arg1 ;
@end


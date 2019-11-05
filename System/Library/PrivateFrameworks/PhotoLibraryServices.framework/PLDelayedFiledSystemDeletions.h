/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface PLDelayedFiledSystemDeletions : NSObject {

	NSMutableArray* _deletionInfos;

}
+(id)filesystemDeletionQueue;
+(void)waitForAllDelayedDeletionsToFinish;
+(void)appendDescriptionForEvent:(id)arg1 toComponents:(id)arg2 ;
+(id)deletionsFromChangeHubEvent:(id)arg1 ;
-(id)debugDescription;
-(void)dealloc;
-(void)addFilesystemDeletionInfo:(id)arg1 ;
-(void)appendToXPCMessage:(id)arg1 managedObjectContext:(id)arg2 ;
-(void)deleteAllRemainingFilesAndThumbnailsWithPhotoLibrary:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithFilesystemDeletionInfos:(id)arg1 ;
@end

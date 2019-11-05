/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSString, PLPhotoLibrary;

@interface PLCloudSharingJob : PLDaemonJob {

	NSString* _archiveFilename;
	BOOL _shouldPrioritize;

}

@property (nonatomic,readonly) PLPhotoLibrary * transientPhotoLibrary; 
@property (assign,nonatomic) BOOL shouldPrioritize;                                 //@synthesize shouldPrioritize=_shouldPrioritize - In the implementation block
+(id)recoveredEventsWithPathManager:(id)arg1 ;
-(BOOL)shouldPrioritize;
-(void)setShouldPrioritize:(BOOL)arg1 ;
-(id)initWithAssetsdClient:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2 ;
-(void)runDaemonSide;
-(BOOL)shouldArchiveXPCToDisk;
-(void)archiveXPCToDisk:(id)arg1 ;
-(id)serialOperationQueue;
-(PLPhotoLibrary *)transientPhotoLibrary;
-(void)deleteAllRecoveryEvents;
-(void)runAndWaitForMessageToBeSent;
@end


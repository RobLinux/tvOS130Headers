/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPLDaemonLibraryManagerDelegate <NSObject>
@required
-(id)daemonLibraryManager:(id)arg1 engineLibraryWithClientLibraryBaseURL:(id)arg2 cloudLibraryStateStorageURL:(id)arg3 cloudLibraryResourceStorageURL:(id)arg4 libraryIdentifier:(id)arg5 options:(unsigned long long)arg6 error:(id*)arg7;
-(void)daemonLibraryManagerHasBeenDisconnected:(id)arg1;
-(void)daemonLibraryManager:(id)arg1 deactivateLibraryWithCompletionBlock:(/*^block*/id)arg2;
-(void)daemonLibraryManager:(id)arg1 wipeLibraryWithReason:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(void)startSyncTaskForDaemonLibraryManager:(id)arg1;
-(id)daemonLibraryManagerOtherLibraryManager:(id)arg1;

@end


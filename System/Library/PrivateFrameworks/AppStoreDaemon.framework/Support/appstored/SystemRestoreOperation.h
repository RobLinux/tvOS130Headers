/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSArray;

@interface SystemRestoreOperation : ISOperation {

	BOOL _hadHardFailure;
	NSArray* _restoreItems;
	BOOL _hadAutoRetrySoftFailure;

}

@property (readonly) BOOL hadAutoRetrySoftFailure;              //@synthesize hadAutoRetrySoftFailure=_hadAutoRetrySoftFailure - In the implementation block
+(BOOL)_isErrorSoftFail:(id)arg1 ;
+(long long)_restoreStateForError:(id)arg1 ;
+(BOOL)_shouldAutomaticallyRetryAfterSoftFailError:(id)arg1 ;
-(void)run;
-(BOOL)hadAutoRetrySoftFailure;
-(void)_applyResponse:(id)arg1 withTransaction:(id)arg2 ;
-(BOOL)_exceededRetryCountForJob:(id)arg1 ;
-(BOOL)_createDownloadForJob:(id)arg1 withTransaction:(id)arg2 response:(id)arg3 ;
-(void)_hardFailRestoreItem:(id)arg1 job:(id)arg2 transaction:(id)arg3 error:(id)arg4 ;
-(void)_softFailRestoreItem:(id)arg1 job:(id)arg2 transaction:(id)arg3 error:(id)arg4 ;
-(id)initWithJobIDs:(id)arg1 ;
@end

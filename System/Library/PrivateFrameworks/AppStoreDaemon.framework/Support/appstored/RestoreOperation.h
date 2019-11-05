/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <appstored/RestoreItemsOperationDelegate.h>

@class NSOrderedSet, NSString, RestoreContext;

@interface RestoreOperation : ISOperation <RestoreItemsOperationDelegate> {

	NSOrderedSet* _jobIDs;
	NSString* _restoreReason;
	RestoreContext* _context;
	BOOL _hadAccountNeededDuringDataMigratorFailure;
	BOOL _hadAutoRetrySoftFailure;
	BOOL _hadCancelRetrySoftFailure;
	BOOL _hadRestoreItemsUnavailableFailure;

}

@property (readonly) NSOrderedSet * jobIDs; 
@property (readonly) NSString * restoreReason; 
@property (readonly) BOOL hadAccountNeededDuringDataMigratorFailure;              //@synthesize hadAccountNeededDuringDataMigratorFailure=_hadAccountNeededDuringDataMigratorFailure - In the implementation block
@property (readonly) BOOL hadAutoRetrySoftFailure;                                //@synthesize hadAutoRetrySoftFailure=_hadAutoRetrySoftFailure - In the implementation block
@property (readonly) BOOL hadCancelRetrySoftFailure;                              //@synthesize hadCancelRetrySoftFailure=_hadCancelRetrySoftFailure - In the implementation block
@property (readonly) BOOL hadRestoreItemsUnavailableFailure;                      //@synthesize hadRestoreItemsUnavailableFailure=_hadRestoreItemsUnavailableFailure - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setShouldSuppressTermsAndConditionsDialogs:(BOOL)arg1 ;
+(BOOL)shouldSuppressTermsAndConditionsDialogs;
+(void)resetShouldSuppressTermsAndConditionsDialogs;
+(BOOL)supportsMultipleEntities;
-(void)dealloc;
-(void)run;
-(NSString *)restoreReason;
-(BOOL)_preflightAccountandAddRestoreItems:(id)arg1 operations:(id)arg2 account:(id)arg3 counts:(id)arg4 error:(id*)arg5 ;
-(BOOL)hadAutoRetrySoftFailure;
-(BOOL)hadAccountNeededDuringDataMigratorFailure;
-(void)restoreItemsOperation:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)initWithJobIDs:(id)arg1 restoreReason:(id)arg2 ;
-(NSOrderedSet *)jobIDs;
-(BOOL)hadCancelRetrySoftFailure;
-(BOOL)hadRestoreItemsUnavailableFailure;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/_PLClientTransaction.h>

@protocol OS_dispatch_queue;
@class NSCountedSet, NSObject;

@interface _PLServerTransaction : _PLClientTransaction {

	NSCountedSet* _enqueuedChangeScopes;
	NSObject*<OS_dispatch_queue> _changeScopeQueue;

}
-(void)dealloc;
-(void)completeTransaction;
-(id)initWithPathManager:(id)arg1 ;
-(void)addChangeScopes:(id)arg1 ;
-(void)pushChangeScopesBatch;
-(void)popChangeScopesBatch;
-(BOOL)isClientTransaction;
-(id)changeScopes;
-(void)completeTransactionScope:(id)arg1 ;
-(void)abortTransaction;
-(id)generateChangeScopesDescription;
-(void)_enqueueChangeScopes:(id)arg1 ;
@end


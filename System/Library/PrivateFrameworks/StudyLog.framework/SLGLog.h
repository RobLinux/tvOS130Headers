/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/StudyLog.framework/StudyLog
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StudyLog/SLGLogClientProtocolDelegate.h>

@protocol SLGLogClientProtocol, SLGDomainWhitelisting, OS_dispatch_queue;
@class NSNumber, NSString, NSDateFormatter, NSHashTable, NSObject;

@interface SLGLog : NSObject <SLGLogClientProtocolDelegate> {

	id<SLGLogClientProtocol> _client;
	id<SLGDomainWhitelisting> _whitelist;
	NSNumber* _pid;
	NSString* _processName;
	NSDateFormatter* _dateFormatter;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _observerLockQueue;
	NSObject*<OS_dispatch_queue> _observerCalloutQueue;
	BOOL _isEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)reset;
-(void)log:(id)arg1 ;
-(BOOL)isEnabled;
-(void)endSession;
-(id)initWithClient:(id)arg1 whitelist:(id)arg2 enabled:(BOOL)arg3 ;
-(void)_setClient:(id)arg1 ;
-(void)_fetchProcessInfo;
-(void)endSessionAndRenameFileTo:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)reset:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)_serializeObjectAsLogEntry:(id)arg1 domain:(id)arg2 tags:(id)arg3 error:(id*)arg4 ;
-(void)log:(id)arg1 domain:(id)arg2 tags:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)logBlock:(/*^block*/id)arg1 domain:(id)arg2 tags:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)beginSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)endSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)resetWithCompletion:(/*^block*/id)arg1 ;
-(id)_wrapObjectWithEntryMetadata:(id)arg1 domain:(id)arg2 tags:(id)arg3 ;
-(void)client:(id)arg1 didReceiveInitialLogMessageFromDomain:(id)arg2 ;
-(void)clientDidReceiveServerReset:(id)arg1 ;
-(void)log:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)log:(id)arg1 domain:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)log:(id)arg1 tags:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)log:(id)arg1 tags:(id)arg2 ;
-(void)log:(id)arg1 domain:(id)arg2 tags:(id)arg3 ;
-(void)log:(id)arg1 domain:(id)arg2 ;
-(void)logBlock:(/*^block*/id)arg1 ;
-(void)logBlock:(/*^block*/id)arg1 domain:(id)arg2 ;
-(void)logBlock:(/*^block*/id)arg1 tags:(/*^block*/id)arg2 ;
-(void)logBlock:(/*^block*/id)arg1 tags:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)logBlock:(/*^block*/id)arg1 domain:(id)arg2 tags:(/*^block*/id)arg3 ;
-(void)logBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)logBlock:(/*^block*/id)arg1 domain:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)beginSession;
-(id)whitelistedDomains;
-(void)addDomainToWhitelist:(id)arg1 ;
-(void)removeDomainFromWhitelist:(id)arg1 ;
@end


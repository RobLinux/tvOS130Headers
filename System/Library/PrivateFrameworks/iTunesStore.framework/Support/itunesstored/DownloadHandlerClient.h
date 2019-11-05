/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/XPCClient.h>

@class NSMutableSet, NSSet;

@interface DownloadHandlerClient : XPCClient {

	NSMutableSet* _disavowedSessionProperties;
	NSSet* _downloadPhasesToIgnore;
	long long _handlerIdentifier;
	BOOL _sessionsNeedPowerAssertion;
	BOOL _sessionsShouldBlockOtherDownloads;

}

@property (assign) long long handlerIdentifier; 
@property (readonly) NSSet * disavowedSessionProperties; 
@property (copy) NSSet * downloadPhasesToIgnore; 
@property (assign) BOOL sessionsNeedPowerAssertion; 
@property (assign) BOOL sessionsShouldBlockOtherDownloads; 
-(id)description;
-(void)dealloc;
-(void)setDownloadPhasesToIgnore:(NSSet *)arg1 ;
-(long long)handlerIdentifier;
-(NSSet *)downloadPhasesToIgnore;
-(BOOL)sessionsNeedPowerAssertion;
-(BOOL)sessionsShouldBlockOtherDownloads;
-(void)setSessionsNeedPowerAssertion:(BOOL)arg1 ;
-(void)setSessionsShouldBlockOtherDownloads:(BOOL)arg1 ;
-(id)initWithInputConnection:(id)arg1 ;
-(void)addDisavowedSessionProperties:(id)arg1 ;
-(NSSet *)disavowedSessionProperties;
-(id)resetDisavowedSessionProperties;
-(void)setHandlerIdentifier:(long long)arg1 ;
@end

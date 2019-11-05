/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/voiced
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <voiced/voiced-Structs.h>
#import <voiced/VSRemoteKeepAlive.h>

@protocol OS_os_transaction;
@class VSServerKeepAliveManager, NSObject, NSString;

@interface VSKeepAliveClient : NSObject <VSRemoteKeepAlive> {

	VSServerKeepAliveManager* _manager;
	BOOL _isActive;
	long long _activity;
	BOOL _keepSessionActive;
	NSObject*<OS_os_transaction> _transaction;
	CFRunLoopSourceRef _registryRunLoopSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(oneway void)cancel;
-(void)setManager:(id)arg1 ;
-(oneway void)maintainWithAudioType:(long long)arg1 keepAudioSessionActive:(BOOL)arg2 ;
-(BOOL)_shouldChangeAudioSession;
@end


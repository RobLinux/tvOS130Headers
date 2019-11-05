/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MobileWiFi.framework/MobileWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileWiFi/SFPasswordSharingServiceDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, SFPasswordSharingService;

@interface WiFiPasswordSharingSimulator : NSObject <SFPasswordSharingServiceDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	SFPasswordSharingService* _service;
	/*^block*/id _replyHandler;

}
-(id)init;
-(void)dealloc;
-(void)service:(id)arg1 receivedNetworkInfo:(id)arg2 ;
-(BOOL)service:(id)arg1 shouldPromptForNetwork:(id)arg2 ;
-(void)runWithSSID:(id)arg1 reply:(/*^block*/id)arg2 ;
@end


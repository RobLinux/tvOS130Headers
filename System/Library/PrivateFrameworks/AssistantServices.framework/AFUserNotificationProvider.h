/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFUserNotificationServiceDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSMutableDictionary, NSObject;

@interface AFUserNotificationProvider : NSObject <AFUserNotificationServiceDelegate> {

	NSXPCConnection* _connection;
	NSMutableDictionary* _responseHandlersByNotificationID;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(id)_connection;
-(void)withdrawNotificationRequestWithIdentifier:(id)arg1 ;
-(void)receivedNotificationResponse:(id)arg1 ;
-(void)postNotificationRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
@end


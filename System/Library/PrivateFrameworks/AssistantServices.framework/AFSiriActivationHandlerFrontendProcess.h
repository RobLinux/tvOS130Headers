/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFNotifyObserverDelegate.h>
#import <AssistantServices/AFSiriActivationHandling.h>

@protocol OS_dispatch_queue;
@class NSObject, AFSiriActivationConnection, NSString;

@interface AFSiriActivationHandlerFrontendProcess : NSObject <AFNotifyObserverDelegate, AFSiriActivationHandling> {

	NSObject*<OS_dispatch_queue> _queue;
	AFSiriActivationConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithConnection:(id)arg1 ;
-(BOOL)handleContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3 ;
@end


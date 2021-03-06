/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:32 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <backboardd/BSServiceConnectionListenerDelegate.h>

@class BSServiceConnectionListener, BKHIDEventDeliveryObserverService, NSString;

@interface BKHIDEventDeliveryObserverServiceListener : NSObject <BSServiceConnectionListenerDelegate> {

	BSServiceConnectionListener* _connectionListener;
	BKHIDEventDeliveryObserverService* _service;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(id)initWithService:(id)arg1 ;
@end


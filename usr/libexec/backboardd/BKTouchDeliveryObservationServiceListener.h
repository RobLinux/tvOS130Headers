/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:33 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <backboardd/BSServiceConnectionListenerDelegate.h>

@class BSServiceConnectionListener, BKTouchDeliveryObservationManager, NSString;

@interface BKTouchDeliveryObservationServiceListener : NSObject <BSServiceConnectionListenerDelegate> {

	BSServiceConnectionListener* _connectionListener;
	BKTouchDeliveryObservationManager* _manager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)activate;
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(id)initWithObservationManager:(id)arg1 ;
@end


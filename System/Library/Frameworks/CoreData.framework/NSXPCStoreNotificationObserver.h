/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface NSXPCStoreNotificationObserver : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _token;
	id _store;

}
-(void)dealloc;
-(id)_store;
-(void)setStore:(id)arg1 ;
-(id)initForObservationWithName:(id)arg1 store:(id)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, BSActionListener;

@interface BSActionListenerController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _transactionCount;
	BSActionListener* _listener;
	unsigned _listenerCount;
	unsigned _listenerTearDownToken;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)listener;
-(void)beginTransaction;
-(void)endTransaction;
-(void)beginTransactionForListener:(id)arg1 ;
-(void)endTransactionForListener:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface _UIKeyboardArbiterDebug : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _importantCount;
	NSMutableArray* _entries;

}
+(id)sharedInstance;
-(id)init;
-(void)addEntry:(id)arg1 ;
-(void)getDebugInfoDictionariesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addAsynchronousData:(/*^block*/id)arg1 ;
-(void)errorWithFormat:(const char*)arg1 ;
-(void)infoWithFormat:(const char*)arg1 ;
-(void)debugWithFormat:(const char*)arg1 ;
@end


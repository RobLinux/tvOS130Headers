/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, MSVCallback, NSObject, NSArray;

@interface MSVMultiCallback : NSObject {

	NSMutableArray* _callbacks;
	MSVCallback* _firstCallback;
	MSVCallback* _lastCallback;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * callbacks; 
@property (nonatomic,retain) MSVCallback * firstCallback; 
@property (nonatomic,retain) MSVCallback * lastCallback; 
-(id)init;
-(unsigned long long)count;
-(void)invoke;
-(NSArray *)callbacks;
-(void)invokeWithObject:(id)arg1 ;
-(void)addCallback:(id)arg1 ;
-(void)setFirstCallback:(MSVCallback *)arg1 ;
-(MSVCallback *)firstCallback;
-(void)setLastCallback:(MSVCallback *)arg1 ;
-(MSVCallback *)lastCallback;
-(BOOL)removeCallback:(id)arg1 ;
@end


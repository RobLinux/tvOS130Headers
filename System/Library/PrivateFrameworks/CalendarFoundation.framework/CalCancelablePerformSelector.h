/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarFoundation/CalCancelable.h>

@class NSRunLoop;

@interface CalCancelablePerformSelector : NSObject <CalCancelable> {

	/*^block*/id _block;
	NSRunLoop* _runloop;

}

@property (nonatomic,copy) id block;                           //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) NSRunLoop * runloop;              //@synthesize runloop=_runloop - In the implementation block
-(void)performAfterDelay:(double)arg1 ;
-(void)cancel;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)block;
-(void)_performBlock:(/*^block*/id)arg1 ;
-(void)setBlock:(id)arg1 ;
-(NSRunLoop *)runloop;
-(void)setRunloop:(NSRunLoop *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface VKTimer : NSObject {

	NSObject*<OS_dispatch_source> _source;
	double _nextFireDate;

}

@property (nonatomic,readonly) double nextFireDate;              //@synthesize nextFireDate=_nextFireDate - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(void)disable;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 queue:(id)arg3 ;
-(void)fireAfter:(double)arg1 ;
-(double)nextFireDate;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface CalSignalSensor : NSObject {

	NSObject*<OS_dispatch_source> _signalSource;
	int _signal;
	/*^block*/id _fireBlock;

}

@property (assign,nonatomic) int signal;              //@synthesize signal=_signal - In the implementation block
@property (nonatomic,copy) id fireBlock;              //@synthesize fireBlock=_fireBlock - In the implementation block
-(id)description;
-(void)dealloc;
-(int)signal;
-(void)setSignal:(int)arg1 ;
-(void)_shutDownSource;
-(id)fireBlock;
-(id)initWithSignal:(int)arg1 ;
-(void)startSensor;
-(void)stopSensor;
-(void)setFireBlock:(id)arg1 ;
@end


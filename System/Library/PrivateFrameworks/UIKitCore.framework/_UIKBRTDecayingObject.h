/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface _UIKBRTDecayingObject : NSObject {

	NSMutableArray* _resetBlocks;
	BOOL _isDecaying;
	BOOL _isHolding;
	double _lastUpdate;
	double _timeoutDuration;

}

@property (nonatomic,readonly) double lastUpdate;                 //@synthesize lastUpdate=_lastUpdate - In the implementation block
@property (assign,nonatomic) double timeoutDuration;              //@synthesize timeoutDuration=_timeoutDuration - In the implementation block
@property (nonatomic,readonly) BOOL isDecaying;                   //@synthesize isDecaying=_isDecaying - In the implementation block
@property (nonatomic,readonly) BOOL isHolding;                    //@synthesize isHolding=_isHolding - In the implementation block
@property (nonatomic,readonly) BOOL isActive; 
-(BOOL)isActive;
-(void)reset;
-(double)lastUpdate;
-(BOOL)isHolding;
-(double)timeoutDuration;
-(void)setTimeoutDuration:(double)arg1 ;
-(id)initWithTimeoutDuration:(double)arg1 ;
-(void)onResetDo:(/*^block*/id)arg1 ;
-(void)resetDecayTo:(double)arg1 ;
-(void)startOrUpdateDecay;
-(BOOL)isDecaying;
-(void)resetActiveDecayTo:(double)arg1 ;
-(void)startDecaying;
-(void)updateDecay;
@end


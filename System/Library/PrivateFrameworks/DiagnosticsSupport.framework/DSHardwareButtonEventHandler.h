/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DSHardwareButtonEventHandler : NSObject {

	BOOL _preventPropagation;
	id _target;
	SEL _action;
	unsigned long long _events;

}

@property (nonatomic,retain) id target;                              //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                             //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) BOOL preventPropagation;                //@synthesize preventPropagation=_preventPropagation - In the implementation block
@property (assign,nonatomic) unsigned long long events;              //@synthesize events=_events - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(SEL)action;
-(void)setAction:(SEL)arg1 ;
-(unsigned long long)events;
-(void)setEvents:(unsigned long long)arg1 ;
-(void)setPreventPropagation:(BOOL)arg1 ;
-(BOOL)preventPropagation;
-(BOOL)isEqualToHandler:(id)arg1 ;
@end


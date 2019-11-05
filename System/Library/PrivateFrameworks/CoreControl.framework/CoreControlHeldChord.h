/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreControl.framework/CoreControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface CoreControlHeldChord : NSObject {

	unsigned _delay;
	NSSet* _buttons;

}

@property (nonatomic,retain) NSSet * buttons;              //@synthesize buttons=_buttons - In the implementation block
@property (assign,nonatomic) unsigned delay;               //@synthesize delay=_delay - In the implementation block
-(unsigned)delay;
-(void)setDelay:(unsigned)arg1 ;
-(NSSet *)buttons;
-(void)setButtons:(NSSet *)arg1 ;
-(id)coreIRButtons;
-(id)initWithButtonCombination:(id)arg1 delay:(unsigned)arg2 ;
@end

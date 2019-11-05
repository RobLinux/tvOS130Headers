/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <AccessibilityUtilities/NSCopying.h>
#import <AccessibilityUtilities/NSSecureCoding.h>

@interface AXMIDIEvent : NSObject <NSCopying, NSSecureCoding> {

	unsigned char _note;
	unsigned char _pressure;
	unsigned char _control;
	unsigned char _controlValue;
	unsigned char _program;
	unsigned short _channel;
	unsigned short _pitchBend;
	long long _type;

}

@property (assign,nonatomic) unsigned short channel;                               //@synthesize channel=_channel - In the implementation block
@property (nonatomic,readonly) long long ordinalChannel; 
@property (getter=isOmniChannel,nonatomic,readonly) BOOL omniChannel; 
@property (assign,nonatomic) long long type;                                       //@synthesize type=_type - In the implementation block
@property (getter=isDownEvent,nonatomic,readonly) BOOL downEvent; 
@property (assign,nonatomic) unsigned char note;                                   //@synthesize note=_note - In the implementation block
@property (nonatomic,readonly) long long noteValue; 
@property (nonatomic,readonly) unsigned char noteOctave; 
@property (assign,nonatomic) unsigned char pressure;                               //@synthesize pressure=_pressure - In the implementation block
@property (assign,nonatomic) unsigned char control;                                //@synthesize control=_control - In the implementation block
@property (assign,nonatomic) unsigned char controlValue;                           //@synthesize controlValue=_controlValue - In the implementation block
@property (assign,nonatomic) unsigned char program;                                //@synthesize program=_program - In the implementation block
@property (assign,nonatomic) unsigned short pitchBend;                             //@synthesize pitchBend=_pitchBend - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned short)channel;
-(void)setChannel:(unsigned short)arg1 ;
-(unsigned char)pressure;
-(unsigned char)control;
-(void)setPressure:(unsigned char)arg1 ;
-(void)setNote:(unsigned char)arg1 ;
-(unsigned char)note;
-(id)noteDescription;
-(void)setControl:(unsigned char)arg1 ;
-(unsigned char)controlValue;
-(void)setControlValue:(unsigned char)arg1 ;
-(unsigned char)program;
-(void)setProgram:(unsigned char)arg1 ;
-(unsigned short)pitchBend;
-(void)setPitchBend:(unsigned short)arg1 ;
-(long long)ordinalChannel;
-(long long)noteValue;
-(unsigned char)noteOctave;
-(BOOL)isDownEvent;
-(BOOL)isOmniChannel;
@end


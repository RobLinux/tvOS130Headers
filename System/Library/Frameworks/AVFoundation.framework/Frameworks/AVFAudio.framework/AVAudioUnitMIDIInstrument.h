/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <AVFAudio/AVAudioUnit.h>
#import <AVFAudio/AVAudioMixing.h>

@class NSString;

@interface AVAudioUnitMIDIInstrument : AVAudioUnit <AVAudioMixing>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float volume; 
-(id)initWithAudioComponentDescription:(AudioComponentDescription)arg1 ;
-(void)startNote:(unsigned char)arg1 withVelocity:(unsigned char)arg2 onChannel:(unsigned char)arg3 ;
-(void)stopNote:(unsigned char)arg1 onChannel:(unsigned char)arg2 ;
-(void)sendController:(unsigned char)arg1 withValue:(unsigned char)arg2 onChannel:(unsigned char)arg3 ;
-(void)sendPitchBend:(unsigned short)arg1 onChannel:(unsigned char)arg2 ;
-(void)sendPressure:(unsigned char)arg1 onChannel:(unsigned char)arg2 ;
-(void)sendPressureForKey:(unsigned char)arg1 withValue:(unsigned char)arg2 onChannel:(unsigned char)arg3 ;
-(void)sendProgramChange:(unsigned char)arg1 onChannel:(unsigned char)arg2 ;
-(void)sendProgramChange:(unsigned char)arg1 bankMSB:(unsigned char)arg2 bankLSB:(unsigned char)arg3 onChannel:(unsigned char)arg4 ;
-(void)sendMIDIEvent:(unsigned char)arg1 data1:(unsigned char)arg2 data2:(unsigned char)arg3 ;
-(void)sendMIDIEvent:(unsigned char)arg1 data1:(unsigned char)arg2 ;
-(void)sendMIDISysExEvent:(id)arg1 ;
@end


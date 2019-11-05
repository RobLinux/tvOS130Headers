/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVAudioUnitTimeEffect.h>

@interface AVAudioUnitTimePitch : AVAudioUnitTimeEffect

@property (assign,nonatomic) float rate; 
@property (assign,nonatomic) float pitch; 
@property (assign,nonatomic) float overlap; 
-(id)init;
-(float)pitch;
-(void)setPitch:(float)arg1 ;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(void)setOverlap:(float)arg1 ;
-(float)overlap;
@end


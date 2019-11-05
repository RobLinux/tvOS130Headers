/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/KonaClip.h>

@interface AudioClip : KonaClip {

	BOOL startOffsetValidated;
	BOOL cachedFades;
	int cachedFadeIn;
	int cachedFadeOut;

}

@property (assign,nonatomic) int cachedFadeIn; 
@property (assign,nonatomic) int cachedFadeOut; 
@property (assign,nonatomic) BOOL cachedFades; 
@property (assign,nonatomic) int audioType; 
@property (assign,nonatomic) BOOL startOffsetValidated; 
+(int)defaultAudioTypeForClipType:(int)arg1 ;
+(int)defaultClipTypeForAudioType:(int)arg1 ;
+(id)backgroundClip;
+(id)soundEffectClip;
+(BOOL)audioEnabledByDefault;
-(id)init;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setDuration:(int)arg1 ;
-(int)startOffset;
-(void)setStartOffset:(int)arg1 ;
-(int)audioType;
-(void)setAudioType:(int)arg1 ;
-(int)audioFadeOutDuration;
-(void)setAudioFadeOutDuration:(int)arg1 ;
-(int)clipType;
-(BOOL)hasAudioCharacteristic;
-(void)setAudioFadeInDuration:(int)arg1 ;
-(int)audioFadeInDuration;
-(void)setStartOffsetValidated:(BOOL)arg1 ;
-(BOOL)startOffsetValidated;
-(void)setContentsFromPlist:(id)arg1 inProject:(id)arg2 ;
-(id)themeID;
-(void)setThemeID:(id)arg1 ;
-(void)setCachedFades:(BOOL)arg1 ;
-(BOOL)cachedFades;
-(void)setCachedFadeIn:(int)arg1 ;
-(void)setCachedFadeOut:(int)arg1 ;
-(void)validateFades;
-(int)cachedFadeIn;
-(int)cachedFadeOut;
-(id)asBackgroundAudioClip;
-(id)asForegroundAudioClip;
-(BOOL)isBackgroundAudio;
@end


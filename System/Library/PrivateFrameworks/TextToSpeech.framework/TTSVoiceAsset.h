/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextToSpeech/TTSAssetBase.h>
#import <TextToSpeech/NSSecureCoding.h>

@class NSString, NSArray;

@interface TTSVoiceAsset : TTSAssetBase <NSSecureCoding> {

	BOOL _isInstalled;
	BOOL _isBuiltInVoice;
	NSString* _name;
	NSString* _identifier;
	NSArray* _languages;
	long long _gender;
	long long _footprint;
	NSString* _voicePath;

}

@property (nonatomic,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSArray * languages;              //@synthesize languages=_languages - In the implementation block
@property (nonatomic,readonly) long long gender;                 //@synthesize gender=_gender - In the implementation block
@property (nonatomic,readonly) long long footprint;              //@synthesize footprint=_footprint - In the implementation block
@property (nonatomic,readonly) BOOL isInstalled;                 //@synthesize isInstalled=_isInstalled - In the implementation block
@property (nonatomic,readonly) BOOL isBuiltInVoice;              //@synthesize isBuiltInVoice=_isBuiltInVoice - In the implementation block
@property (nonatomic,retain) NSString * voicePath;               //@synthesize voicePath=_voicePath - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)isInstalled;
-(long long)gender;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSArray *)languages;
-(long long)footprint;
-(NSString *)voicePath;
-(void)setVoicePath:(NSString *)arg1 ;
-(BOOL)isBuiltInVoice;
-(id)initWithName:(id)arg1 languages:(id)arg2 gender:(long long)arg3 footprint:(long long)arg4 isInstalled:(BOOL)arg5 isBuiltIn:(BOOL)arg6 masteredVersion:(id)arg7 compatibilityVersion:(id)arg8 ;
@end


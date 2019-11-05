/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMediaSelectionOption.h>

@class AVAssetWriterInput, NSString, NSDictionary, NSArray;

@interface AVAssetWriterInputSelectionOption : AVMediaSelectionOption {

	AVAssetWriterInput* _input;
	NSString* _mediaType;
	NSDictionary* _outputSettings;
	opaqueCMFormatDescriptionRef _sourceFormatHint;
	NSString* _languageCode;
	NSString* _extendedLanguageTag;
	NSArray* _metadata;
	NSDictionary* _trackReferences;
	BOOL _displaysNonForcedSubtitles;
	BOOL _enabled;

}

@property (nonatomic,readonly) NSString * mediaType;                                       //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) NSDictionary * outputSettings;                              //@synthesize outputSettings=_outputSettings - In the implementation block
@property (nonatomic,readonly) opaqueCMFormatDescriptionRef sourceFormatHint;              //@synthesize sourceFormatHint=_sourceFormatHint - In the implementation block
@property (nonatomic,readonly) NSString * languageCode;                                    //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,readonly) NSString * extendedLanguageTag;                             //@synthesize extendedLanguageTag=_extendedLanguageTag - In the implementation block
@property (nonatomic,readonly) NSArray * metadata;                                         //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSDictionary * trackReferences;                             //@synthesize trackReferences=_trackReferences - In the implementation block
@property (nonatomic,readonly) BOOL displaysNonForcedSubtitles;                            //@synthesize displaysNonForcedSubtitles=_displaysNonForcedSubtitles - In the implementation block
@property (nonatomic,readonly) AVAssetWriterInput * input;                                 //@synthesize input=_input - In the implementation block
+(id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)arg1 displaysNonForcedSubtitles:(BOOL)arg2 ;
+(id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)dealloc;
-(id)locale;
-(NSString *)languageCode;
-(id)propertyList;
-(AVAssetWriterInput *)input;
-(NSArray *)metadata;
-(NSString *)mediaType;
-(NSString *)extendedLanguageTag;
-(NSDictionary *)trackReferences;
-(id)commonMetadata;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(BOOL)isPlayable;
-(NSDictionary *)outputSettings;
-(opaqueCMFormatDescriptionRef)sourceFormatHint;
-(id)initWithAssetWriterInput:(id)arg1 ;
-(id)initWithAssetWriterInput:(id)arg1 displaysNonForcedSubtitles:(BOOL)arg2 ;
-(BOOL)_hasEqualValueForKey:(id)arg1 asObject:(id)arg2 ;
-(id)_taggedCharacteristics;
-(id)_ancillaryDescription;
-(id)mediaSubTypes;
-(BOOL)_isAuxiliaryContent;
-(BOOL)_isDesignatedDefault;
-(id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1 ;
-(BOOL)displaysNonForcedSubtitles;
@end


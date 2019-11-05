/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVFigObjectInspector.h>
#import <AVFoundation/NSCopying.h>

@class NSArray, NSDictionary, AVMetadataItem, NSString, NSData, AVDisplayCriteria;

@interface AVAssetInspector : AVFigObjectInspector <NSCopying>

@property (nonatomic,readonly) SCD_Struct_AV7 duration; 
@property (nonatomic,readonly) float preferredRate; 
@property (nonatomic,readonly) float preferredVolume; 
@property (nonatomic,readonly) float preferredSoundCheckVolumeNormalization; 
@property (nonatomic,readonly) CGAffineTransform preferredTransform; 
@property (nonatomic,readonly) SCD_Struct_AV7 minimumTimeOffsetFromLive; 
@property (nonatomic,readonly) CGSize naturalSize; 
@property (nonatomic,readonly) int naturalTimeScale; 
@property (nonatomic,readonly) BOOL providesPreciseDurationAndTiming; 
@property (nonatomic,readonly) long long trackCount; 
@property (nonatomic,readonly) NSArray * trackIDs; 
@property (nonatomic,readonly) NSArray * alternateTrackGroups; 
@property (nonatomic,readonly) NSDictionary * trackReferences; 
@property (getter=_mediaSelectionGroupDictionaries,nonatomic,readonly) NSArray * mediaSelectionGroupDictionaries; 
@property (nonatomic,readonly) AVMetadataItem * creationDate; 
@property (nonatomic,readonly) NSString * lyrics; 
@property (nonatomic,readonly) NSArray * commonMetadata; 
@property (nonatomic,readonly) NSArray * availableMetadataFormats; 
@property (getter=isPlayable,nonatomic,readonly) BOOL playable; 
@property (getter=isExportable,nonatomic,readonly) BOOL exportable; 
@property (getter=isReadable,nonatomic,readonly) BOOL readable; 
@property (getter=isComposable,nonatomic,readonly) BOOL composable; 
@property (getter=isCompatibleWithSavedPhotosAlbum,nonatomic,readonly) BOOL compatibleWithSavedPhotosAlbum; 
@property (getter=isCompatibleWithAirPlayVideo,nonatomic,readonly) BOOL compatibleWithAirPlayVideo; 
@property (nonatomic,readonly) NSData * SHA1Digest; 
@property (nonatomic,readonly) BOOL canContainFragments; 
@property (nonatomic,readonly) BOOL containsFragments; 
@property (nonatomic,readonly) SCD_Struct_AV7 overallDurationHint; 
@property (nonatomic,readonly) long long firstFragmentSequenceNumber; 
@property (nonatomic,readonly) long long fragmentCount; 
@property (nonatomic,readonly) id propertyListForProxy; 
@property (nonatomic,readonly) NSString * identifyingTagClass; 
@property (nonatomic,readonly) NSString * identifyingTag; 
@property (nonatomic,readonly) CGSize maximumVideoResolution; 
@property (nonatomic,readonly) NSArray * availableVideoDynamicRanges; 
@property (nonatomic,readonly) AVDisplayCriteria * preferredDisplayCriteria; 
@property (getter=_instanceIdentifier,nonatomic,readonly) NSString * instanceIdentifier; 
@property (nonatomic,readonly) BOOL supportsAnalysisReporting; 
@property (getter=_assetAnalysisMessages,nonatomic,readonly) NSArray * assetAnalysisMessages; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_AV7)duration;
-(AVMetadataItem *)creationDate;
-(BOOL)hasProtectedContent;
-(id)_instanceIdentifier;
-(float)preferredRate;
-(float)preferredVolume;
-(float)preferredSoundCheckVolumeNormalization;
-(CGAffineTransform)preferredTransform;
-(CGSize)maximumVideoResolution;
-(NSArray *)availableVideoDynamicRanges;
-(AVDisplayCriteria *)preferredDisplayCriteria;
-(SCD_Struct_AV7)minimumTimeOffsetFromLive;
-(CGSize)naturalSize;
-(int)naturalTimeScale;
-(BOOL)providesPreciseDurationAndTiming;
-(NSArray *)alternateTrackGroups;
-(NSArray *)trackIDs;
-(id)_mediaSelectionGroupDictionaries;
-(NSDictionary *)trackReferences;
-(NSString *)lyrics;
-(NSArray *)commonMetadata;
-(NSArray *)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(long long)trackCount;
-(BOOL)isPlayable;
-(BOOL)isExportable;
-(BOOL)isReadable;
-(BOOL)isComposable;
-(BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)arg1 ;
-(BOOL)isCompatibleWithSavedPhotosAlbum;
-(BOOL)isCompatibleWithAirPlayVideo;
-(BOOL)canContainFragments;
-(BOOL)containsFragments;
-(SCD_Struct_AV7)overallDurationHint;
-(BOOL)supportsAnalysisReporting;
-(id)_assetAnalysisMessages;
-(long long)firstFragmentSequenceNumber;
-(long long)fragmentCount;
-(NSString *)identifyingTagClass;
-(NSString *)identifyingTag;
-(NSData *)SHA1Digest;
-(id)propertyListForProxy;
-(id)makePropertyListForProxyWithOptions:(id)arg1 ;
@end


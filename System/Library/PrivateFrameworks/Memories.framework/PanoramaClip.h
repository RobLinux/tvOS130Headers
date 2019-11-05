/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/KenBurnsClip.h>
#import <Memories/CompoundClipInformation.h>

@class NSArray, KenBurnsClip, NSString;

@interface PanoramaClip : KenBurnsClip <CompoundClipInformation> {

	unsigned long long _panoramaStyle;
	unsigned long long _panoramaDirection;
	double _panoramaTransitionDuration;
	double _burstAcrossSubClipDuration;
	NSArray* _detectedFaceRects;
	NSArray* _containedClips;
	KenBurnsClip* _templateClip;

}

@property (nonatomic,retain) NSArray * containedClips;                          //@synthesize containedClips=_containedClips - In the implementation block
@property (nonatomic,retain) KenBurnsClip * templateClip;                       //@synthesize templateClip=_templateClip - In the implementation block
@property (nonatomic,readonly) int projectFrameRate; 
@property (nonatomic,readonly) double projectAspectRatio; 
@property (assign,nonatomic) unsigned long long panoramaStyle;                  //@synthesize panoramaStyle=_panoramaStyle - In the implementation block
@property (assign,nonatomic) unsigned long long panoramaDirection;              //@synthesize panoramaDirection=_panoramaDirection - In the implementation block
@property (assign,nonatomic) double panoramaTransitionDuration;                 //@synthesize panoramaTransitionDuration=_panoramaTransitionDuration - In the implementation block
@property (assign,nonatomic) double burstAcrossSubClipDuration;                 //@synthesize burstAcrossSubClipDuration=_burstAcrossSubClipDuration - In the implementation block
@property (nonatomic,retain) NSArray * detectedFaceRects;                       //@synthesize detectedFaceRects=_detectedFaceRects - In the implementation block
@property (nonatomic,readonly) BOOL panSupportsDoublePan; 
@property (nonatomic,readonly) BOOL panSupportsTriplePan; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedRandomNumberGenerator;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)setDuration:(int)arg1 ;
-(BOOL)isPano;
-(NSArray *)containedClips;
-(unsigned long long)panoramaStyle;
-(void)setContainedClips:(NSArray *)arg1 ;
-(void)setPanoramaDirection:(unsigned long long)arg1 ;
-(void)setPanoramaTransitionDuration:(double)arg1 ;
-(BOOL)panSupportsDoublePan;
-(BOOL)panSupportsTriplePan;
-(BOOL)isBurstAcrossStyleSuitable;
-(void)setBurstAcrossSubClipDuration:(double)arg1 ;
-(void)setPanoramaStyle:(unsigned long long)arg1 ;
-(id)initWithKenBurnsClip:(id)arg1 ;
-(int)projectFrameRate;
-(id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2 ;
-(void)adjustDurationsOfClips:(id)arg1 withInTransition:(id)arg2 outTransition:(id)arg3 ;
-(id)plistRepresentationFromProject:(id)arg1 ;
-(void)setContentsFromPlist:(id)arg1 inProject:(id)arg2 ;
-(void)takePropertiesFromKenBurnsClip:(id)arg1 ;
-(BOOL)expandsEditList;
-(double)projectAspectRatio;
-(void)setTemplateClip:(KenBurnsClip *)arg1 ;
-(CGSize)panoramaViewportSizeForImageSize:(CGSize)arg1 ;
-(id)descriptionOfPanoramaStyle;
-(id)descriptionOfPanoramaDirection;
-(double)panoramaTransitionDuration;
-(double)burstAcrossSubClipDuration;
-(KenBurnsClip *)templateClip;
-(unsigned long long)panoramaDirection;
-(id)buildClipsForSinglePanorama;
-(id)buildClipsForDoublePanorama;
-(id)buildClipsForTriplePanorama;
-(id)appendLetterboxZoomOutToClips:(id)arg1 zoomOutFromLastClip:(BOOL)arg2 ;
-(id)buildClipsForBurstAcrossPanorama;
-(void)computeBurstAcrossClipCount:(int*)arg1 minLeftEdge:(double*)arg2 maxLeftEdge:(double*)arg3 ;
-(void)equalizeDurationsOfClips:(id)arg1 totalDuration:(int)arg2 ;
-(void)lowLevelCustomizePanoramaKB:(id)arg1 panRight:(BOOL)arg2 leftLimit:(double)arg3 rightLimit:(double)arg4 allowLeftCrop:(BOOL)arg5 allowRightCrop:(BOOL)arg6 leftZoom:(double)arg7 rightZoom:(double)arg8 ;
-(void)offsetKenBurnsFramesForFaces:(id)arg1 panRight:(BOOL)arg2 ;
-(CGRect)rectEnclosingAllFacesWithFaceScale:(double)arg1 imageRect:(CGRect)arg2 ;
-(int)totalDurationOfClips:(id)arg1 ;
-(void)logDetectedFaceRects;
-(NSArray *)detectedFaceRects;
-(void)setDetectedFaceRects:(NSArray *)arg1 ;
@end


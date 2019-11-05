/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ATVSlideshow/ATVSlideshow-Structs.h>
@class NSString, NSDictionary, NSRecursiveLock, NSMutableDictionary;

@interface MPLayerGroupInternal : NSObject {

	double numberOfLoops;
	unsigned long long loopingMode;
	double durationPadding;
	double duration;
	double timeIn;
	double phaseInDuration;
	double phaseOutDuration;
	NSString* backgroundAudioID;
	CGColorRef backgroundColor;
	NSDictionary* authoredVersionInfo;
	long long sendLiveNotification;
	NSRecursiveLock* liveLock;
	BOOL autoAdjustDuration;
	BOOL isDocumentLayerGroup;
	BOOL isTriggered;
	BOOL startsPaused;
	BOOL usedAllPaths;
	double opacity;
	CGPoint position;
	double zPosition;
	CGSize size;
	double rotationAngle;
	double xRotationAngle;
	double yRotationAngle;
	double scale;
	long long zIndex;
	NSString* uuid;
	NSMutableDictionary* layerKeyDictionary;
	NSDictionary* initialState;

}

@property (assign,nonatomic) double numberOfLoops; 
@property (assign,nonatomic) unsigned long long loopingMode; 
@property (assign,nonatomic) double durationPadding; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double timeIn; 
@property (assign,nonatomic) BOOL isTriggered; 
@property (assign,nonatomic) BOOL startsPaused; 
@property (assign,nonatomic) double phaseInDuration; 
@property (assign,nonatomic) double phaseOutDuration; 
@property (nonatomic,retain) NSString * backgroundAudioID; 
@property (assign,nonatomic) CGColorRef backgroundColor; 
@property (nonatomic,retain) NSDictionary * authoredVersionInfo; 
@property (assign,nonatomic) long long sendLiveNotification; 
@property (nonatomic,retain) NSRecursiveLock * liveLock; 
@property (assign,nonatomic) BOOL autoAdjustDuration; 
@property (assign,nonatomic) BOOL isDocumentLayerGroup; 
@property (assign,nonatomic) BOOL usedAllPaths; 
@property (assign,nonatomic) double opacity; 
@property (assign,nonatomic) CGPoint position; 
@property (assign,nonatomic) double zPosition; 
@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) double rotationAngle; 
@property (assign,nonatomic) double xRotationAngle; 
@property (assign,nonatomic) double yRotationAngle; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) long long zIndex; 
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSMutableDictionary * layerKeyDictionary; 
@property (nonatomic,retain) NSDictionary * initialState; 
-(void)dealloc;
-(void)finalize;
-(CGSize)size;
-(NSString *)uuid;
-(double)scale;
-(CGPoint)position;
-(double)duration;
-(void)setScale:(double)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(double)opacity;
-(double)zPosition;
-(void)setZPosition:(double)arg1 ;
-(void)setOpacity:(double)arg1 ;
-(CGColorRef)backgroundColor;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(void)setNumberOfLoops:(double)arg1 ;
-(double)numberOfLoops;
-(long long)zIndex;
-(void)setZIndex:(long long)arg1 ;
-(void)setInitialState:(NSDictionary *)arg1 ;
-(NSDictionary *)initialState;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
-(void)setTimeIn:(double)arg1 ;
-(void)setPhaseInDuration:(double)arg1 ;
-(void)setPhaseOutDuration:(double)arg1 ;
-(BOOL)isTriggered;
-(void)setIsTriggered:(BOOL)arg1 ;
-(double)phaseInDuration;
-(double)phaseOutDuration;
-(BOOL)autoAdjustDuration;
-(unsigned long long)loopingMode;
-(void)setUsedAllPaths:(BOOL)arg1 ;
-(NSDictionary *)authoredVersionInfo;
-(void)setAuthoredVersionInfo:(NSDictionary *)arg1 ;
-(void)setLoopingMode:(unsigned long long)arg1 ;
-(void)setIsDocumentLayerGroup:(BOOL)arg1 ;
-(double)xRotationAngle;
-(double)yRotationAngle;
-(void)setXRotationAngle:(double)arg1 ;
-(void)setYRotationAngle:(double)arg1 ;
-(void)setStartsPaused:(BOOL)arg1 ;
-(void)setDurationPadding:(double)arg1 ;
-(double)timeIn;
-(BOOL)startsPaused;
-(NSMutableDictionary *)layerKeyDictionary;
-(double)durationPadding;
-(NSString *)backgroundAudioID;
-(void)setBackgroundAudioID:(NSString *)arg1 ;
-(long long)sendLiveNotification;
-(void)setSendLiveNotification:(long long)arg1 ;
-(NSRecursiveLock *)liveLock;
-(void)setLiveLock:(NSRecursiveLock *)arg1 ;
-(void)setAutoAdjustDuration:(BOOL)arg1 ;
-(BOOL)isDocumentLayerGroup;
-(void)setLayerKeyDictionary:(NSMutableDictionary *)arg1 ;
-(BOOL)usedAllPaths;
@end


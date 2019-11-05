/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMarimbaProducer.opplugin/OpusMarimbaProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusMarimbaProducer/OpusMarimbaProducer-Structs.h>
@class NSString, NSMutableDictionary;

@interface MPNavigatorInternal : NSObject {

	NSString* startPlugID;
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
	double numberOfLoops;
	double duration;
	double timeIn;
	double phaseInDuration;
	double phaseOutDuration;
	NSMutableDictionary* layerKeyDictionary;
	BOOL isTriggered;
	BOOL startsPaused;

}

@property (nonatomic,retain) NSString * startPlugID; 
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
@property (assign,nonatomic) double numberOfLoops; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double timeIn; 
@property (assign,nonatomic) BOOL isTriggered; 
@property (assign,nonatomic) BOOL startsPaused; 
@property (assign,nonatomic) double phaseInDuration; 
@property (assign,nonatomic) double phaseOutDuration; 
@property (nonatomic,retain) NSMutableDictionary * layerKeyDictionary; 
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
-(void)setNumberOfLoops:(double)arg1 ;
-(double)numberOfLoops;
-(long long)zIndex;
-(void)setZIndex:(long long)arg1 ;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
-(void)setTimeIn:(double)arg1 ;
-(void)setPhaseInDuration:(double)arg1 ;
-(void)setPhaseOutDuration:(double)arg1 ;
-(BOOL)isTriggered;
-(void)setIsTriggered:(BOOL)arg1 ;
-(double)phaseInDuration;
-(double)phaseOutDuration;
-(double)xRotationAngle;
-(double)yRotationAngle;
-(void)setXRotationAngle:(double)arg1 ;
-(void)setYRotationAngle:(double)arg1 ;
-(void)setStartsPaused:(BOOL)arg1 ;
-(double)timeIn;
-(BOOL)startsPaused;
-(NSMutableDictionary *)layerKeyDictionary;
-(void)setLayerKeyDictionary:(NSMutableDictionary *)arg1 ;
-(NSString *)startPlugID;
-(void)setStartPlugID:(NSString *)arg1 ;
@end


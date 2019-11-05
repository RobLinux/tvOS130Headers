/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMarimbaProducer.opplugin/OpusMarimbaProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusMarimbaProducer/OpusMarimbaProducer-Structs.h>
@interface MRSphere : NSObject {

	float* mVertices;
	float* mTextureCoordinates;
	float* mNormals;
	unsigned mLongitudeResolution;
	unsigned mLatitudeResolution;
	float mHalfLongitudeAngle;
	float mHalfLatitudeAngle;
	float mRadius;

}

@property (assign,nonatomic) unsigned longitudeResolution; 
@property (assign,nonatomic) unsigned latitudeResolution; 
@property (assign,nonatomic) float halfLongitudeAngle; 
@property (assign,nonatomic) float halfLatitudeAngle; 
@property (assign,nonatomic) float radius; 
-(id)init;
-(void)dealloc;
-(float)radius;
-(void)setRadius:(float)arg1 ;
-(void)renderDumbImage:(id)arg1 inContext:(id)arg2 atPosition:(CGPoint)arg3 andSize:(CGSize)arg4 ;
-(unsigned)longitudeResolution;
-(void)setLongitudeResolution:(unsigned)arg1 ;
-(unsigned)latitudeResolution;
-(void)setLatitudeResolution:(unsigned)arg1 ;
-(float)halfLongitudeAngle;
-(void)setHalfLongitudeAngle:(float)arg1 ;
-(float)halfLatitudeAngle;
-(void)setHalfLatitudeAngle:(float)arg1 ;
@end


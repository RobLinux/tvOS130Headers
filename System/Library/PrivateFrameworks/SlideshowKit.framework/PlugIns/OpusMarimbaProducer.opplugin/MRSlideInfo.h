/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMarimbaProducer.opplugin/OpusMarimbaProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusMarimbaProducer/OpusMarimbaProducer-Structs.h>
@class NSString;

@interface MRSlideInfo : NSObject {

	BOOL _isMain;
	NSString* _assetPath;
	unsigned long long _index;
	double _aspectRatio;
	double _time;
	double _scale;
	double _rotation;
	id _player;
	CGPoint _center;

}

@property (nonatomic,copy) NSString * assetPath;                    //@synthesize assetPath=_assetPath - In the implementation block
@property (assign,nonatomic) unsigned long long index;              //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) double aspectRatio;                    //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (assign,nonatomic) double time;                           //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) CGPoint center;                        //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) double scale;                          //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) double rotation;                       //@synthesize rotation=_rotation - In the implementation block
@property (assign,nonatomic) id player;                             //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) BOOL isMain;                           //@synthesize isMain=_isMain - In the implementation block
-(void)setIsMain:(BOOL)arg1 ;
-(id)description;
-(void)dealloc;
-(unsigned long long)index;
-(double)scale;
-(double)time;
-(void)setScale:(double)arg1 ;
-(void)setIndex:(unsigned long long)arg1 ;
-(double)rotation;
-(void)setRotation:(double)arg1 ;
-(void)setTime:(double)arg1 ;
-(id)player;
-(void)setPlayer:(id)arg1 ;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(double)aspectRatio;
-(void)setAspectRatio:(double)arg1 ;
-(BOOL)isMain;
-(void)setAssetPath:(NSString *)arg1 ;
-(NSString *)assetPath;
@end

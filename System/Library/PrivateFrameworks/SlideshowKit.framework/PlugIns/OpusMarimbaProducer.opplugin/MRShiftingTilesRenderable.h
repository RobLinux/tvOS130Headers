/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMarimbaProducer.opplugin/OpusMarimbaProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusMarimbaProducer/OpusMarimbaProducer-Structs.h>
@class MRImage, MRCroppingSprite;

@interface MRShiftingTilesRenderable : NSObject {

	MRImage* slide;
	MRCroppingSprite* sprite;
	CGPoint position;
	CGSize size;
	BOOL isBreak;

}

@property (nonatomic,retain) MRImage * slide; 
@property (nonatomic,retain) MRCroppingSprite * sprite; 
-(void)dealloc;
-(void)setSlide:(MRImage *)arg1 ;
-(MRImage *)slide;
-(MRCroppingSprite *)sprite;
-(void)setSprite:(MRCroppingSprite *)arg1 ;
@end


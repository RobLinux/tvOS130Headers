/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMarimbaProducer.opplugin/OpusMarimbaProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusMarimbaProducer/OpusMarimbaProducer-Structs.h>
#import <ATVSlideshow/MUPoolObject.h>

@class MRImage, NSString;

@interface MRPictureFrameRenderable : MUPoolObject {

	MRImage* image;
	CGRect rect;
	CGRect innerRect;
	CGRect outerRect;
	NSString* where;
	BOOL ignoreBlend;
	MRPictureFrameRenderable* next;

}

@property (nonatomic,retain) MRImage * image; 
@property (nonatomic,copy) NSString * where; 
+(SCD_Struct_MU3*)poolInfo;
-(void)dealloc;
-(void)purge;
-(MRImage *)image;
-(void)setImage:(MRImage *)arg1 ;
-(NSString *)where;
-(void)setWhere:(NSString *)arg1 ;
@end


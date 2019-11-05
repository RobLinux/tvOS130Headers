/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MUPoolObject.h>

@class MRImage, MRCroppingSprite;

@interface MRReflectionsRenderable : MUPoolObject {

	MRImage* _slide;
	MRCroppingSprite* _sprite;
	float _modelViewMatrix[16];
	CGPoint position;
	CGSize size;
	BOOL isShadow;
	MRReflectionsRenderable* next;
	BOOL needsFlipped;
	BOOL isBreak;

}
+(SCD_Struct_MR15*)poolInfo;
-(void)dealloc;
-(void)purge;
-(id)initWithSlide:(id)arg1 sprite:(id)arg2 modelViewMatrix:(const float*)arg3 position:(CGPoint)arg4 size:(CGSize)arg5 flipped:(BOOL)arg6 isShadow:(BOOL)arg7 isBreak:(BOOL)arg8 ;
@end

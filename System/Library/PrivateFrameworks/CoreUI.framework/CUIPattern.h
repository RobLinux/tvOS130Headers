/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@interface CUIPattern : NSObject {

	CGImageRef _patternImage;
	CGPatternRef _pattern;
	double _alpha;

}

@property (assign,nonatomic) double alpha;              //@synthesize alpha=_alpha - In the implementation block
-(id)description;
-(void)dealloc;
-(CGPatternRef)pattern;
-(double)alpha;
-(void)setAlpha:(double)arg1 ;
-(CGPatternRef)_newPattern;
-(id)initWithImageRef:(CGImageRef)arg1 ;
-(void)setPatternInContext:(CGContextRef)arg1 ;
-(CGImageRef)patternImageRef;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIGraphicsRendererFormat;

@interface UIGraphicsRendererContext : NSObject {

	CGContextRef _backingContext;
	UIGraphicsRendererFormat* _format;
	BOOL ___createsImages;

}

@property (assign,nonatomic) BOOL __createsImages;                             //@synthesize __createsImages=___createsImages - In the implementation block
@property (nonatomic,readonly) CGContextRef CGContext; 
@property (nonatomic,readonly) UIGraphicsRendererFormat * format;              //@synthesize format=_format - In the implementation block
-(void)dealloc;
-(UIGraphicsRendererFormat *)format;
-(CGContextRef)CGContext;
-(void)fillRect:(CGRect)arg1 ;
-(void)strokeRect:(CGRect)arg1 ;
-(void)clipToRect:(CGRect)arg1 ;
-(BOOL)__createsImages;
-(void)fillRect:(CGRect)arg1 blendMode:(int)arg2 ;
-(void)strokeRect:(CGRect)arg1 blendMode:(int)arg2 ;
-(id)initWithCGContext:(CGContextRef)arg1 format:(id)arg2 ;
-(void)set__createsImages:(BOOL)arg1 ;
@end

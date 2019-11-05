/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIVectorTextLayoutGlyph.h>
@class UIBezierPath;


@protocol _UIVectorTextLayoutGlyph <NSObject>
@property (nonatomic,readonly) unsigned short glyph; 
@property (nonatomic,readonly) CGRect rect; 
@property (nonatomic,readonly) UIBezierPath * path; 
@property (nonatomic,readonly) CGAffineTransform pathTransform; 
@required
-(UIBezierPath *)path;
-(CGRect)rect;
-(unsigned short)glyph;
-(CGAffineTransform)pathTransform;

@end


@class UIBezierPath, NSString;

@interface _UIVectorTextLayoutGlyph : NSObject <_UIVectorTextLayoutGlyph> {

	unsigned short _glyph;
	UIBezierPath* _path;
	CGRect _rect;
	CGAffineTransform _pathTransform;

}

@property (assign,nonatomic) unsigned short glyph;                         //@synthesize glyph=_glyph - In the implementation block
@property (assign,nonatomic) CGRect rect;                                  //@synthesize rect=_rect - In the implementation block
@property (nonatomic,retain) UIBezierPath * path;                          //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) CGAffineTransform pathTransform;              //@synthesize pathTransform=_pathTransform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIBezierPath *)path;
-(void)setPath:(UIBezierPath *)arg1 ;
-(CGRect)rect;
-(void)setRect:(CGRect)arg1 ;
-(unsigned short)glyph;
-(void)setGlyph:(unsigned short)arg1 ;
-(CGAffineTransform)pathTransform;
-(void)setPathTransform:(CGAffineTransform)arg1 ;
@end


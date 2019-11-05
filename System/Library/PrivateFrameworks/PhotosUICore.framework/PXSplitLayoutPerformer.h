/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXBaseLayoutPerformer.h>
#import <PhotosUICore/PXMutableLayoutPerformer.h>

@class NSArray, PXLayoutPerformerOutput;

@interface PXSplitLayoutPerformer : PXBaseLayoutPerformer <PXMutableLayoutPerformer> {

	NSArray* children;
	long long _layoutAxis;
	double _layoutRatio;
	double _interItemSpacing;

}

@property (assign,nonatomic) long long layoutAxis;                                //@synthesize layoutAxis=_layoutAxis - In the implementation block
@property (assign,nonatomic) double layoutRatio;                                  //@synthesize layoutRatio=_layoutRatio - In the implementation block
@property (assign,nonatomic) double interItemSpacing;                             //@synthesize interItemSpacing=_interItemSpacing - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX30 layoutInput; 
@property (nonatomic,retain) PXLayoutPerformerOutput * layoutOutput; 
@property (nonatomic,readonly) NSArray * children; 
+(CGSize)performLayoutWithLayoutInput:(SCD_Struct_PX30)arg1 layoutOutput:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(NSArray *)children;
-(void)setChildren:(NSArray *)arg1 ;
-(void)prepareForReuse;
-(CGSize)performLayout;
-(void)setInterItemSpacing:(double)arg1 ;
-(double)interItemSpacing;
-(long long)layoutAxis;
-(void)setLayoutAxis:(long long)arg1 ;
-(double)layoutRatio;
-(void)setLayoutRatio:(double)arg1 ;
@end

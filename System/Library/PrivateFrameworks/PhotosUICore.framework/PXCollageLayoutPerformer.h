/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXBaseLayoutPerformer.h>
#import <PhotosUICore/PXLayoutPerformer.h>

@class PXLeafLayoutPerformer, PXSplitLayoutPerformer, NSMutableArray, PXLayoutPerformerOutput, NSArray;

@interface PXCollageLayoutPerformer : PXBaseLayoutPerformer <PXLayoutPerformer> {

	BOOL _portraitBias;
	double _outerLayoutRatio;
	double _interItemSpacing;
	long long _numberOfVisibleItems;
	PXLeafLayoutPerformer* _singleItemPerformer;
	PXSplitLayoutPerformer* _twoItemPerformer;
	PXSplitLayoutPerformer* _threeItemPerformer;
	PXSplitLayoutPerformer* _threeItemNestedPerformer;
	NSMutableArray* _mutableChildren;

}

@property (nonatomic,retain) PXLeafLayoutPerformer * singleItemPerformer;                    //@synthesize singleItemPerformer=_singleItemPerformer - In the implementation block
@property (nonatomic,retain) PXSplitLayoutPerformer * twoItemPerformer;                      //@synthesize twoItemPerformer=_twoItemPerformer - In the implementation block
@property (nonatomic,retain) PXSplitLayoutPerformer * threeItemPerformer;                    //@synthesize threeItemPerformer=_threeItemPerformer - In the implementation block
@property (nonatomic,retain) PXSplitLayoutPerformer * threeItemNestedPerformer;              //@synthesize threeItemNestedPerformer=_threeItemNestedPerformer - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableChildren;                               //@synthesize mutableChildren=_mutableChildren - In the implementation block
@property (assign,nonatomic) double outerLayoutRatio;                                        //@synthesize outerLayoutRatio=_outerLayoutRatio - In the implementation block
@property (assign,nonatomic) double interItemSpacing;                                        //@synthesize interItemSpacing=_interItemSpacing - In the implementation block
@property (assign,nonatomic) BOOL portraitBias;                                              //@synthesize portraitBias=_portraitBias - In the implementation block
@property (assign,nonatomic) long long numberOfVisibleItems;                                 //@synthesize numberOfVisibleItems=_numberOfVisibleItems - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX30 layoutInput; 
@property (nonatomic,retain) PXLayoutPerformerOutput * layoutOutput; 
@property (nonatomic,readonly) NSArray * children; 
+(CGSize)performLayoutWithLayoutInput:(SCD_Struct_PX30)arg1 layoutOutput:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)init;
-(NSArray *)children;
-(void)prepareForReuse;
-(NSMutableArray *)mutableChildren;
-(void)setMutableChildren:(NSMutableArray *)arg1 ;
-(CGSize)performLayout;
-(void)setInterItemSpacing:(double)arg1 ;
-(double)interItemSpacing;
-(void)setOuterLayoutRatio:(double)arg1 ;
-(void)setPortraitBias:(BOOL)arg1 ;
-(double)outerLayoutRatio;
-(BOOL)portraitBias;
-(long long)numberOfVisibleItems;
-(void)setNumberOfVisibleItems:(long long)arg1 ;
-(PXLeafLayoutPerformer *)singleItemPerformer;
-(void)setSingleItemPerformer:(PXLeafLayoutPerformer *)arg1 ;
-(PXSplitLayoutPerformer *)twoItemPerformer;
-(void)setTwoItemPerformer:(PXSplitLayoutPerformer *)arg1 ;
-(PXSplitLayoutPerformer *)threeItemPerformer;
-(void)setThreeItemPerformer:(PXSplitLayoutPerformer *)arg1 ;
-(PXSplitLayoutPerformer *)threeItemNestedPerformer;
-(void)setThreeItemNestedPerformer:(PXSplitLayoutPerformer *)arg1 ;
@end

